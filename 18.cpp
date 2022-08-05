#include "ds.h"

/**
 * 仅要求时间上高效，空间换时间
 * 开个新数组，记录数字是否出现过即可
 */
int find_miss_min(int A[], int len) {
    int *tmp = (int *) malloc(sizeof(int) * len);
    memset(tmp, 0, sizeof(int) * len);

    int i;
    for (i = 0; i < len; i++) {
        if (A[i] >= 1 && A[i] <= len) {
            tmp[A[i] - 1] = 1;
        }
    }

    for (i = 0; i < len; i++) {
        if (tmp[i] == 0) {
            break;
        }
    }
    return i + 1;
}