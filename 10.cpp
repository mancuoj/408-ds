#include "ds.h"

/**
 * 打印数组，返回字符串
 */
std::string print_array(int arr[], int n) {
    std::stringstream ss;
    for (int i = 0; i < n; i++) {
        ss << arr[i];
        if (i != n - 1) {
            ss << " ";
        }
    }
    return ss.str();
}

/**
 * 暴力解：创建一个tmp数组存储[p, n-1]和[0, p-1]
 */
void reverse_bf(int R[], int p, int n) {
    int tmp[n], k = 0;
    for (int i = p; i < n; i++) {
        tmp[k++] = R[i];
    }
    for (int i = 0; i < p; i++) {
        tmp[k++] = R[i];
    }
    for (int i = 0; i < n; i++) {
        R[i] = tmp[i];
    }
}

/**
 * 最优解：整体逆置，然后部分逆置
 */
void reverse(int R[], int l, int r) {
    for (int i = 0; i < (r - l + 1) / 2; i++) {
        int tmp = R[l + i];
        R[l + i] = R[r - i];
        R[r - i] = tmp;
    }
}

void reverse_all(int R[], int p, int n) {
    reverse(R, 0, p - 1);
    reverse(R, p, n - 1);
    reverse(R, 0, n - 1);
}