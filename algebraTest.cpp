#include "./controllers/Algebra.h"
#include <iostream>
#include <vector>
int main(){
    std::vector<float> v;
    v.push_back(0.1);
    v.push_back(-0.1);
    v.push_back(0.5);
    v.push_back(0.3);
    v.push_back(-0.6);
    v.push_back(0.2);
    v.push_back(0);

    std::vector<float> u;
    u.push_back(1);
    u.push_back(-1);
    u.push_back(2);
    u.push_back(-2);
    u.push_back(3);
    u.push_back(-3);
    u.push_back(2);

    sumar(&v, &u);

    for(float i : v){
        std::cout << i << "\n" << std::endl;
    }
    std::cout << "==============" << std::endl;

    normalizar(&v);
    normalizar(&u);
    
    float coseno = obtenerAngulo(&u, &v);
    std::cout << coseno;
}