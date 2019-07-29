//
// Created by 不死鸟Anka on 2019-07-17.
//

#include "Reference.h"
#include <iostream>

using namespace std;

int main()
{
    int intOne;
    int &rSomeRef = intOne;

    intOne = 5;
    cout << "intOne: " << intOne << endl;
    cout << "rSomeRef: " << rSomeRef << endl;

    cout << "&intOne: " << &intOne << endl;
    cout << "&rSomeRef: " << &rSomeRef << endl;

    rSomeRef = 7;
    cout << "intOne: " << intOne << endl;
    cout << "rSomeRef: " << rSomeRef << endl;
    return 0;
}