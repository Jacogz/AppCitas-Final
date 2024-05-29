#include "./Generador.h"
#include "../models/Perfil.h"
#include "./Algebra.h"
#include <iostream>
#include <fstream>
#include "../json.hpp"

using json = nlohmann::json;


Generador::Generador(const std::string& archivoNombres, const std::string& archivoGustos){
    // Cargar nombres desde el archivo
    std::ifstream nFile(archivoNombres);
    json jNombres = json::parse(nFile);

    jNombres["nombres"].get_to(nombres);
    jNombres["apellidos"].get_to(apellidos);

    nFile.close();

    std::ifstream gFile(archivoGustos);
    json jGustos = json::parse(gFile);
    
    for(auto& Item : jGustos.items()){
        std::string desc = Item.key();
        std::vector<float> impactos;
        Item.value().get_to(impactos);

        Gusto* gusto = new Gusto(desc, impactos);

        gustos.push_back(gusto);
    }

    gFile.close();


    std::srand(std::time(0));
}

Perfil* Generador::generarPerfil() {
    std::string nombre = nombres[rand() % nombres.size()];
    std::string apellido1 = apellidos[rand() % apellidos.size()];
    std::string apellido2 = apellidos[rand() % apellidos.size()];

    std::string apellidos = apellido1 + " " + apellido2;

    int numGustos = (rand() % gustos.size()) + 1;

    std::vector<std::string>* gustosDesc = new std::vector<std::string>;
    std::vector<float>* caracteristicas = new  std::vector<float>(7, 0);

    int i = 0;
    while(i < numGustos){
        Gusto* gusto = gustos[rand() % gustos.size()];
        if(std::count(gustosDesc->begin(), gustosDesc->end(), gusto->desc) == 0){
            i++;
            gustosDesc->push_back(gusto->desc);
            sumar(caracteristicas, &gusto->impacto);
        }
    }

    normalizar(caracteristicas);

    std::cout << nombre << " " << apellidos << "\t";
    for(float i : *caracteristicas){
        std::cout << i << ", ";
    }
    std::cout << "\n";

    Perfil* perfil = new Perfil(nombre, apellidos, gustosDesc, caracteristicas);

    return perfil;
}
