#include "./controllers/Controller.h"
#include <iostream>

int main(){
    std::string rutaNombres = "./sources/Nombres.json";
    std::string rutaGustos = "./sources/Gustos.json";

    int cantPerfiles;
    std::cout << "Ingrese la cantidad de perfiles a simular: " << std::endl;
    std::cin >> cantPerfiles;

    Controller controller = Controller(rutaNombres, rutaGustos);

    controller.inicializar(cantPerfiles);
    controller.displayGrafo();
    controller.matchMake();
    controller.displayMatches();
}