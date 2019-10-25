/* 
Yue Shu, yxs626
EECS444
Homework 2 Part 3 
Question 4
*/

#include <stdio.h>

void main(int argc, const char **argv, const char **envp)
{
    int x = 7;
    int y = 100;
    int z = 0;
    int arr[100];

    // fill the array with integers ranging from 1 to 100
    for (int i = 0; i < y; i++)
    {
        arr[i] = i + 1;
    }

    z = proc1(arr, y, x);
    printf("%d \n", z);

    return;
}

int proc1(int *arr, int a, int b)
{
    int x = 0;
    int y = 0;
    int z;

    // outer loop, loop thru 0 to 100
    for (int i = 0; i < a; i++)
    {
        z = 1;
        // 6 iterations in total
        while (z < b)
        {
            // skip all the elements that were marked zero
            while (arr[y] == 0)
            {
                y = (y + 1) % a;
            }
            z++;
            // by the end of the 6th iteration, this will give us 
            // the element coming right after the 6th element that was not marked as zero,
            // which could be potentially marked as zero
            y = (y + 1) % a;
        }

        // again, skip all the elemetns that are marked zero to actually find the 
        // 7th non-zero element 
        while (arr[y] == 0)
        {
            y = (y + 1) % a;
        }

        // this would give us the 7th element that is not marked as zero
        x = arr[y];
        // mark the elemnt we found to be zero
        arr[y] = 0;
    }
    return x;
}