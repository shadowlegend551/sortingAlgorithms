#include "utilities.hpp"
#include <chrono>
#include <vector>
#include <random>

int get_time()
{
    auto now = std::chrono::high_resolution_clock::now();
    auto time_since_epoch = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch());

    return time_since_epoch.count();
}

// Takes in two integer variable addresses and swaps the values in those.
void swap_numbers(int *p0, int *p1)
{
    // Value in first address stored in a temporary variable.
    int aux_number = *p0;

    // Value in second address stored in first address.
    *p0 = *p1;

    // Value in temporary variable moved to the address of second pointer.
    *p1 = aux_number;
}

std::vector<int> randomize(std::vector<int> vector)
{
    srand(get_time());
    int random_index;
    int vector_size = vector.size();

    for (int i = 0; i < vector_size; i++)
    {
        random_index = i;

        while (random_index == i)
        {
            random_index = rand() % vector_size;
        }

        swap_numbers(&vector[i], &vector[random_index]);
    }

    return vector;
}

bool check_if_sorted(std::vector<int> unk_sorted)
{
    for (int i = 1; i < unk_sorted.size(); i++)
    {
        if (unk_sorted[i] < unk_sorted[i - 1])
        {
            return false;
        }
    }

    return true;
}