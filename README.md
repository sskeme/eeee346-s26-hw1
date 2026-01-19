# Introduction

In this homework assignment, you will be implementing simple statistical functions. See how `cout` and `cin` are used, how a header file is used, and how functions are called. 

# Tasks

1. Receive three numbers using `cin` in main(). You may assume that only integers are entered. 

2. Compute the median by implementing median() in stats.cpp. Do not use any built-in functions, such as sort(). Call median() in main() and print out the result using `cout`. Refer to stats.h for its return data type and parameters.

4. Repeat for max().

5. Repeat for min().

# Compile and Run

1. Type the following commands on Terminal.
```
g++ -o main *.cpp
```
  * g++: Uses the GNU C++ compiler.
  * -o main: `-o` specifies the name of the output file. In this case, `main` is the name of the generated file. This option is optional. If it is omitted, the compiler produces a default output file named `a.out`.
  * *.cpp: All C++ source files in the current directory will get compiled. This is convenient when working with many source files, as it avoids having to list each file manually (for example, main.cpp stats.cpp).
```
./main
```
  * ./main: The compiler looks for an executable file named `main` in the current directory and runs it.

2. Enter three integers and check if your result is correct. The following is an example:
```
3 4 6
Average: 4.33
Median: 4
Min: 3
Max: 6
```

# Submission

Please upload your `main.cpp` and `stats.cpp` files to `myCourses > Assignments > HW1`. Do not submit *.docx, *.pdf, *.txt, or *.zip file. 
