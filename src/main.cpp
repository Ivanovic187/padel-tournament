#include "../include/Player.hh"
#include <iostream>

using namespace Padel_Tournament;

int main ()
{
  Player::Position pos = Player::LEFT;
  Player ivan (10, 2.0, "Ivan", "Martinez", pos);

std::cout << "Name:\t" << ivan.getName() << std::endl;
  return 0;


}
