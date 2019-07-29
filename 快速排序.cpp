//
// Created by 不死鸟Anka on 2019-07-25.
//

//#include "快速排序.h"
#include <iostream>

using namespace std;

void qsort(int, int);

int a[101];

int main() {
    int n, i;
    cout << "请输入需要排序的数的数量（请先点击这里再输入，输入完毕后按“return“）：";
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "请输入第" << i << "个数（输入完毕后请按“return“）：";
        cin >> a[i];
    }
    qsort(1, n);
    cout << "这组数从小到大排序是：";
    for (i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void qsort(int l, int r) {
    int i, j, mid, p;
    i = l;
    j = r;
    mid = a[(l + r) / 2];
    do {
        while (a[i] < mid) i++;
        while (a[j] > mid) j--;
        if (i <=j) {
            p = a[i];
            a[i] = a[j];
            a[j] = p;
            i++;
            j--;
        }
    } while (i <= j);
    if (l < j) qsort(l, j);
    if (i < r) qsort(i, r);
}