#ifndef ARISTA_H
#define ARISTA_H

#include "./Perfil.h"
#include "../controllers/Algebra.h"

class Arista{
    public:
        Perfil* perfilA;
        Perfil* perfilB;
        float compatibilidad;

        Arista(Perfil* perfilA, Perfil* perfilB);

//Sobrecarga de operadores para comparación de aristas por su valor de compatibilidad
        bool operator==(const Arista& otra) const;
        bool operator!=(const Arista& otra) const;
        bool operator<(const Arista& otra) const;
        bool operator<=(const Arista& otra) const;
        bool operator>(const Arista& otra) const;
        bool operator>=(const Arista& otra) const;
        friend std::ostream& operator<<(std::ostream& os, const Arista& arista);
};

#endif