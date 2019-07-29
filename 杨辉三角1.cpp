//
// Created by 不死鸟Anka on 2019-07-27.
//

//#include "杨辉三角1.h"
#include <iostream>

using namespace std;

int *returnArray(int N);

int main() {


    int N;
    cout << "请输入需要的杨辉三角的行数（请先点击这里再输入，输入完毕后按“return“）:";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int *A = returnArray(i);
        for (int j = 0; j < i; j++) {
            cout << A[j];
            cout << "  ";
        }
        cout << endl;
    }

}

int *returnArray(int N) {
    int *a = new int[N];
    if (N == 1) {
        a[0] = 1;
        return a;
    } else if (N == 2) {
        a[0] = 1;
        a[1] = 1;
        return a;
    } else {
        int *b = returnArray(N - 1);
        for (int i = 1; i < N - 1; i++) {
            a[i] = b[i] + b[i - 1];
        }
        a[0] = 1;
        a[N - 1] = 1;
        return a;
    }

}
//---------------------
//作者：Alcoholsong
//        来源：CSDN
//        原文：https://blog.csdn.net/u011040361/article/details/46279981
//版权声明：本文为博主原创文章，转载请附上博文链接！