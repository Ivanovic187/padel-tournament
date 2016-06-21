#include "../include/Player.hh"

namespace Padel_Tournament
{

  Player::Player(unsigned int id,
         float                rank,
         std::string          name,
         std::string          surname,
         Position     pos):
         m_playerID(id),
         m_rank(rank),
         m_Name(name),
         m_Surname(surname),
         m_Pos(pos)
         {}
  Player::~Player(){}

  std::string Player::getName()
  {
      return this->m_Name;
  }

}
