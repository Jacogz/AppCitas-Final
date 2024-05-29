#ifndef GENERADOR_H
#define GENERADOR_H

#include "../models/Perfil.h"
#include "../models/Gusto.h"
#include <vector>
#include "../json.hpp"

using json = nlohmann::json;

class Generador {
private:
    std::vector<std::string> nombres;
    std::vector<std::string> apellidos;
    std::vector<Gusto*> gustos;

public:
    Generador(const std::string& archivoNombres, const std::string& archivoGustos);
    Perfil* generarPerfil();
};

#endif
