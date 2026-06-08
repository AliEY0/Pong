#pragma once

struct Ball {
    int x_pos;
    int y_pos;
    int width;
    int height;      
};

void init_ball(struct Ball *ball, int x_pos, int y_pos, int width, int height);