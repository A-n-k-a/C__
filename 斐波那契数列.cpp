//
// Created by 不死鸟Anka on 2019-07-21.
//

#include "斐波那契数列.h"
#include <iostream>

using namespace std;

auto fibinacci(int n)
{
    if n < 0:
        return;
    if n == 0:
        return 0;
    if n ==1 or n == 2:
        return 1;
    return fibinacci(n-1)+fibinacci(n-2);
}

auto one=0;
auto two=1;
auto result=0;

auto Fibonacci(int n)
{
    int i;
    if (n < 0)
        return;
    if (n == 0)
        return 0;
    if (n==1)
        return 1;
    for(i=2;i<=n;i++)
    {
        result=one+two;
        one=two;
        two=result;

    }
    return result;
}

int main()
{
    cout << fibinacci(10);
    cout << Fibonacci(10);
}
