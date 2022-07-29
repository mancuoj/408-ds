#include <gtest/gtest.h>
#include "ds.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

/********** 09 **********/
TEST(Test09, BF) {
    std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    LList list = create_llist(data);
    EXPECT_EQ(search_k_bf(list, 1), 1);     // 10
    EXPECT_EQ(search_k_bf(list, 5), 1);     // 6
    EXPECT_EQ(search_k_bf(list, 10), 1);    // 1

    EXPECT_EQ(search_k_bf(list, 12), 0);
    EXPECT_EQ(search_k_bf(list, 20), 0);
}

TEST(Test09, OP) {
    std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    LList list = create_llist(data);
}

/********** 10 **********/
/********** 11 **********/
/********** 12 **********/
/********** 13 **********/
/********** 14 **********/
/********** 15 **********/
/********** 16 **********/
/********** 17 **********/
/********** 18 **********/
/********** 19 **********/
/********** 20 **********/
/********** 21 **********/
/********** 22 **********/