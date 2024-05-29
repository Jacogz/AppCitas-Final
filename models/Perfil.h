#ifndef PERFIL_H
#define PERFIL_H

#include <iostream>
#include <vector>
#include <string>

class Perfil{
    private:
        std::string nombre;
        std::string apellidos;
        std::vector<std::string>* gustos;

    public:
        std::vector<float>* caracteristicas;
        Perfil(const std::string& nombres, const std::string& apellidos, std::vector<std::string>* gustos, std::vector<float>* caracteristicas);
        friend std::ostream& operator<<(std::ostream& os, const Perfil& perfil);

        std::vector<std::string>* getGustos();
        std::vector<float>* getCaracterisiticas();
};

#endif