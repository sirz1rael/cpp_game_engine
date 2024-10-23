#include "headers/App.h"


void App::init(int window_width, int window_height, const char* title) {
    if(glfwInit()) {
       std::cout << "glfwInit() true" << std::endl; 
       window = glfwCreateWindow(window_width,
                                 window_height,
                                 title, nullptr, nullptr);
       main_loop();
    } else std::cerr << "glfwInit() false" << std::endl;
}

void App::main_loop() {
    //LOOP UNTIL ESCAPE IS PRESSED
    while(!glfwWindowShouldClose(window)) {

        glfwSwapBuffers(window);
        glfwPollEvents();

        if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
            glfwSetWindowShouldClose(window, GLFW_TRUE);
            std::cout << "Window is closed by user." << std::endl;
        } else {
            std::cout << "Window is open " << glfwGetTime() << " seconds. " << std::endl;
        }
    }
}