#include "search_algos.h"

/**
 * jump_search - Finds a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located , otherewise -1 
 * or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step, prev, i;

    if (array == NULL)
        return (-1);

    step = sqrt(size);
    prev = 0;

    while (array[step] < value && step < size)
    {
        printf("Value checked array[%ld] = [%d]\n", step, array[step]);
        prev = step;
        step += sqrt(size);
        if (step > size - 1)
            step = size;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

    for (i = prev; i < step; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
