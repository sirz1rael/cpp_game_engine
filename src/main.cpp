#include "headers/App.h"

int main(){
    App *app = new App();

    app->init(800, 800, "demo");

    delete app;
}
