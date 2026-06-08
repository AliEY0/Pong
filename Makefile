all:
	gcc main.c src/player.c src/ball.c src/game.c -o main  `sdl2-config --cflags --libs` 
	./main 
	rm main
