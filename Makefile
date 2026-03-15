all:
	g++ src/Ball.cpp src/Board.cpp src/Player.cpp main.cpp -o main
	./main
	rm main