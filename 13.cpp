#include "ds.h"

/**
 * 暴力解：空间换时间，开一个新数组，记录每一个数字的出现次数然后判断
 */
int find_main_bf(int A[], int len) {
    int *tmp = (int *) malloc(sizeof(int) * len);
    memset(tmp, 0, sizeof(int) * len);

    for (int i = 0; i < len; i++) {
        tmp[A[i]]++;
        if (tmp[A[i]] > len / 2) {
            return A[i];
        }
    }
    return -1;
}

/**
 * 最优解：对对碰，因为主元素个数要超过数组的一半，它就可以碰掉所有其他元素且有剩余
 */
int find_main(int A[], int len) {
    int m = A[0], cnt = 1;
    for (int i = 1; i < len; i++) {
        if (m == A[i]) {
            cnt++;
        } else {
            if (cnt > 0) {
                cnt--;
            } else {
                m = A[i];
                cnt = 1;
            }
        }
    }

    if (cnt > 0) {
        cnt = 0;
        for (int i = 0; i < len; i++) {
            if (m == A[i]) {
                cnt++;
            }
        }
    }

    if (cnt > len / 2) {
        return m;
    }
    return -1;
}