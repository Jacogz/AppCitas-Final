#include "./Perfil.h"

Perfil::Perfil(const std::string& nombre, const std::string& apellidos, std::vector<std::string>* gustos, std::vector<float>* caracteristicas)
    : nombre(nombre), apellidos(apellidos), gustos(gustos), caracteristicas(caracteristicas) {};


std::vector<std::string>* Perfil::getGustos(){
    return gustos;
}

std::vector<float>* Perfil::getCaracterisiticas(){
    return caracteristicas;
}

std::ostream& operator<<(std::ostream& os, const Perfil& perfil) {
    os << perfil.nombre << " " << perfil.apellidos;
    return os;
}