/* 
Yue Shu, yxs626
EECS444
Homework 3 Part 1
Question 2
*/
#include <ctype.h>
#include <stdio.h>
#include <string.h>


void main(int argc, char *argv, char *envp)
{
    char name[256];
    int len = 0;
    int serial = 0;
    int i;

    printf("Name: ");
    scanf("%[^\n]s", name);
    len = strlen(name);

    for (i = 0; i < len; i++) {
        serial += toupper(name[i]);
    }

    serial = serial ^ 0x1234 ^ 0x5678;
    printf("The serial of the name would be: %d\n", serial);
    sleep(3);
    return;
}
