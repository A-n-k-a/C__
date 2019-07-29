//
// Created by 不死鸟Anka on 2019-07-18.
//

#include "ReturnPointer.h"
#include <iostream>

using namespace std;

short factor(int, int*, int*);

enum ERR_CODE { SUCCESS, ERROR };

ERR_CODE factor(int, int&, int&);

int main()
{
    int number, squared, cubed;
    short error;
    ERR_CODE result;

    cout << " Enter a number ( 0 - 20 ) : ";
    cin >> number;

    result = factor(number, squared, cubed);

    if(result == SUCCESS)
    {
        cout << "number: " << number << "\n";
        cout << "square: " << squared << " \n ";
        cout << "cubed:" << cubed << "\n";
    }
    else
    {
        cout << "Error encountered!!\n";
    }

    error = factor(number, &squared, &cubed);
    if (!error)
    {
        cout << "number:" << number << "\n";
        cout << "square: " << squared << " \n ";
        cout << "cubed:" << cubed << "\n";
    }
    else
        std::cout << "Error encountered!!\n";
    return 0;
}

short factor(int n, int *pSquared, int *pCubed)
{
    short value = 0;
    if (n>20)
    {
        value = 1;
    }
    else
    {
        *pSquared = n * n;
        *pCubed = n * n * n;
        value = 0;
    }
    return value;
}
ERR_CODE factor(int n, int &rSquared, int &rCubed)
{
    if(n > 20)
    {
        return ERROR;
    }
    else
    {
        rSquared = n * n;
        rCubed = n * n * n;
        return SUCCESS;
    }
}