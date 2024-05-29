#include "./Arista.h"

Arista::Arista(Perfil* perfilA, Perfil* perfilB) : perfilA(perfilA), perfilB(perfilB){
    compatibilidad = obtenerAngulo(perfilA->getCaracterisiticas(), perfilB->getCaracterisiticas());
};

bool Arista::operator==(const Arista& otra) const {
    return (perfilA == otra.perfilA) && (perfilB == otra.perfilB);
}

bool Arista::operator!=(const Arista& otra) const {
    return !(*this == otra);
}

bool Arista::operator<(const Arista& otra) const {
    return compatibilidad < otra.compatibilidad;
}

bool Arista::operator<=(const Arista& otra) const {
    return (*this < otra) || (*this == otra);
}

bool Arista::operator>(const Arista& otra) const {
    return !(*this <= otra);
}

bool Arista::operator>=(const Arista& otra) const {
    return !(*this < otra);
}

std::ostream& operator<<(std::ostream& os, const Arista& arista) {
    os << *arista.perfilA << " -" << arista.compatibilidad << "- " << *arista.perfilB;
    return os;
}