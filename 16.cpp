#include "ds.h"

/**
 * 把小值放到前半部分，大值放到后半部分，这就是快排的思想
 * 只需要枢纽元素在中间即可，无需对全部元素进行排序
 * 当然暴力可以全排序或采用其他的排序算法全排序，这里就不赘述了
 */
int partition(int A[], int len) {
    int low = 0, high = len - 1, mid = (len - 1) / 2;
    int rl = 0, rh = len - 1, s1 = 0, s2 = 0;
    bool flag = true;
    while (flag) {
        int pivot = A[low];
        while (low < high) {
            while (low < high && A[high] >= pivot) {
                --high;
            }
            A[low] = A[high];
            while (low < high && A[low] <= pivot) {
                ++low;
            }
            A[high] = A[low];
        }
        A[low] = pivot;

        if (low == mid) {
            flag = false;
        } else {
            if (low < mid) {
                // 在右边找
                rl = ++low;
                high = rh;
            } else {
                // 在左边找
                low = rl;
                rh = --high;
            }
        }
    }

    int i = 0;
    while (i <= mid) {
        s1 += A[i++];
    }
    while (i < len) {
        s2 += A[i++];
    }

    return s2 - s1;
}