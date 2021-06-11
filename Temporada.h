#ifndef TEMPORADA_H
#define TEMPORADA_H

#include <string>
#include "Capitulos.h"

using namespace std;

class Temporada{
protected:
    Capitulos * capitulos;
    int ncapitulos;
    
    
public:
    Temporada();
    Temporada(Capitulos *,int);
    virtual void print();
};
#endif