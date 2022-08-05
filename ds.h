#ifndef TEST_408_DS
#define TEST_408_DS

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
/******************** 14 ********************/
/******************** 15 ********************/
typedef struct Node15 {
    ElemType data;
    struct Node15 *link;
} Node15, *List15;

List15 create_list15(const std::vector<ElemType> &data);

std::string to_string(List15 list);

void delete_same_abs_value(List15 list, int n);


/******************** 16 ********************/
/******************** 17 ********************/
/******************** 18 ********************/
/******************** 19 ********************/
typedef struct Node19 {
    int data;
    struct Node19 *next;
} Node19;

Node19 *create_list19(const std::vector<int> &data);

std::string to_string(Node19 *list);

void change_list(Node19 *list);


/******************** 20 ********************/
/******************** 21 ********************/
/******************** 22 ********************/
#endif