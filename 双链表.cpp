//
// Created by 不死鸟Anka on 2019-07-29.
//

//#include "双链表.h"
struct node {
    int data;
    node *pre, *next;
};
node *head, *p, *q, *r;

void insert(node *head, int i, int x) {
    node *s, *p;
    int j;
    s = new node;
    s->data = x;
    p = head;
    j = 0;
    while ((p->next != NULL) && (j < 1)) {
        p = p->next;
        j = j + 1;
    }
    if (p == NULL) {
        cout << "no this position! ";
    } else {
        s->pre = p->pre;
        p->pre->next = s;
        s->next = p;
        p->pre = s;
    }
}

void delete_(node *head, int i) {
    int j;
    node *p;
    p = head;
    j = 0;
    while ((p->next != NULL) && (j < i)) {
        p = p->next;
        j = j + 1;
    }
    if (p == NULL) {
        cout << "no this position! ";
    } else {
        p->pre->next = p->next;
        p->next->pre = p->pre;
    }
}