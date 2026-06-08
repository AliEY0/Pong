#pragma once
#include "player.h"
#include "ball.h"
#include "game.h"

#include <SDL2/SDL_events.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>
#include <stdbool.h>
#include <time.h>

#define SCREEN_WIDTH 500
#define SCREEN_HEIGHT 250

//struct Player player_left;
//struct Player player_right;
//struct Ball ball;


void render_board();