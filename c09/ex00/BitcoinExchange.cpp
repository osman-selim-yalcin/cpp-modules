#include "BitcoinExchange.hpp"

std::map< std::string, double > read_data()
{
	std::map< std::string, double > data;
	std::ifstream file("data.csv");
	if (!file.good())
	{
		std::cerr << "Error: 'data' file could not be opened." << std::endl;
		exit(1);
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::stringstream string_stream(line);
		std::string date, rate;
		std::getline(string_stream, date, ',');
		std::getline(string_stream, rate, ',');
		data[date] = std::stod(rate);
	}
	return data;
}

void check_input(char *file, std::map< std::string, double > data)
{
	std::ifstream input_file(file);
	if (!input_file)
	{
		std::cerr << "Error: could not open file." << std::endl;
		exit(1);
	}
	std::string line;
	std::getline(input_file, line);
	if (line.compare("date | value"))
	{
		std::cerr << "Error: bad formatted input." << std::endl;
		exit(1);
	}
	while (std::getline(input_file, line))
	{
		std::istringstream input_str_stream(line);
		std::string date;
		std::string value;
		char seperator;
		if(!(input_str_stream >> date >> seperator >> value) || seperator != '|')
			std::cout << "Error: bad input => " << date << std::endl;
		else if(!is_valid_date(date) || !is_valid_value(value))
			std::cout << "Error: bad input => " << date << std::endl;
		else if(stod(value) < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if(stod(value) > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else if (stod(value) < 1000 || stod(value) > 0)
		{
			double total = stod(value) * find_rate(date, data);
			std::cout << date << " => " << value << " = " << total << std::endl;
		}
		else
			std::cout << "Error: bad input => " << date << std::endl;
	}
}

double find_rate(std::string date, const std::map< std::string, double > &data)
{
	std::map< std::string, double >::const_iterator it = data.find(date);
	if (it != data.end())
	{
		return it->second;
	}
	else
	{
		std::string previous_day = find_last_rate(date);
		if (!previous_day.compare("invalid"))
		{
			return 0;
		}
		return find_rate(previous_day, data);
	}
}

std::string find_last_rate(const std::string &date)
{
	int year, month, day;
	sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
	int prev_day = day - 1;
	int prev_month = month;
	int prev_year = year;
	if (prev_day == 0)
	{
		prev_month = month - 1;
		if (prev_month == 0) {
			prev_month = 12;
			prev_year = year - 1;
			if (prev_year < 2009)
			{
				return ("invalid");
			}
		}
		switch (prev_month)
		{
			case 2:
				if (prev_year % 4 == 0 && (prev_year % 100 != 0 || prev_year % 400 == 0))
					prev_day = 29;
				else
					prev_day = 28;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				prev_day = 30;
				break;
			default:
				prev_day = 31;
		}
	}

	std::string prev_date = std::to_string(prev_year) + "-";
	if (prev_month < 10)
		prev_date += "0";
	prev_date += std::to_string(prev_month) + "-";
	if (prev_day < 10)
		prev_date += "0";
	prev_date += std::to_string(prev_day);
	return (prev_date);
}

bool is_valid_date(const std::string &date)
{
	if (date.length() != 10)
		return false;

	int year, month, day;
	char separator1, separator2;
	std::istringstream input_str_stream(date);

	input_str_stream >> year >> separator1 >> month >> separator2 >> day;
	if (input_str_stream.fail() || separator1 != '-' || separator2 != '-' ||
		year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;

	bool leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	if ((month == 2 && (leap_year ? day > 29 : day > 28)) ||
		((month == 4 || month == 6 || month == 9 || month == 11) && day > 30))
		return false;

	return true;
}

bool is_valid_value(const std::string &value)
{
	try {
		std::stod(value);
	} catch (const std::invalid_argument& e) {
		return false;
	}
	return true;
}
