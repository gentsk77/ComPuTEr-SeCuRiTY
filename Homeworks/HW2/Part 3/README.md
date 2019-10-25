# Homework 2 Part 3

  Yue Shu (yxs626)  
  EECS444  
  Prof. Ye  
  October 24, 2019

> NOTE: All C source code are saved under the `src` directory and all executable binary files are saved under the `bin` directory. You can also test the program results by manually compiling the source codes using the `makefile` I provided ahead of time.

## Question 1

Refer to `.\src\q1.c` for the C version of this program.

Generally speaking, the assembly code calculates the result of math expression $3 * 5 - 3 / 2$. Feel free to either run the executable binary file directly under the `.\bin` folder or run the below commands under the `.\src` folder to see the final result, which should be as following:

```cmd
$ make all
gcc q1.c -o q1
gcc q2.c -o q2
gcc q3.c -o q3
gcc q4.c -o q4
$ ./q1
14
```

## Question 2

Refer to `.\src\q2.c` for the C version of this program.

Generally speaking, the assembly code prints the max value in the array `arr = {12, 15, 221, 3, 462, 54, 16, 67}`. Feel free to either run the executable binary file directly under the `.\bin` folder or run the below commands under the `.\src` folder to see the final result, which should be as following:

```cmd
$ ./q2
462
```

## Question 3

Refer to `.\src\q3.c` for the C version of this program. More details of loc with significant meanings are also documented in the source code as comments.

Generally speaking, the assembly code prints all 3-digit numbers with digits such that the sum of the cube of each digits could add up to the value of the number itself. Feel free to either run the executable binary file directly under the `.\bin` folder or run the below commands under the `.\src` folder to see the final result, which should be as following:

```cmd
$ ./q3
153
370
371
407
```

## Question 4

Refer to `.\src\q4.c` for the C version of this program. More details of loc with significant meanings are also documented in the source code as comments.

Generally speaking, the assembly code loops through 1 to 100 to find the non-zero element after iteratively marking the 7th element in the array as 0. Feel free to either run the executable binary file directly under the `.\bin` folder or run the below commands under the `.\src` folder to see the final result, which should be as following:

```cmd
$ ./q4
50
```
