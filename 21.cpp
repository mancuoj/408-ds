#include "ds.h"

/**
 * 邻接矩阵存储的无向图，Edge[i][j] = 1即存在i指向j的边
 * 所以我们只需要按照题目要求，找出各个顶点的度，再做判断即可
 */
int is_exist_EL(MGraph G) {
    int cnt = 0;
    for (int i = 0; i < G.numVertices; i++) {
        int deg = 0;
        for (int j = 0; j < G.numVertices; j++) {
            deg += G.Edge[i][j];
        }
        if (deg % 2 != 0) {
            cnt++;
        }
    }

    if (cnt == 0 || cnt == 2) {
        return 1;
    }
    return 0;
}