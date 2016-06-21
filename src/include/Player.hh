#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

namespace Padel_Tournament
{

  class Player
  {

  public:

  enum Position
  {
      RIGHT,
      LEFT
   };

   Player(unsigned int      id,
          float             rank,
          std::string       name,
          std::string       surname,
          Player::Position  pos);


   ~Player();

   std::string getName();

  private:
    unsigned int          m_playerID;
    float                 m_rank;
    std::string           m_Name;
    std::string           m_Surname;
    Player::Position      m_Pos;




  };//class Player
}// namespace Padel_Tournament
#endif
