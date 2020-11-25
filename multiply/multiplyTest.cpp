#include <iostream>
#include <gtest/gtest.h>

int multiply(int a, int b);

TEST(MultiplyTest, HandleZeroInput)
{
	EXPECT_EQ(multiply(0,0), 0);
}

TEST(MultiplyTest, HandlePositiveInput)
{
	EXPECT_EQ(multiply(2,2), 4);
	EXPECT_EQ(multiply(8,8), 64);
	EXPECT_EQ(multiply(12,4), 48);
}

//\TEST(MultiplyTest, HandleNegativeInput)
//\{
//\	EXPECT_EQ(multiply(-2, 2), -4);
//\	EXPECT_EQ(multiply(-10, -2), 20);
//\}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
