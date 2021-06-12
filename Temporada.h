#ifndef TEMPORADA_H
#define TEMPORADA_H

#include "Episodio.h" //Composición (arreglo) con Capitulo

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Temporada{

protected:
  float evaluacion;

  Episodio * episodios;
  int nepisodios;
    
public:
  //Constructores
  Temporada();
  Temporada(Episodio *, int);

  //Getters
  float getEvaluacion();
  int getNepisodios();
  
  //Métodos
  void evaluar(float);
  void mostrar();
};

#endif // TEMPORADA_H