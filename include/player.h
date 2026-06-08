#pragma once

struct Player {
    int x_pos;
    int y_pos;
    int width;
    int height;
};


void init_player(struct Player *player);