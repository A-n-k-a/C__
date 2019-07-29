//
// Created by 不死鸟Anka on 2019-07-28.
//

//#include "单链表.h"
#include <iostream>

using namespace std;
struct Node {
    int data;
    Node *next;
};
Node *head, *p, *r;
int x;

/*
 * *******************************************************************************************
 */
////取出单链表的第i个结点的数据域（《信息学奥赛》167页）
void get(Node *head, int i) {
    Node *p;
    int j;
    p = head->next;
    j = 1;
    while ((p != NULL) && (j < i)) {
        p = p->next;
        j = j + 1;
    }
    if ((p != NULL) && (j == i)) {
        cout << p->data;
    } else {
        cout << "i not exsit! ";
    }
}

/*
 * *******************************************************************************************
 */
////插入一个结点在单链表中去（《信息学奥赛》168页）
void insert(Node *head, int i, int x) {
    Node *p, *s;
    int j;
    p = head;
    j = 0;
    while ((p != NULL) && (j < i - 1)) {
        p = p->next;
        j = j + 1;
    }
    if (p == NULL) {
        cout << "no this position! ";
    } else {
        s = new Node;
        s->data = x;
        s->next = p->next;
        p->next = s;
    }
}

/*
 * *******************************************************************************************
 */
////删除单链表中的第i个结点（《信息学奥赛》168页）
void delete_(Node *head, int i) {
    Node *p, *s;
    int j;
    p = head;
    j = 0;
    while ((p->next != NULL) && (j < i - 1)) {
        p = p->next;
        j = j + 1;
    }
    if (p->next == NULL)
        cout << "no this position! ";
    else {
        s = p->next;
        p->next = p->next->next;////或p->next=s->next
        free(s);
    }
}

/*
 * *******************************************************************************************
 */
////求单链表的实际长度（《信息学奥赛》169页）
int len(Node *head) {
    int n = 0;
    p = head;
    while (p != NULL) {
        n = n + 1;
        p = p->next;
    }
    return n;
}

int main() {
    cout << "开始输入链表数据（输入-1以结束🔚）";
    cin >> x;
    head = new Node;
    r = head;
    int i;
    while (x != -1) {
        cout << "请输入第" << i + 2 << "个数（输入完毕后请按“return“）：";
        i++;
        p = new Node;
        p->data = x;
        p->next = NULL;
        r->next = p;
        r = p;
        cin >> x;
    }
    p = head->next;
    while (p->next != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << p->data << endl;
    cout << "您想找第几个数";
    int a;
    cin >> a;
    cout << "这组链表数据中第" << a << "个数是：";
    get(head, a);
//    system("pause");
}