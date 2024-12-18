#include "my_library.h"
#include <gtest/gtest.h>

TEST(MyLibraryTest, AddTest) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(MyLibraryTest, FailTest) {
    EXPECT_EQ(add(2,3),6);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

