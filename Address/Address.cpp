//
// Created by 不死鸟Anka on 2019-07-16.
//

#include "Address.h"
#include <iostream>
int main()
{
    unsigned short shortVar = 5;
    unsigned long longVar = 65535;
    long sVar = -65535;

    std::cout << "shortVar:\t" << shortVar;
    std::cout << "\tAddress of shortVar:\t" << &shortVar << "\n";
    std::cout << "longVar:\t" << longVar;
    std::cout << "\tAddress of longVar:\t" << & longVar << "\n";
    std::cout << "sVar:\t\t" << sVar;
    std::cout << "\tAddress of sVar:\t\t" << &sVar << "\n";

    return 0;
}