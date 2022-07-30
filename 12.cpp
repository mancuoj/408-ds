#include "ds.h"

/**
 * 创建一个带有头节点的链表并返回
 */
List12 create_list12(const std::vector<char> &data) {
    if (data.empty()) {
        return NULL;
    }

    auto *head = (Node12 *) malloc(sizeof(Node12));
    head->next = NULL;

    Node12 *p = head;
    for (char c: data) {
        auto *cur = (Node12 *) malloc(sizeof(Node12));
        cur->data = c;
        cur->next = NULL;
        p->next = cur;
        p = cur;
    }

    return head;
}

int get_len(List12 list) {
    int len = 0;
    while (list->next != NULL) {
        list = list->next;
        len++;
    }
    return len;
}

/*
 * 暴力解：双重循环，扫描A链表的同时对比B链表所有的结点，找到第一个共同点
 */
Node12 *find_common_bf(List12 A, List12 B) {
    Node12 *pa = A->next, *pb = B->next;
    while (pa != NULL) {
        while (pb != NULL) {
            if (pa == pb) {
                return pa;
            }
            pb = pb->next;
        }

        pa = pa->next;
        pb = B->next;
    }
    return NULL;
}


/*
 * 最优解：获取两个链表的长度，右对齐，然后同时扫描，找到第一个共同点
 */
Node12 *find_common(List12 A, List12 B) {
    int al = get_len(A), bl = get_len(B);
    while (al > bl) {
        A = A->next;
        al--;
    }
    while (al < bl) {
        B = B->next;
        bl--;
    }

    while (A != NULL && B != NULL) {
        if (A == B) {
            return A;
        }
        A = A->next;
        B = B->next;
    }
    return NULL;
}