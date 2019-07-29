//
// Created by 不死鸟Anka on 2019-07-25.
//

//#include "归并排序.h"
#include <iostream>

/*
 * 多行注释
 */

/**
 * 绿色多行注释
 */

//单行注释

////绿色单行注释

using namespace std;
const int MAXN = 500000, INF = 0x3f3f3f3f;

int L[MAXN / 2 + 2], R[MAXN / 2 + 2];

void merge(int a[], int n, int left, int mid, int right) {
    int n1 = mid - left, n2 = right - mid;
    for (int i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = a[mid + i];
    L[n1] = R[n2] = INF;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i] <= R[j])
            a[k] = L[i++];
        else
            a[k] = R[j++];
    }
}

void mergesort(int a[], int n, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergesort(a, n, left, mid);
        mergesort(a, n, mid, right);
        merge(a, n, left, mid, right);
    }
}

int main() {
    int a[MAXN], n;
    cout << "请输入需要排序的数的数量（请先点击这里再输入，输入完毕后按“return“）：";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "请输入第" << i + 1 << "个数（输入完毕后请按“return“）：";
        cin >> a[i];
    }
    mergesort(a, n, 0, n);
    cout << "这组数从小到大排序是：";
    for (int i = 0; i < n; i++) {
        if (i)
            cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}