#include "headers/App.h"

void App::Game::init() {
    if(glfwInit()){
        std::cout << "LOG: GLFW Initializited" << std::endl;
        // Creating window
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
        window = glfwCreateWindow(Settings::WINDOW_WIDTH,
                                  Settings::WINDOW_HEIGHT,
                                  "Demo", nullptr, nullptr);
        if(window) {
            std::cout << "LOG: GLFWwindow create succesful" << std::endl;
            main_loop();
        } else {
            std::cerr << "GLFWwindow create error!" << std::endl;
        }
    } else {
        std::cerr << "glfwInit error!" << std::endl;
    }

}

void App::Game::main_loop() {  
    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        // commands in window while running
        time = glfwGetTime();

        std::cout << "Window is open " << time << " seconds." << std::endl;

        if(time > 5) {
            glfwSetWindowShouldClose(window, 1);
            std::cout << "Window is closed after " << time << " seconds. "<< std::endl;
        }
    }
}
