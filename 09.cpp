#include "ds.h"

/**
 * 创建一个带有头节点的链表并返回
 */
List9 create_list9(const std::vector<ElemType> &data) {
    if (data.empty()) {
        return NULL;
    }

    auto *head = (Node9 *) malloc(sizeof(Node9));
    head->link = NULL;

    Node9 *p = head;
    for (ElemType i: data) {
        auto *cur = (Node9 *) malloc(sizeof(Node9));
        cur->data = i;
        cur->link = NULL;
        p->link = cur;
        p = cur;
    }

    return head;
}

/**
 * bf（Brute Force），即暴力解
 * 首先扫描一次求出链表长度len，然后重新向后扫描len-k个结点即可
 */
int search_k_bf(List9 list, int k) {
    int len = 0;
    Node9 *p = list->link;
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

/**
 * 最优解不一定是真正的最优，只是符合评判标准中的满分
 * 双指针，一指针先走k步，然后双指针同步，直到前者走到终点，后一指针所在位置即倒数第k个结点
 */
int search_k(List9 list, int k) {
    Node9 *p1 = list->link, *p2 = list->link;
    int cnt = 0;
    while (p1 != NULL) {
        if (cnt < k) {
            cnt++;
        } else {
            p2 = p2->link;
        }

        p1 = p1->link;
    }

    if (cnt < k) {
        return 0;
    }
    printf("%d\n", p2->data);
    return 1;
}