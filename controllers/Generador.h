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
//Constructor: También se encarga de la lectura y preprocesamiento de los datos en formato json
    Generador(const std::string& archivoNombres, const std::string& archivoGustos);
    
//Función de creación aleatoria de objetos perfil
    Perfil* generarPerfil();
};

#endif
