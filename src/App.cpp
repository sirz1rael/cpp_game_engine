#include "headers/App.h"

void App::Game::init() {
    if(glfwInit()){
        std::cout << "App::Game init foo!" << std::endl;
    } else {
        std::cerr << "glfwInit error!" << std::endl;
    }
}

