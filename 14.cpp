#include "ds.h"

/*
 * 创建二叉树结点
 */
BiNode *new_node(int weight) {
    BiNode *node = (BiNode *) malloc(sizeof(BiNode));
    node->weight = weight;
    node->left = NULL;
    node->right = NULL;
    return node;
}

/**
 * 带权路径长度为每个叶节点的深度与权值之积的总和
 * 所以我们采用前序遍历找到每一个叶节点后计算并返回
 */
int WPL(BiTree root) {
    return pre_order_wpl(root, 0);
}

int pre_order_wpl(BiTree root, int depth) {
    static int wpl = 0;
    if (root->left == NULL && root->right == NULL) {
        wpl += root->weight * depth;
    }

    if (root->left != NULL) {
        pre_order_wpl(root->left, depth + 1);
    }
    if (root->right != NULL) {
        pre_order_wpl(root->right, depth + 1);
    }
    return wpl;
}