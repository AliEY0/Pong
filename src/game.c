#include "../include/game.h"

struct Ball ball = {SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 5, 5, 3, 3};
struct Ball player_left = {5, SCREEN_HEIGHT / 2, 5, 50, 3, 3};
struct Ball player_right = {SCREEN_WIDTH - (5 * 2), SCREEN_HEIGHT / 2, 5, 50, 3, 3};

void render_game() {
    SDL_Init(SDL_INIT_VIDEO);
    struct SDL_Window* window = SDL_CreateWindow("Pong", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
    struct SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    //SDL_Delay(1000);
    SDL_Event event;
    bool quit = false;
    while(!quit){
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                quit = true;
            }
        }
        const Uint8 *state = SDL_GetKeyboardState(NULL);
        if(state[SDL_SCANCODE_W]) {
            player_left.y_pos -= player_left.y_v;
        }
        if(state[SDL_SCANCODE_S]) {
            player_left.y_pos += player_left.y_v;
        }
        if(state[SDL_SCANCODE_UP]) {
            player_right.y_pos -= player_right.y_v;
        }
        if(state[SDL_SCANCODE_DOWN]) {
            player_right.y_pos += player_right.y_v;
        }
        bool collision_left = check_collision(&ball, &player_left);
        bool collision_right = check_collision(&ball, &player_right);
        if(collision_left) {
            update_ball(&ball, true);
        }else if(collision_right) {
            update_ball(&ball,  true);
        }else{
            update_ball(&ball,  false);
        }
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_Rect rect = {ball.x_pos, ball.y_pos, ball.width, ball.height}; 
        SDL_RenderFillRect(renderer, &rect);
        SDL_Rect rect1 = {player_left.x_pos, player_left.y_pos, player_left.width, player_left.height}; 
        SDL_RenderFillRect(renderer, &rect1);
        SDL_Rect rect2 = {player_right.x_pos, player_right.y_pos, player_right.width, player_right.height}; 
        SDL_RenderFillRect(renderer, &rect2);
        SDL_RenderPresent(renderer);
        SDL_Delay((int)1000 / 60); 
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

