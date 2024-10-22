#pragma once

#include <iostream>

class App {
public:
    App() {
        std::cout << "Default constructor" << std::endl;
    };

    ~App() {
        std::cout << "Default destructor" << std::endl;
    };
    
    struct Game {
        struct Settings {
            std::string logo_path = "";
            int WINDOW_HEIGHT = 800;
            int WINDOW_WIDTH  = 600;
        };
        void init();
    };
    void init();
private:

};