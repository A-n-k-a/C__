//
// Created by 不死鸟Anka on 2019-07-25.
//

#include "插入排序.h"
#include <iostream>

using namespace std;
const int MAXN = 10001;

int main() {
    int n, i, j, k;
    float temp, a[MAXN];
    cout << "请输入需要排序的数的数量（请先点击这里再输入，输入完毕后按“return“）：";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "请输入第" << i + 1 << "个数（输入完毕后请按“return“）：";
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        for (j = i - 1; j >= 0; j--)
            if (a[j] < a[i])
                break;
        if (j != i - 1) {
            temp = a[i];
            for (k = i - 1; k > j; k--)
                a[k + 1] = a[k];
            a[k + 1] = temp;
        }
    }
    cout << "这组数从小到大排序是：";
    for (i = 0; i < n; i++) {

        cout << a[i] << " ";
    }
    return 0;
}