#include "./Grafo.h"
#include "./Perfil.h"
#include "./Arista.h"

#include <bits/stdc++.h>
#include <iostream>
#include <vector>

void Grafo::accesoData(std::vector<Perfil*>** contPerfiles, std::vector<Arista*>** contAristas){
    (*contPerfiles) = &perfiles;
    (*contAristas) = &relaciones;
}

void Grafo::setPerfiles(std::vector<Perfil*>* vector){
    perfiles = *vector;
}

void Grafo::agregarRelacion(Perfil* perfilA, Perfil* perfilB){
    Arista* _a = new Arista(perfilA, perfilB);
    relaciones.push_back(_a);
}

void Grafo::crearRelaciones(){
    for(Perfil* i : perfiles){
        for(Perfil* j : perfiles){
            Arista* existente = nullptr;
            if(i == j){
                continue;
            }
            for(Arista* a : relaciones){
                if((a->perfilA == i && a->perfilB == j) || (a->perfilA == j && a->perfilB == i)){
                    existente = a;
                }
            }if(existente == nullptr){
                agregarRelacion(i, j);
            }
        }
    }
}

std::vector<Arista*>* Grafo::obtenerVecinos(Perfil* perfil){
    std::vector<Arista*>* vecinos = new std::vector<Arista*>;
    for(Arista* a : relaciones){
        if(a->perfilA == perfil || a->perfilB == perfil){
            vecinos->push_back(a);
        }
    }
    return vecinos;
}

Arista* Grafo::obtenerMatch(Perfil* perfil){
    std::vector<Arista*>* vecinos = obtenerVecinos(perfil);
    Arista* maxCompatibilidad = vecinos->at(0);
    for(Arista* a : *vecinos){
        if(a > maxCompatibilidad){
            maxCompatibilidad = a;
        }
    }
    return maxCompatibilidad;
}