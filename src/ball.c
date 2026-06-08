#include "../include/ball.h"
#include "../include/game.h"
#include "../include/player.h"

bool check_collision(struct Ball *ball, struct Player *player){
    int next_x = ball->x_pos + ball->x_v;
    int next_y = ball->y_pos + ball->y_v;
    if((next_x >= player->x_pos && next_x <= player->x_pos + player->width) && (next_y >= player->y_pos && next_y <= player->y_pos + player->height)) {
        return true;
    }
    return false;
}

void update_ball(struct Ball *ball, bool collision){
    int next_x = ball->x_pos + ball->x_v;
    int next_y = ball->y_pos + ball->y_v;
    if(next_x < 0 || next_x > SCREEN_WIDTH) {
        ball->x_v = -ball->x_v;
    }
    if(next_y < 0 || next_y > SCREEN_HEIGHT) {
        ball->y_v = -ball->y_v;
    }
    if(collision) {
        ball->x_v = -ball->x_v;
    }
    ball->x_pos += ball->x_v;
    ball->y_pos += ball->y_v;
}

