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
/******************** 11 ********************/
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
/******************** 16 ********************/
/******************** 17 ********************/
/******************** 18 ********************/
/******************** 19 ********************/
/******************** 20 ********************/
/******************** 21 ********************/
/******************** 22 ********************/
#endif