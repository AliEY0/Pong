#include "../header/Board.hpp"


void Board::Draw(){
    for(int i = 0; i < board[0].size() + 2; i++)
        std::cout << BorderChar;
    std::cout << "\n";
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[i].size() + 2; j++){
            if(j == 0 || j == board[i].size() + 1)
                std::cout << BorderChar;
            else
                std::cout << (board[i][j - 1] == 0 ? '.' : '*');

        }
        std::cout << "\n";
    }
    for(int i = 0; i < board[0].size() + 2; i++)
        std::cout << BorderChar;
    std::cout << "\n";
}