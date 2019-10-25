/*
Yue Shu
EECS444
Prof. Ye
Homework2 Problem1 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int checkFile(const char *directory)
{
    if (access(directory, F_OK) == -1)
        return 0;

    return 1;
}

void main()
{
    const char *directory = "./PE-1.txt";
    const char *target = "I want to learn PE file format!";

    FILE *file;

    if (checkFile(directory))
    {
        char *filestr = 0;
        long filesize;

        // open file in both reading and writing mode
        file = fopen(directory, "r+");
        fseek(file, 0, SEEK_END);
        filesize = ftell(file);
        fseek(file, 0, SEEK_SET);

        filestr = malloc(filesize);

        if (!filestr)
        {
            fputs("Memory error", stderr);
            exit(2);
        }

        if (fread(filestr, 1, filesize, file) != filesize)
        {
            fputs("Reading error", stderr);
            exit(3);
        };

        // append the string in the file
        if (strstr(filestr, target) == NULL)
            fputs(target, file);

        // print the file content to stdout
        else
            printf("%s\n", filestr);

        free(filestr);
    }
    // create the file
    else
    {
        file = fopen(directory, "a");
        fputs(target, file);
    }

    fclose(file);
    return;
}