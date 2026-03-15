#include "../header/Player.hpp"
#include <iostream>

void Player::InitPlayer(std::vector<std::vector<int>>& board){
    int col = (playerSide == PlayerSide::LEFT ? 0 : board[0].size() - 1);
    for(int i = 0; i < playerHeight; i++){
        board[i + currTop][col] = 1;
    }
}

void Player::GoUp(std::vector<std::vector<int>>& board){
    int col = (playerSide == PlayerSide::LEFT ? 0 : board[0].size() - 1);
    if(currTop > 0){
        for(int i = 0; i < playerHeight; i++){
            board[currTop + i - 1][col] = 1;
        }
        board[currTop + (playerHeight - 1)][col] = 0;
        currTop-=1;
    }
    std::cout << currTop << "\n";

}

void Player::GoDown(std::vector<std::vector<int>>& board){
    int col = (playerSide == PlayerSide::LEFT ? 0 : board[0].size() - 1);
    if(currTop + playerHeight  < board.size()){
        for(int i = 0; i < playerHeight; i++){
            board[currTop + i + 1][col] = 1;
        }
        board[currTop][col] = 0;
        currTop+=1;
    }
    std::cout << currTop << "\n";

}