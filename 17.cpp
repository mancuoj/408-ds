#include "ds.h"

/**
 * 创建二叉树结点
 */
BTree *new_node_17(char data[]) {
    auto *node = (BTree *) malloc(sizeof(BTree));
    strcpy(node->data, data);
    node->left = NULL;
    node->right = NULL;
    return node;
}

std::string str;

/**
 * 二叉树的中序序列+一些括号即中缀表达式，写一个中序遍历
 */
std::string T2E(BTree *root) {
    str = "";
    tree_to_infix(root, 1);
    return str;
}

void tree_to_infix(BTree *root, int depth) {
    if (root == NULL) {
        return;
    } else if (root->left == NULL && root->right == NULL) {
        // printf("%s", root->data);
        str.append(root->data);
    } else {
        if (depth > 1) {
            // printf("(");
            str.append("(");
        }
        tree_to_infix(root->left, depth + 1);
        // printf("%s", root->data);
        str.append(root->data);
        tree_to_infix(root->right, depth + 1);
        if (depth > 1) {
            // printf(")");
            str.append(")");
        }
    }
}