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

        bool operator==(const Arista& otra) const;
        bool operator!=(const Arista& otra) const;
        bool operator<(const Arista& otra) const;
        bool operator<=(const Arista& otra) const;
        bool operator>(const Arista& otra) const;
        bool operator>=(const Arista& otra) const;
        friend std::ostream& operator<<(std::ostream& os, const Arista& arista);
};

#endif