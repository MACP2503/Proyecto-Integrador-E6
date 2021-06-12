#ifndef EPISODIO_H
#define EPISODIO_H

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Episodio{

  protected:
    string titulo;
    int numTemporada;
    int numEpisodio;

  public:
    //Constructores
    Episodio();
    Episodio(string, int, int);
    //Métodos
    void mostrar();
};
#endif // EPISODIO_H