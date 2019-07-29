//
// Created by 不死鸟Anka on 2019-07-24.
//

//#include "选择排序.h"
#include <iostream>

using namespace std;

const int MAXN = 10001;

int main() {
    int n, k, i, j;
    float temp, a[MAXN];
    cout << "请输入需要排序的数的数量（请先点击这里再输入，输入完毕后按“return“）：";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "请输入第" << i+1 <<"个数（输入完毕后请按“return“）：";
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        k = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[k])
                k = j;
        if (k != i) {
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;//此处交换数的位置也可以用异或
        }
    }
    cout << "这组数从小到大排序是：";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}