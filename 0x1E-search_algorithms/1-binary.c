#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to print
 * @low: The starting index
 * @high: The ending index
 */
void print_array(int *array, size_t low, size_t high)
{
    size_t z;

    printf("Searching in array: ");
    for (z = low; z <= high; z++)
    {
        printf("%d", array[z]);
        if (z < high)
            printf(", ");
    }
    printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low, high, mid;

    if (array == NULL)
        return -1;

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        print_array(array, low, high);
        mid = (low + high) / 2;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
