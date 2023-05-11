#include "PmergeMe.hpp"

void insertion_sort_vector(std::vector< int > &vector, int start, int end)
{
	for (int i = start; i < end; i++)
	{
		int tmp = vector[i + 1];
		int j = i + 1;
		while (j > start && vector[j - 1] > tmp)
		{
			vector[j] = vector[j - 1];
			j--;
		}
		vector[j] = tmp;
	}
}

void merge_vector(std::vector< int > &vector, int start, int middle, int end)
{
	int n1 = middle - start + 1;
	int n2 = end - middle;

	std::vector< int > ls(n1), rs(n2);

	for (int i = 0; i < n1; i++)
		ls[i] = vector[start + i];
	for (int i = 0; i < n2; i++)
		rs[i] = vector[middle + 1 + i];

	int rsi = 0;
	int lsi = 0;
	
	for (int i = start; i <= end; i++)
	{
		if (rsi == n2)
		{
			vector[i] = ls[lsi];
			lsi++;
		}
		else if (lsi == n1)
		{
			vector[i] = rs[rsi];
			rsi++;
		}
		else if (rs[rsi] > ls[lsi])
		{
			vector[i] = ls[lsi];
			lsi++;
		}
		else
		{
			vector[i] = rs[rsi];
			rsi++;
		}
	}
}

void merge_insert_vector(std::vector< int > &vector, int start, int end)
{
	if (end - start > K)
	{
		int middle = (start + end) / 2;
		merge_insert_vector(vector, start, middle);
		merge_insert_vector(vector, middle + 1, end);
		merge_vector(vector, start, middle, end);
	}
	else
	{
		insertion_sort_vector(vector, start, end);
	}
}

void insertion_sort_deque(std::deque< int > &que, int start, int end)
{
	for (int i = start; i < end; ++i)
	{
		int tmp = que[i + 1];
		int j = i + 1;
		while (j > start && que[j - 1] > tmp)
		{
			que[j] = que[j - 1];
			--j;
		}
		que[j] = tmp;
	}
}

void merge_deque(std::deque< int > &que, int start, int middle, int end)
{
	int n1 = middle - start + 1;
	int n2 = end - middle;
	std::deque< int > ls, rs;

	for (int i = 0; i < n1; i++)
		ls.push_back(que[start + i]);

	for (int i = 0; i < n2; i++)
		rs.push_back(que[middle + 1 + i]);

	int rsi = 0;
	int lsi = 0;

	for (int i = start; i <= end; ++i)
	{
		if (rsi == n2)
		{
			que[i] = ls.front();
			ls.pop_front();
			lsi++;
		}
		else if (lsi == n1)
		{
			que[i] = rs.front();
			rs.pop_front();
			rsi++;
		}
		else if (rs.front() > ls.front())
		{
			que[i] = ls.front();
			ls.pop_front();
			lsi++;
		}
		else
		{
			que[i] = rs.front();
			rs.pop_front();
			rsi++;
		}
	}
}

void merge_insert_deque(std::deque< int > &que, int start, int end)
{
	if (end - start > K)
	{
		int middle = (start + end) / 2;
		merge_insert_deque(que, start, middle);
		merge_insert_deque(que, middle + 1, end);
		merge_deque(que, start, middle, end);
	}
	else
	{
		insertion_sort_deque(que, start, end);
	}
}
