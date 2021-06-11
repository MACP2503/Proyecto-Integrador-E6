#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
#include <string>
#include "Video.h"
using namespace std;

class Pelicula: public Video {

  public:
    float calificacion;
  public:
    //Constructores
  Pelicula();
  Pelicula(string, string, float, string,float);
  void EvaluacionPelicula();

};

#endif