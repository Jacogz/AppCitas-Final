#include "./Controller.h"

Controller::Controller(const std::string& archivoNombres, const std::string& archivoGustos)
: grafo(), generador(archivoNombres, archivoGustos) {};

void Controller::inicializar(int cantPerfiles){
    std::vector<Perfil*> perfiles;

    for(int i = 0; i<cantPerfiles; i++){
        Perfil* p = generador.generarPerfil();
        perfiles.push_back(p);
    }

    grafo.setPerfiles(&perfiles);
    grafo.crearRelaciones();
}

void Controller::displayGrafo(){
    std::vector<Perfil*>* perfiles;
    std::vector<Arista*>* relaciones;

    grafo.accesoData(&perfiles, &relaciones);

    std::cout << "\n ========================== \n" << std::endl;

    std::cout << "Vértices(Perfiles): \n" << std::endl;
    for(Perfil* p : *perfiles){
        std::cout << "\t" << *p << "\n" << std::endl;
    }

    std::cout << "Aristas(Relaciones por compatibilidad): \n" << std::endl;
    for(Arista* a : *relaciones){
        std::cout << "\t" << *a << "\n" << std::endl;
    }

    std::cout << "\n ========================== \n" << std::endl;
}

void Controller::matchMake(){
    std::vector<Perfil*>* perfiles;
    std::vector<Arista*>* relaciones;

    grafo.accesoData(&perfiles, &relaciones);

    for(Perfil* p : *perfiles){
        matches.push_back(grafo.obtenerMatch(p));
    }
}

void Controller::displayMatches(){
    std::cout << "\n ========================== \n" << std::endl;

    std::cout << "Matches(Perfiles con mayor compatibilidad): \n" << std::endl;
    if(!matches.size() == 0){
        for(Arista* a : matches){
            std::cout << "\t" << *a << "\n" << std::endl;
        }
    }else{
        std::cout << "\t" << "Aún no hay matches" << "\n" << std::endl;
    }
    std::cout << "\n ========================== \n" << std::endl;
}