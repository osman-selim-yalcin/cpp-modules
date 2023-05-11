#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <exception>
#include <map>

double find_rate(std::string date, const std::map< std::string, double > &data);
void check_input(char *file, std::map< std::string, double > data);
std::map< std::string, double > read_data();
std::string find_last_rate(const std::string &date);
bool is_valid_date(const std::string &date);
bool is_valid_value(const std::string &value);
