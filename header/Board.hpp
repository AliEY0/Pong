#pragma once
#include <vector>
#include <iostream>

class Board{

int width;
int height;
char BorderChar = '#';

public:
    std::vector<std::vector<int>> board;
    Board(int height_ = 1, int width_ = 1) : width(width_), height(height_) {
        board.resize(height, std::vector<int>(width, 0));
    };
    void Draw();

};