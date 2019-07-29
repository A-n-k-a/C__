//
// Created by 不死鸟Anka on 2019-07-16.
//

#include "Change.h"
#include <iostream>
int a =1;
int b =2;

void swapper1(int m,int n)
{

    auto temp = a;
    a = b;
    b = temp;



}

int main()

{   swapper1(a,b);
    std:: cout << "a:" << a;
    std:: cout << "b:" << b;
    return 0;

}