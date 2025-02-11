#include <iostream>
#include "gtest/gtest.h"

// 测试函数
int add(int a, int b) {
    return a + b;
}

// 定义一个测试用例
TEST(AdditionTest, HandlesPositiveInput) {
    EXPECT_EQ(add(2, 3), 5); // 验证add函数能否正确处理正数相加
}

// 主函数，初始化并运行所有测试
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}