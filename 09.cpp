#include "ds.h"

/**
 * 创建一个带有头节点的链表并返回
 */
LList create_llist(const std::vector<ElemType> &data) {
    if (data.empty()) {
        return NULL;
    }

    Node *head = (Node *) malloc(sizeof(Node));
    head->link = NULL;

    Node *p = head;
    for (ElemType i: data) {
        Node *cur = (Node *) malloc(sizeof(Node));
        cur->data = i;
        cur->link = NULL;
        p->link = cur;
        p = cur;
    }

    return head;
}

/*
 * bf（Brute Force），即暴力解
 */
int search_k_bf(LList list, int k) {
    int len = 0;
    Node *p = list->link;
    while (p != NULL) {
        p = p->link;
        len++;
    }

    if (len < k) {
        return 0;
    }
    int cnt = len - k;
    p = list->link;
    while (cnt--) {
        p = p->link;
    }
    printf("%d\n", p->data);
    return 1;
}

/*
 * 最优解
 */

