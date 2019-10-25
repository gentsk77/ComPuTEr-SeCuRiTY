/* 
Yue Shu, yxs626
EECS444
Homework 2 Part 3 
Question 2
*/

#include <stdio.h>

void main(int argc, char *argv, char *envp)
{
    int arr[8] = {12, 15, 221, 3, 462, 54, 16, 67};
    int max = 0;

    // find the max value in the array
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("%d \n", max);
}