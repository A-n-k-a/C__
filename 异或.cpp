//
// Created by 不死鸟Anka on 2019-07-22.
//

#include "异或.h"
#include <iostream>

using namespace std;

int exclusive_OR(int a[], int n) {
    int num = 0;
    for (int i = 0; i < n; i++) {
        num ^= a[i];

    }
    return num;
}

int main() {
    int af[] = {1, 2, 2, 3, 3, 4, 4};
    int m = sizeof(af);
    cout << exclusive_OR(af,m);
}