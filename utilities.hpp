#ifndef UTILITIES_H
#define UTILITIES_H

#include <vector>

/*
Has useful functions, such as vector randomization and a function that checks if a vector is sorted.
*/

int get_time();

void swap_numbers(int *p0, int *p1);

std::vector<int> randomize(std::vector<int> vector);

bool check_if_sorted(std::vector<int> unk_sorted);

#endif