//
// Created by 不死鸟Anka on 2019-07-16.
//

#include "Pointer.h"
#include <iostream>

int main() {
    int myAge;
    int *pAge = nullptr;

    myAge = 5;
    pAge = &myAge;
    std::cout << "myAge: " << myAge << "\n";
    std::cout << "*pAge: " << *pAge << "\n\n";

    std::cout << "*pAge = 7\n";
    *pAge = 7;
    std::cout << "*pAge: " << myAge << "\n\n";

    std::cout << "myAge = 9\n";
    myAge = 9;
    std::cout << "myAge: " << myAge << "\n";
    std::cout << "*pAge: " << *pAge << "\n";

    return 0;
}