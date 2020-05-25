#include "Board.hpp"
#include <iostream>
using namespace std;

namespace WarGame {
      bool Board::has_soldiers(uint player_number) const{return true;}

    Soldier*& Board::operator[](std::pair<int, int>){}
    
    void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){}
         
}
