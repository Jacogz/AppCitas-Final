#include "./Algebra.h"
#include <vector>
#include <cmath>
#include <iostream>

float getMagnitud(std::vector<float>* u){
    float sumaCuadrados = 0;
    for(float i : *u){
        sumaCuadrados += pow(i, 2);
    }
    return std::sqrt(sumaCuadrados);
}

void normalizar(std::vector<float>* u){

    float magnitud = getMagnitud(u);
    for(int i = 0; i < u->size(); i++){
        float prev = u->at(i);
        u->at(i) = prev/magnitud; 
    }
}

void sumar(std::vector<float>* u, std::vector<float>* v){
    for(int i = 0; i < u->size(); i++){
        u->at(i) = u->at(i) + v->at(i); 
    }
}


float productoPunto(std::vector<float>* u, std::vector<float>* v){
    float sum = 0;
    for(int i = 0; i < u->size(); i++){
        sum += u->at(i) * v->at(i); 
    }
    return sum;
}

float obtenerAngulo(std::vector<float>* u, std::vector<float>* v){
    float magnitudU = getMagnitud(u);
    float magnitudV = getMagnitud(v);
    float pPunto = productoPunto(u, v);

    return pPunto/magnitudU*magnitudV;
}