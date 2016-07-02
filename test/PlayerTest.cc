#include "gtest/gtest.h"
#include "Player.hh"
#include <iostream>

TEST(Ex1Test, GetPlayerNumber)
{
    Padel_Tournament::Player::Position pos = Padel_Tournament::Player::LEFT;
    unsigned int test_id = 10;
    Padel_Tournament::Player ivan(test_id, 2.0, "Ivan", "Martinez", pos);

    unsigned int result = ivan.getPlayerID();
    unsigned int expected_result = 10;

    EXPECT_EQ(expected_result, result);
}

//int main (int argc , char **argv)
//{
//
//  ::testing::InitGoogleTest(&argc, argv);
//  int ret = RUN_ALL_TESTS();
//  return ret;
//}
