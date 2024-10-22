all:
	g++ -g --std=c++17 -Iinclude -Llib src/*.cpp src/glad.c -lglfw3dll -o ./bin/main
clean:
	rm ./bin/main.exe
	clear