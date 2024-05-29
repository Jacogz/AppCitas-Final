#ifndef GUSTO_H
#define GUSTO_H

#include <string>
#include <vector>

//Estructura auxiliar para manejo y operación de los objetos en Gustos.json
class Gusto{
    public:
        std::string desc;
        std::vector<float> impacto;

        Gusto(const std::string& desc, std::vector<float> impacto) : desc(desc), impacto(impacto) {};
};

#endif