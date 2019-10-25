/* 
Yue Shu, yxs626
EECS444
Homework 2 Part 3 
Question 3
*/

#include <stdio.h>

void main(int argc, const char **argv, const char **envp)
{
    int i = 100;
    int arr[3];

    while (i < 1000)
    {

        // the most significant digit of i
        arr[2] = i / 100;
        arr[1] = (i - arr[2] * 100) / 10;
        // the least significant digit of i
        arr[0] = i - arr[2] * 100 - arr[1] * 10;

        // check if the sum of the cube of each of the three digits equals the number itself
        if (arr[2] * arr[2] * arr[2] + arr[1] * arr[1] * arr[1] +
            arr[0] * arr[0] * arr[0] == i)
            printf("%d \n", i);

        i++;
    }

    return;
}