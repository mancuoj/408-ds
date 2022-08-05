#include "ds.h"

/**
 * 暴力解：三重循环，计算每一个距离，找出最小值
 */
int find_min_distance_bf(int A[], int B[], int C[], int lena, int lenb, int lenc) {
    int dmin = INT_MAX, d;
    for (int i = 0; i < lena; i++) {
        for (int j = 0; j < lenb; j++) {
            for (int k = 0; k < lenc; k++) {
                d = abs(A[i] - B[j]) + abs(B[j] - C[k]) + abs(C[k] - A[i]);
                if (d < dmin) {
                    dmin = d;
                }
            }
        }
    }
    return dmin;
}

/**
 * 判断第一个参数是否是三个参数中的最小值
 */
bool is_min_triple(int a, int b, int c) {
    if (a <= b && a <= c) {
        return true;
    }
    return false;
}

/**
 * 最优解：画一个数轴可以看出，一般情况下，距离只和最小值和最大值有关
 *        而最大值一定会被计算，所以我们只需要关注三个中的最小值即可
 */
int find_min_distance(int A[], int B[], int C[], int lena, int lenb, int lenc) {
    int dmin = INT_MAX, d;
    int i = 0, j = 0, k = 0;
    while (i < lena && j < lenb && k < lenc) {
        d = abs(A[i] - B[j]) + abs(B[j] - C[k]) + abs(C[k] - A[i]);
        if (d < dmin) {
            dmin = d;
        }

        if (is_min_triple(A[i], B[j], C[k])) {
            i++;
        } else if (is_min_triple(B[j], A[i], C[k])) {
            j++;
        } else {
            k++;
        }
    }
    return dmin;
}