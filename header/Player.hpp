#pragma once
#include <vector>


enum PlayerSide{
    LEFT = 0,
    RIGHT = 1
};

class Player{
private:
    int boardHeight;
    int playerHeight;
    int currTop;
    PlayerSide playerSide;
    




public:
    //Player(int boardHeight_) : boardHeight(boardHeight_), playerHeight((boardHeight_ % 3 == 0 ? boardHeight / 3 : (boardHeight_ % 3 == 1 ?  boardHeight / 3 + 1 : boardHeight / 3 + 2))), currTop(boardHeight_ / 3) {};
    Player(PlayerSide playerSide_, int boardHeight_) : playerSide(playerSide_), boardHeight(boardHeight_), playerHeight((boardHeight_ / 3 + (boardHeight_ % 3))), currTop(boardHeight_ / 3) {};
    void InitPlayer(std::vector<std::vector<int>>& board);
    void GoUp(std::vector<std::vector<int>>& board);
    void GoDown(std::vector<std::vector<int>>& board);

};