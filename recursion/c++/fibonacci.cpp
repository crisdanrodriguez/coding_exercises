/*
The fibonacci sequence is defined as follows: the first number of the sequence is 0, the second number is 1,
and the nth number is the sum of (n-1)th and (n-2)th numbers. Write a function that takes in an integer n
and returns the nth Fibonacci number.

Note: the Fibonacci sequence is often defined with its first two numbers as F0 = 0 and F1 = 1. For the purpose
of this question, the first Fibonacci number is F0; therefore, the first Fibonacci number is F0, and the second
is equal to F1, etc...
*/

using namespace std;

int fibonacci(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}