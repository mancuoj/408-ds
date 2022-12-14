#include "ds.h"

/**
 * 创建一个带有头节点的链表并返回
 */
List15 create_list15(const std::vector<ElemType> &data) {
    if (data.empty()) {
        return NULL;
    }

    auto *head = (Node15 *) malloc(sizeof(Node15));
    head->link = NULL;

    Node15 *p = head;
    for (ElemType i: data) {
        auto *cur = (Node15 *) malloc(sizeof(Node15));
        cur->data = i;
        cur->link = NULL;
        p->link = cur;
        p = cur;
    }

    return head;
}

/**
 * 遍历链表结点值，返回如“1 -> 2 -> 3”的字符串，不接受空链表
 */
std::string to_string(List15 list) {
    return list->link == NULL ?
           std::to_string(list->data) :
           std::to_string(list->data) + " -> " + to_string(list->link);
}

/**
 * 题目仅要求时间上高效，空间换时间
 * 扫描链表各个结点，开个新数组，记录结点绝对值是否出现过，如果出现过就删除该结点
 */
void delete_same_abs_value(List15 list, int len) {
    int *arr = (int *) malloc(sizeof(int) * (len + 1));
    memset(arr, 0, sizeof(int) * len + 1);

    Node15 *p = list, *del;
    while (p->link != NULL) {
        int ab = abs(p->link->data);
        if (arr[ab] == 0) {
            arr[ab] = 1;
            p = p->link;
        } else {
            del = p->link;
            p->link = del->link;
            free(del);
        }
    }
}