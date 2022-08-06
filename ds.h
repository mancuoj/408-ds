#include <bits/stdc++.h>

typedef int ElemType;

/******************** 09 ********************/
typedef struct Node9 {
    ElemType data;
    struct Node9 *link;
} Node9, *List9;

List9 create_list9(const std::vector<ElemType> &data);

int search_k_bf(List9 list, int k);

int search_k(List9 list, int k);


/******************** 10 ********************/
std::string print_array(int arr[], int n);

void reverse_bf(int R[], int p, int n);

void reverse(int R[], int l, int r);

void reverse_all(int R[], int p, int n);


/******************** 11 ********************/
int find_mid(int A[], int B[], int len);


/******************** 12 ********************/
typedef struct Node12 {
    char data;
    struct Node12 *next;
} Node12, *List12;

List12 create_list12(const std::vector<char> &data);

int get_len(List12 list);

Node12 *find_common_bf(List12 A, List12 B);

Node12 *find_common(List12 A, List12 B);


/******************** 13 ********************/
int find_main_bf(int A[], int len);

int find_main(int A[], int len);


/******************** 14 ********************/
typedef struct BiNode {
    int weight;
    struct BiNode *left, *right;
} BiNode, *BiTree;

BiNode *new_node_15(int weight);

int WPL(BiTree root);

int pre_order_wpl(BiTree root, int depth);


/******************** 15 ********************/
typedef struct Node15 {
    ElemType data;
    struct Node15 *link;
} Node15, *List15;

List15 create_list15(const std::vector<ElemType> &data);

std::string to_string(List15 list);

void delete_same_abs_value(List15 list, int len);


/******************** 16 ********************/
int partition_bf(int A[], int len);

int partition(int A[], int len);


/******************** 17 ********************/
typedef struct Node17 {
    char data[10];
    struct Node17 *left, *right;
} BTree;

BTree *new_node_17(char data[]);

std::string T2E(BTree *root);

void tree_to_infix(BTree *root, int depth);


/******************** 18 ********************/
int find_miss_min(int A[], int len);


/******************** 19 ********************/
typedef struct Node19 {
    int data;
    struct Node19 *next;
} Node19;

Node19 *create_list19(const std::vector<int> &data);

std::string to_string(Node19 *list);

void change_list(Node19 *list);


/******************** 20 ********************/
int find_min_distance_bf(int A[], int B[], int C[], int lena, int lenb, int lenc);

bool is_min_triple(int a, int b, int c);

int find_min_distance(int A[], int B[], int C[], int lena, int lenb, int lenc);


/******************** 21 ********************/
#define MAXV 100

typedef struct {
    int numVertices, numEdges;  // 图中实际顶点数和边数
    char VerticesList[MAXV];    // 顶点表
    int Edge[MAXV][MAXV];       // 邻接矩阵
} MGraph;

int is_exist_EL(MGraph G);


/******************** 22 ********************/

