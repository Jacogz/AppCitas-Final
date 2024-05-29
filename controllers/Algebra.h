#ifndef ALGEBRA_H
#define ALGEBRA_H

#include <vector>

float getMagnitud(std::vector<float>* u);
void normalizar(std::vector<float>* u);
void sumar(std::vector<float>* u, std::vector<float>* v);
float productoPunto(std::vector<float>* u, std::vector<float>* v);
float obtenerAngulo(std::vector<float>* u, std::vector<float>* v);

#endif