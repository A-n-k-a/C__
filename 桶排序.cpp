//
// Created by 不死鸟Anka on 2019-07-25.
//

//#include "桶排序.h"
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int b[101], n, i, j, k;
    memset(b, 0, sizeof(b));
    cout << "请输入需要排序的数的数量（请先点击这里再输入，输入完毕后按“return“）：";
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "请输入第" << i << "个数（该数需大于或等于0，且小于或等于100，否则将会自动去掉超出范围的数）（输入完毕后请按“return“）：";
        cin >> k;
        b[k]++;
    }
    cout << "这组数从小到大排序是：";
    for (i = 0; i <= 100; i++)
        while (b[i] > 0) {
            cout << i << " ";
            b[i]--;
        }
    cout << endl;
}