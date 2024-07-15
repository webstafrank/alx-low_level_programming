#include "search_algos.h" 
/**
 * @brief Looks for a value through linear search
 * @param array Pointer to the first element of the array
 * @param size Number of elements in the array
 * @param value Value to be searched
 * @return Index of the value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t x;

    if (array == NULL)
        return -1;

    for (x = 0; x < size; x++)
    {
       printf("Value checked array[%lu] = [%d]\n", x, array[x]);
       if (array[x] == value)
           return x;
    }

    return -1;
}
