#pragma once

struct Ball {
    int x_pos;
    int y_pos;
    int width;
    int height;     
    int x_v;
    int y_v; 
};

void update_ball(struct Ball *ball);