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

    //función para obtener acceso a las direcciones de memoria de perfiles y relaciones
        void accesoData(std::vector<Perfil*>** contPerfiles, std::vector<Arista*>** contAristas);

    //Creación y manipulación de registros (perfiles y relaciones)
        void setPerfiles(std::vector<Perfil*>* vector);
        void agregarRelacion(Perfil* perfilA, Perfil* perfilB);
        void crearRelaciones();

    //Función para obtener valores adyacentes a un determinado perfil
        std::vector<Arista*>* obtenerVecinos(Perfil* perfil);

    //Función para obtener la relación de mayor puntaje de un determinado perfil
        Arista* obtenerMatch(Perfil* perfil);
};

#endif