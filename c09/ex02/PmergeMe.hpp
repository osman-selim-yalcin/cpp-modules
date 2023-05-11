#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <cstdio>

#define K 1

void insertion_sort_vector(std::vector< int > &vector, int start, int end);
void merge_vector(std::vector< int > &vector, int start, int middle, int end);
void merge_insert_vector(std::vector< int > &vector, int start, int end);

void insertion_sort_deque(std::deque< int > &que, int start, int end);
void merge_deque(std::deque< int > &que, int start, int middle, int end) ;
void merge_insert_deque(std::deque< int > &que, int start, int end);
