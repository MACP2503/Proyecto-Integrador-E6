#ifndef PELICULA_H
#define PELICULA_H

#include "Video.h" //Herencia de Video

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Pelicula: public Video {

  public:
    //Constructores
    Pelicula();
    Pelicula(int, string, int, string);

    //Métodos
    void evaluar(float);
    void mostrar();
};
#endif // PELICULA_H