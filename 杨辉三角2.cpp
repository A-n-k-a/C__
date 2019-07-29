//
// Created by 不死鸟Anka on 2019-07-27.
//

//#include "杨辉三角2.h"
//打印杨辉三角

#include <iostream>
#include <vector>

using namespace std;
//处理函数
/**
* n  总行数
* return 将结果放到二维数组中返回
*/
vector<vector<int>> gen(int n) {
    vector<vector<int>> res(n, vector<int>());
    for (int i = 0; i < n; i++) {
        //确定每一行上有的数字个数
        res[i].resize(i + 1);
        //两头都为1
        res[i][0] = 1;
        res[i][i] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < i; j++) {
            //i j 位置的数字等于它的左上数+上数
            res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
        }
    }

    return res;
}

//测试函数
int main() {

    int n;
    cout << "请输入需要的杨辉三角的行数（请先点击这里再输入，输入完毕后按“return“）:";
    while (cin >> n) {

        if (n <= 0) {
            cout << "进程已结束，谢谢使用 ！";
            break;
        }
        cout << "以下是您想要的杨辉三角：\n";
        vector<vector<int>> res = gen(n);
        for (int i = 0; i < res.size(); i++) {
            //打印空格，使得输出结果美观
            for (int k = 0; k < n - i; k++) {
                cout << ' ';
            }
            for (int j = 0; j < res[i].size(); j++) {
                if (j == 0)cout << res[i][j];
                else cout << ' ' << res[i][j];
            }
            cout << endl;
        }
        cout << "请输入需要的杨辉三角的行数（输入一个小于或等于0的数以结束进程）（输入完毕后按“return“）:";
    }
    return 0;
}

//---------------------
//作者：浪漫硅谷
//        来源：CSDN
//        原文：https://blog.csdn.net/langmanqishizaijia/article/details/51089805
//版权声明：本文为博主原创文章，转载请附上博文链接！