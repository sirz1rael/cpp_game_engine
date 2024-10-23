build:
	@echo "Compiling & Linking"
	g++ -g --std=c++17 -Iinclude -Llib src/*.cpp src/glad.c -lglfw3dll -o ./bin/main
	clear

run:
	@echo "Running!"
	./bin/main.exe

clean:
	rm ./bin/main.exe
	clear