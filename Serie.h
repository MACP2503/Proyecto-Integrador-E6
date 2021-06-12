#ifndef SERIE_H
#define SERIE_H

#include "Video.h" //Herencia de Video
#include "Temporada.h" //Composicion (arreglo) con Temporada

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Serie: public Video {

  protected:
    Temporada * temporadas;
    int ntemporadas;

  public:
    //Constructores
    Serie();
    Serie(int, string, int, string, Temporada *, int);

    //Métodos
    void evaluar(float, int);
    void promediar();
    int contar();
    void mostrar();
    
};

#endif // SERIE_H