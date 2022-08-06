#include <gtest/gtest.h>
#include "ds.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

/******************** 09 ********************/
TEST(Test09, BF) {
    std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    List9 list = create_list9(data);

    EXPECT_EQ(search_k_bf(list, 1), 1);  // 10
    EXPECT_EQ(search_k_bf(list, 5), 1);  // 6
    EXPECT_EQ(search_k_bf(list, 10), 1); // 1
    EXPECT_EQ(search_k_bf(list, 12), 0);
    EXPECT_EQ(search_k_bf(list, 20), 0);
}

TEST(Test09, OP) {
    std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    List9 list = create_list9(data);

    EXPECT_EQ(search_k(list, 1), 1); // 10
    EXPECT_EQ(search_k(list, 3), 1); // 8
    EXPECT_EQ(search_k(list, 9), 1); // 2
    EXPECT_EQ(search_k(list, 11), 0);
    EXPECT_EQ(search_k(list, 12), 0);
}



/******************** 10 ********************/
TEST(Test10, BF1) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse_bf(arr, 2, 10);

    EXPECT_EQ(print_array(arr, 10), "3 4 5 6 7 8 9 10 1 2");
}

TEST(Test10, BF2) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse_bf(arr, 5, 10);

    EXPECT_EQ(print_array(arr, 10), "6 7 8 9 10 1 2 3 4 5");
}

TEST(Test10, BF3) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse_bf(arr, 7, 10);

    EXPECT_EQ(print_array(arr, 10), "8 9 10 1 2 3 4 5 6 7");
}

TEST(Test10, OP1) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse_all(arr, 2, 10);

    EXPECT_EQ(print_array(arr, 10), "3 4 5 6 7 8 9 10 1 2");
}

TEST(Test10, OP2) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse_all(arr, 5, 10);

    EXPECT_EQ(print_array(arr, 10), "6 7 8 9 10 1 2 3 4 5");
}

TEST(Test10, OP3) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse_all(arr, 7, 10);

    EXPECT_EQ(print_array(arr, 10), "8 9 10 1 2 3 4 5 6 7");
}



/******************** 11 ********************/
TEST(Test11, OP1) {
    int arr1[] = {11, 13, 15, 17, 19};
    int arr2[] = {2, 4, 6, 8, 20};

    EXPECT_EQ(find_mid(arr1, arr2, 5), 11);
}

TEST(Test11, OP2) {
    int arr1[] = {1, 2, 3};
    int arr2[] = {6, 7, 8};

    EXPECT_EQ(find_mid(arr1, arr2, 3), 3);
}

TEST(Test11, OP3) {
    int arr1[] = {10};
    int arr2[] = {5};

    EXPECT_EQ(find_mid(arr1, arr2, 1), 5);
}



/******************** 12 ********************/
TEST(Test12, BF) {
    std::vector<char> dataA{'l', 'o', 'a', 'd'};
    std::vector<char> dataB{'b', 'e'};
    std::vector<char> dataC{'i', 'n', 'g'};
    List12 la = create_list12(dataA);
    List12 lb = create_list12(dataB);
    List12 lc = create_list12(dataC);
    Node12 *pa = la->next, *pb = lb->next, *pc = lc->next;
    while (pa->next != NULL) {
        pa = pa->next;
    }
    while (pb->next != NULL) {
        pb = pb->next;
    }
    pa->next = pc;
    pb->next = pc;

    EXPECT_EQ(find_common_bf(la, lb), pc);
    EXPECT_EQ(find_common_bf(lb, la), pc);
}

TEST(Test12, OP) {
    std::vector<char> dataA{'l', 'o', 'a', 'd'};
    std::vector<char> dataB{'b', 'e'};
    std::vector<char> dataC{'i', 'n', 'g'};
    List12 la = create_list12(dataA);
    List12 lb = create_list12(dataB);
    List12 lc = create_list12(dataC);
    Node12 *pa = la->next, *pb = lb->next, *pc = lc->next;
    while (pa->next != NULL) {
        pa = pa->next;
    }
    while (pb->next != NULL) {
        pb = pb->next;
    }
    pa->next = pc;
    pb->next = pc;

    EXPECT_EQ(find_common(la, lb), pc);
    EXPECT_EQ(find_common(lb, la), pc);
}



/******************** 13 ********************/
TEST(Test13, BF1) {
    int A[] = {0, 5, 5, 3, 5, 7, 5, 5};

    EXPECT_EQ(find_main_bf(A, 8), 5);
}

TEST(Test13, BF2) {
    int A[] = {0, 5, 5, 3, 5, 1, 5, 7};

    EXPECT_EQ(find_main_bf(A, 8), -1);
}

TEST(Test13, BF3) {
    int A[] = {0, 1, 2, 3, 1, 1};

    EXPECT_EQ(find_main_bf(A, 6), -1);
}

TEST(Test13, OP1) {
    int A[] = {0, 5, 5, 3, 5, 7, 5, 5};

    EXPECT_EQ(find_main(A, 8), 5);
}

TEST(Test13, OP2) {
    int A[] = {0, 5, 5, 3, 5, 1, 5, 7};

    EXPECT_EQ(find_main(A, 8), -1);
}

TEST(Test13, OP3) {
    int A[] = {0, 1, 2, 3, 1, 1};

    EXPECT_EQ(find_main(A, 6), -1);
}



/******************** 14 ********************/
/******************** 15 ********************/
TEST(Test15, OP1) {
    std::vector<int> data{1, 2, 3};
    List15 list = create_list15(data);
    delete_same_abs_value(list, 100);
    std::string res = to_string(list->link);

    EXPECT_EQ(res.compare("1 -> 2 -> 3"), 0);
}

TEST(Test15, OP2) {
    std::vector<int> data{21, -15, -15, -7, 15};
    List15 list = create_list15(data);
    delete_same_abs_value(list, 100);
    std::string res = to_string(list->link);

    EXPECT_EQ(res.compare("21 -> -15 -> -7"), 0);
}

TEST(Test15, OP3) {
    std::vector<int> data{1, -1, 1, -4, -1, -9, 4, -9, 9};
    List15 list = create_list15(data);
    delete_same_abs_value(list, 100);
    std::string res = to_string(list->link);

    EXPECT_EQ(res.compare("1 -> -4 -> -9"), 0);
}



/******************** 16 ********************/
TEST(Test16, OP1) {
    int A[] = {1, 2};

    // 2-1=1
    EXPECT_EQ(partition(A, 2), 1);
}

TEST(Test16, OP2) {
    int A[] = {5, 3, 2, 4, 1};

    // (4+5)-(1+2+3)=3
    EXPECT_EQ(partition(A, 5), 3);
}

TEST(Test16, OP3) {
    int A[] = {53, 2, 9, 10, 94, 49};

    // (53+49+94)-(2+9+10)=175
    EXPECT_EQ(partition(A, 6), 175);
}



/******************** 17 ********************/
/******************** 18 ********************/
TEST(Test18, OP1) {
    int A[] = {-5, 3, 2, 3};

    EXPECT_EQ(find_miss_min(A, 4), 1);
}

TEST(Test18, OP2) {
    int A[] = {1, 2, 3};

    EXPECT_EQ(find_miss_min(A, 3), 4);
}

TEST(Test18, OP3) {
    int A[] = {-5, 1, -2, 4, 5, 2, 8, 3};

    EXPECT_EQ(find_miss_min(A, 8), 6);
}



/******************** 19 ********************/
TEST(Test19, OP1) {
    std::vector<int> data{1, 2};
    Node19 *list = create_list19(data);
    change_list(list);
    std::string res = to_string(list->next);

    EXPECT_EQ(res.compare("1 -> 2"), 0);
}

TEST(Test19, OP2) {
    std::vector<int> data{1, 2, 3, 4, 5};
    Node19 *list = create_list19(data);
    change_list(list);
    std::string res = to_string(list->next);

    EXPECT_EQ(res.compare("1 -> 5 -> 2 -> 4 -> 3"), 0);
}

TEST(Test19, OP3) {
    std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node19 *list = create_list19(data);
    change_list(list);
    std::string res = to_string(list->next);

    EXPECT_EQ(res.compare("1 -> 10 -> 2 -> 9 -> 3 -> 8 -> 4 -> 7 -> 5 -> 6"), 0);
}



/******************** 20 ********************/
TEST(Test20, BF) {
    int A[] = {-1, 0, 9};
    int B[] = {-25, -10, 10, 11};
    int C[] = {2, 9, 17, 30, 41};

    EXPECT_EQ(find_min_distance_bf(A, B, C, 3, 4, 5), 2);
}

TEST(Test20, OP) {
    int A[] = {-1, 0, 9};
    int B[] = {-25, -10, 10, 11};
    int C[] = {2, 9, 17, 30, 41};

    EXPECT_EQ(find_min_distance(A, B, C, 3, 4, 5), 2);
}



/******************** 21 ********************/
TEST(Test21, OP1) {
    MGraph G;
    G.numVertices = 3;
    G.numEdges = 3;
    G.VerticesList[0] = 'a';
    G.VerticesList[1] = 'b';
    G.VerticesList[2] = 'c';
    G.Edge[0][1] = 1;   // a-b
    G.Edge[1][0] = 1;
    G.Edge[1][2] = 1;   // b-c
    G.Edge[2][1] = 1;
    G.Edge[0][2] = 1;   // a-c
    G.Edge[2][0] = 1;

    // 图中顶点的度均为2，即有0个度为奇数的顶点，故EL路径存在
    EXPECT_EQ(is_exist_EL(G), 1);
}

TEST(Test21, OP2) {
    MGraph G;
    G.numVertices = 4;
    G.numEdges = 5;
    G.VerticesList[0] = 'a';
    G.VerticesList[1] = 'b';
    G.VerticesList[2] = 'c';
    G.VerticesList[3] = 'd';
    G.Edge[0][1] = 1;   // a-b
    G.Edge[1][0] = 1;
    G.Edge[1][2] = 1;   // b-c
    G.Edge[2][1] = 1;
    G.Edge[0][2] = 1;   // a-c
    G.Edge[2][0] = 1;
    G.Edge[0][3] = 1;   // a-d
    G.Edge[3][0] = 1;
    G.Edge[1][3] = 1;   // b-d
    G.Edge[3][1] = 1;

    // 图中顶点a和b度为3，c和d的度为2，即有2个度为奇数的顶点，故EL路径存在
    EXPECT_EQ(is_exist_EL(G), 1);
}

TEST(Test21, OP3) {
    MGraph G;
    G.numVertices = 5;
    G.numEdges = 5;
    G.VerticesList[0] = 'a';
    G.VerticesList[1] = 'b';
    G.VerticesList[2] = 'c';
    G.VerticesList[3] = 'd';
    G.VerticesList[4] = 'e';
    G.Edge[0][1] = 1;   // a-b
    G.Edge[1][0] = 1;
    G.Edge[1][2] = 1;   // b-c
    G.Edge[2][1] = 1;
    G.Edge[0][2] = 1;   // a-c
    G.Edge[2][0] = 1;
    G.Edge[0][4] = 1;   // a-e
    G.Edge[4][0] = 1;
    G.Edge[1][3] = 1;   // b-d
    G.Edge[3][1] = 1;

    // 图中顶点a和b度为3，c的度为2，d和e的度为1，即有4个度为奇数的顶点，故EL路径不存在
    EXPECT_EQ(is_exist_EL(G), 0);
}
/******************** 22 ********************/