/* 
Yue Shu, yxs626
EECS444
Homework 2 Part 3 
Question 1
*/

#include <stdio.h>

void main(int argc, char *argv, char *envp)
{
    int a = 3;
    int b = 5;
    int c = 0;
    c = (a * b) - (a / 2);

    printf("%d \n", c);
    return;
}