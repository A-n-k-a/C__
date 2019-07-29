//
// Created by 不死鸟Anka on 2019-07-21.
//

#include "阶乘.h"
#include <iostream>

using namespace std;

int factorial(int n):
{
    if n == 1:
        return 1;
    elif n!= 1:
        return n *factorial(n - 1);
}
int main()
{
    cout << factorial();
}