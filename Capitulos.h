#ifndef CAPITULO_H
#define CAPITULO_H
#include <iostream>
#include <string>

using namespace std;

class Capitulos{

  public:
    int capitulostemp1;
    float CalificacionTemp;


  public:
    //Constructores
  Capitulos();
  Capitulos(int,float);
  void print();
  float Calificacion();

};

#endif