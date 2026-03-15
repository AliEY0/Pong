#include <iostream>
#include "header/Ball.hpp"
#include "header/Board.hpp"
#include "header/Player.hpp"
#include "thread"


int main(){
    int boardLength = 20;
    int boardHeight = 8;
        
    Board b(boardHeight, boardLength);
    Player p(PlayerSide::RIGHT, boardHeight);
    
    p.InitPlayer(b.board);  

    p.GoUp(b.board);    
    b.Draw(); 
    
    
    
    return 0;
}
