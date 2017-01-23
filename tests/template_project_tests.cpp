#include "gtest/gtest.h"

extern "C" {
    // include your C header files here
    #include "util.h"
}

TEST(TestTest, Add) {
    EXPECT_EQ(1+1, 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
