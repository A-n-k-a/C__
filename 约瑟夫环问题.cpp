//
// Created by 不死鸟Anka on 2019-07-29.
//

//#include "约瑟夫环问题.h"
#include <iostream>

using namespace std;
struct node {
    long d;
    node *next;
};
long n, m;
node *head, *p, *r;

int cir(int n, int m) {
    int p = 0;
    for (int i = 2; i <= n; i++) {
        p = (p + m) % i;
    }
    return p + 1;
}

int main() {
    long i, j, k, l;
    cin >> n >> m;
    head = new node;
    head->d = 1;
    head->next = NULL;
    r = head;
    for (i = 2; i <= n; i++) {
        p = new node;
        p->d = i;
        p->next = NULL;
        r->next = p;
        r = p;
    }
    r->next = head;
    r = head;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m - 2; j++) r = r->next;
        cout << r->next->d << " ";
        r->next = r->next->next;
        r = r->next;
    }
    long a, b;
    cin >> a >> b;
    cout << cir(a, b);
}