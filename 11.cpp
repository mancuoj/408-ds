#include "ds.h"

/**
 * 要求找到两个等长有序序列合并后的中位数，那暴力解就直接合并呗
 * 但你会发现并不需要合并全部，我们只需要中间位置的一个值即可
 * 所以 mid 就是 len-1，我们按照常规合并有序序列的方法，只移动指针即可
 */
int find_mid(int A[], int B[], int len) {
    int i = 0, j = 0;
    while (i + j < len - 1) {
        if (A[i] <= B[j]) {
            i++;
        } else {
            j++;
        }
    }

    return A[i] <= B[j] ? A[i] : B[j];
}