#include "../libs/googletest/googletest/include/gtest/gtest.h"
#include "tests/GeneTest.hpp"

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}