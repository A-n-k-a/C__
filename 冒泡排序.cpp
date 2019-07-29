//
// Created by 不死鸟Anka on 2019-07-24.
//

#include "冒泡排序.h"
#include <iostream>

using namespace std;

//const int MAXN = 10001;
//
//int main() {
//    int n, i, j;
//    float a[MAXN];
//    cout << "请输入需要排序的数的数量（输入完毕后请按“return“）：";
//    cin >> n;
//    for (i = 0; i < n; i++){
//        cout << "请输入第" << i+1 <<"个数（输入完毕后请按“return“）：";
//        cin >> a[i];
//    }
//    bool ok;
//    for (i = n - 1; i >= 1; i--) {
//        ok = true;
//        for (j = 1; j <= i; j++) {
//            if (a[j] > a[j + 1]) {
//                swap(a[j], a[j + 1]);
//                ok = false;
//            }
//        }
//        cout<<"wee";
//        if (ok == true){
//            break;
//        }
//    }
//    for (i = 0; i < n; i++)
//        cout << a[i] << " ";
//    return 0;
//}


const int MAXN = 10001;

int main() {
    int n, i, j;
    float a[MAXN];
    bool ok;
    cout << "请输入需要排序的数的数量（请先点击这里再输入，输入完毕后按“return“）：";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "请输入第" << i+1 <<"个数（输入完毕后请按“return“）：";
        cin >> a[i];
    }
    for (i = n - 1; i >= 1; i--) {
        ok = true;
        for (j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                ok = false;
            }

        }
        if (ok == true) {
            break;
        }
    }
    cout << "这组数从小到大排序是：";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}