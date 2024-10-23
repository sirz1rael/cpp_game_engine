#pragma once

#define GLFW_DLL
#include <GLFW/glfw3.h>

#include <iostream>


class App {
public:
    App() {
        std::cout << "Default constructor" << std::endl;
    };
    ~App() {
        std::cout << "Default destructor" << std::endl;
    };
    void init(int window_width, int window_height, const char* title);
private:
    GLFWwindow *window;
    void main_loop();
};