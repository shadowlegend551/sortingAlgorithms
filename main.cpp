#include <iostream>
#include <chrono>
#include <vector>

#include "utilities.hpp"
#include "sorting_algorithms.hpp"

int main()
{
    std::vector<int> used_vector;

    // Push numbers 1 through 10 to vector.
    for (int i = 1; i < 11; i++)
    {
        used_vector.push_back(i);
    }

    // Randomize the order of the numbers and print the randomized vector.
    used_vector = randomize(used_vector);
    std::cout << "\nOriginal unsorted array: ";

    for (int i : used_vector)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    // Sort the vector and print the result.
    used_vector = insertion_sort(used_vector);
    std::cout << "Sorted array: ";

    for (int i : used_vector)
    {
        std::cout << i << ' ';
    }
    std::cout << "\n\n";

    return 0;
}
