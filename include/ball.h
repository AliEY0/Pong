#pragma once
#include <stdbool.h>
#include "player.h"

struct Ball {
    int x_pos;
    int y_pos;
    int width;
    int height;     
    int x_v;
    int y_v; 
};

void update_ball(struct Ball *ball, bool collision);
bool check_collision(struct Ball *ball, struct Player *player);