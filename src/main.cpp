#include "headers/App.h"

int main(){
    App::Game application;
    App::Game::Settings app;

    std::cout << app.WINDOW_HEIGHT << " x " << app.WINDOW_WIDTH << std::endl;

    application.init(); 
}
