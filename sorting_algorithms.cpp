#include "utilities.hpp"
#include "sorting_algorithms.hpp"
#include <iostream>
#include <vector>

// For bubble sort, both best and worst case time complexities are O(N^2).
std::vector<int> bubble_sort(std::vector<int> input_vector)
{
    int temporary_number;

    // For vector length.
    for (int i = 0; i < input_vector.size(); i++)
    {
        // For each item in vector.
        for (int j = 0; j < input_vector.size() - 1; j++)
        {
            if (input_vector[j] > input_vector[j + 1])
            {
                // Swaps the numbers in indices j and j+1.
                swap_numbers(&input_vector[j], &input_vector[j + 1]);
            }
        }
    }

    return input_vector;
}

// For optimized bubble sort the worst case time complexity is still O(N^2), that is, when the data set is reversed.
// Best case time complexity is O(N), because if array is already sorted, it returns after first iteration.
std::vector<int> optimized_bubble_sort(std::vector<int> input_vector)
{
    int i, j, temporary_number;
    bool swap_done;

    for (i = 0; i < input_vector.size(); i++)
    {

        // No swaps done yet this iteration.
        swap_done = false;

        for (j = 0; j < input_vector.size() - 1; j++)
        {
            if (input_vector[j] > input_vector[j + 1])
            {
                swap_numbers(&input_vector[j], &input_vector[j + 1]);

                // Sets swap_done to true, if some numbers were unsorted.
                swap_done = true;
            }
        }

        // If vector already sorted, break and return.
        if (swap_done == false)
        {
            break;
        }
    }

    return input_vector;
}

// For selection sort, all worst, best and average time complexities are O(N^2).
std::vector<int> selection_sort(std::vector<int> input_vector)
{
    int i, j, smallest_number_index, aux_number;

    // For the length of vector.
    for (i = 0; i < input_vector.size(); i++)
    {
        smallest_number_index = i;

        // Iterates through the vector starting from index i, which increases each time.
        for (j = i; j < input_vector.size(); j++)
        {
            // If item in current index is smaller than the smallest number thus far, change it.
            if (input_vector[j] < input_vector[smallest_number_index])
            {
                smallest_number_index = j;
            }
        }

        // Switch first number starting from index i, with the smallest number.
        swap_numbers(&input_vector[i], &input_vector[smallest_number_index]);
    }

    return input_vector;
}

// For insertion sort, worst and average time complexities are both O(N^2).
// Best case time complexity is O(N).
std::vector<int> insertion_sort(std::vector<int> input_vector)
{
    int i, j;

    // Starting from 1st index, because 0th index is a sorted list in and of itself.
    for (i = 1; i < input_vector.size(); i++)
    {
        for (j = i; j >= 1; j--)
        {
            if (input_vector[j] < input_vector[j - 1])
            {
                swap_numbers(&input_vector[j], &input_vector[j - 1]);
            }

            // Ends for j -loop if all values in index [j-n] are smaller than in [j].
            else
            {
                break;
            }
        }
    }

    return input_vector;
}

/*
std::vector<int> sort_template(std::vector<int> input_vector)
{
    return input_vector;
}
*/
