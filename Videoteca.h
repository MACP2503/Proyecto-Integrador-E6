#ifndef VIDEOTECA_H
#define VIDEOTECA_H

#include "Video.h" //Composición (arreglo) con Video
#include "Pelicula.h" //Composición (arreglo) con Pelicula
#include "Serie.h" //Composicion (arreglo) con Serie

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Videoteca{

  protected:
    //Arreglo de Videos con su tamaño
    Pelicula *peliculas;
    Serie *series;
    int npeliculas;
    int nseries;
    
  public:
    //Constructores
    Videoteca();
    Videoteca(int, int);
    Videoteca(Pelicula *, int, Serie *, int);

    //Métodos
    //Sobrecarga de operadores (y de funciones)
    void operator+(Pelicula);
    void operator+(Serie);

    //Sobrecarga de funciones
    void buscar(int);
    void buscar(string);

    void evaluar(float, string, int);
    void mostrar();
    
};

#endif // VIDEOTECA_H