#include <bits/stdc++.h>
using namespace std;

// Fibonacci recursive function
int fib1(int n)
{
    if (n == 0) return 0;
    else if (n == 1) return 1;
    return fib1(n - 1) + fib1(n -2);
}

// Fibonacci O(n)
int fib2(int n)
{
    if (n == 0) return 0;
    int f[n];
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i < n; ++i)
       f[i] = f[i - 1] + f[i - 2];
    return f[n];
}