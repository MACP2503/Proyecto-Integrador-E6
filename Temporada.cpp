#include "Temporada.h"
#include <iostream>
using namespace std;

Temporada::Temporada(){
    this->capitulos = new Capitulos[1];
    this->ncapitulos = 0;
}

Temporada::Temporada(Capitulos * capitulos, int ncapitulos){
    this->capitulos = capitulos;
    this->ncapitulos=ncapitulos;
}


void Temporada::print(){
    //Información primaria
    float prom;
    cout << "Cantidad de Temporadas: " << this->ncapitulos << endl;
    cout << "-------" << endl;
    //Mostrar productos
    for(int i=0; i<this->ncapitulos; i++){
        cout<<"Temporada: "<<i+1<<endl;
        capitulos[i].print();
        cout << "----" << endl;
    }
    for(int i=0; i<this->ncapitulos; i++){
        capitulos[i].Calificacion();
    }
    cout<<"Calificacion Promedio: "<<(capitulos[0].Calificacion()+capitulos[1].Calificacion())/2<<endl;
}

