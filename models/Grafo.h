#ifndef GRAFO_H
#define GRAFO_H

#include "./Perfil.h"
#include "./Arista.h"

#include <iostream>
#include <vector>

class Grafo{
    private:
        std::vector<Perfil*> perfiles;
        std::vector<Arista*> relaciones;

    public:
        void accesoData(std::vector<Perfil*>** contPerfiles, std::vector<Arista*>** contAristas);
        void setPerfiles(std::vector<Perfil*>* vector);
        void agregarRelacion(Perfil* perfilA, Perfil* perfilB);
        void crearRelaciones();
        std::vector<Arista*>* obtenerVecinos(Perfil* perfil);
        Arista* obtenerMatch(Perfil* perfil);
};

#endif