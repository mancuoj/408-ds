#include "ds.h"

/**
 * 创建一个带有头节点的链表并返回
 */
Node19 *create_list19(const std::vector<int> &data) {
    if (data.empty()) {
        return NULL;
    }

    auto *head = (Node19 *)malloc(sizeof(Node19));
    head->next = NULL;

    Node19 *p = head;
    for (int i : data) {
        auto *cur = (Node19 *)malloc(sizeof(Node19));
        cur->data = i;
        cur->next = NULL;
        p->next = cur;
        p = cur;
    }

    return head;
}

/**
 * 遍历含头结点链表值，返回如“1 -> 2 -> 3”的字符串
 */
std::string to_string(Node19 *list) {
    return list->next == NULL ? std::to_string(list->data) : std::to_string(list->data) + " -> " + to_string(list->next);
}

/**
 * 本题要求空间复杂度O(1)，故本题不谈暴力法
 * 最优解：快慢指针，找到中间结点，从中间断开后将后半段逆置插入到前半段后面（头插）
 *       然后链表前后两段依次取一个结点按照要求重排即可
 */
void change_list(Node19 *list) {
    Node19 *slow = list, *fast = list;
    while (fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
        if (fast->next != NULL) {
            fast = fast->next;
        }
    }

    /* 为了更好的区分，重新命名前半段，中间结点，后半段 */
    Node19 *pre, *mid = slow, *post;

    /* 断链，将后半段逆置 */
    post = mid->next;
    mid->next = NULL;
    while (post != NULL) {
        Node19 *cur = post->next;
        post->next = mid->next;
        mid->next = post;
        post = cur;
    }

    /* 再次断链，然后插入 */
    pre = list->next;
    post = mid->next;
    mid->next = NULL;
    while (post != NULL) {
        Node19 *cur = post->next;
        post->next = pre->next;
        pre->next = post;
        pre = post->next;
        post = cur;
    }
}
