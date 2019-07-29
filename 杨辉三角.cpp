//
// Created by 不死鸟Anka on 2019-07-28.
//

//#include "杨辉三角.h"
#include <iostream>
#include <iomanip>
////（《信息学奥赛》90页）
using namespace std;

int main() {
    int a[11][11];
    a[1][1] = 1;
    for (int i = 2; i <= 10; ++i) {
        a[i][1] = 1;
        a[i][i] = 1;
        for (int j = 2; j <= i + 1; ++i) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 1; i <= 10; ++i) {
        if (i != 10) {
            cout << setw(30 - 3 * i) << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << setw(6) << a[i][j] << "a";
        }
        cout << endl;
    }
    return 0;
}