#pragma once
#define GLFW_DLL
#include <iostream>

#include <GLFW/glfw3.h>

class App {
public:
    App() {
        std::cout << "Default constructor" << std::endl;
    };

    ~App() {
        std::cout << "Default destructor" << std::endl;
    };
    
    struct Game {
        GLFWwindow *window;
        double time;

        struct Settings {
            std::string logo_path = "";
            static const int WINDOW_HEIGHT = 800;
            static const int WINDOW_WIDTH  = 600;
        };
        void init();
        void main_loop();
    };
private:

};