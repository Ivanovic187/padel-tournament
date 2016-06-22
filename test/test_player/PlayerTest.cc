#include <gtest/gtest.h>

#include "Player.hh"


TEST (Ex1Test, GetPlayerNumber)
{
    Player::Position pos = Player::LEFT;
    Player ivan (10, 2.0, "Ivan", "Martinez", pos);

    unsigned int result = ivan.getPlayerID();

    EXPECT_EQ(10, result);
}
