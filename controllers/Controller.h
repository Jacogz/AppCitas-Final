#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "./Generador.h"
#include "../models/Grafo.h"
#include "../models/Perfil.h"
#include "../models/Arista.h"
#include <vector>
#include <iostream>

class Controller{
    private:
        Grafo grafo;
        Generador generador;
        std::vector<Arista*> matches;
    
    public:
        Controller(const std::string& archivoNombres, const std::string& archivoGustos);

        void inicializar(int cantPerfiles);

        void displayGrafo();
        void matchMake();
        void displayMatches();
};

#endif