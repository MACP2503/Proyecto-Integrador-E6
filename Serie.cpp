#include "Serie.h"
#include <iostream>
using namespace std;

Serie::Serie(){
    this->ID = "p";
    this->nombre = "d";
    this->duracion=0.0;
    this->genero="f";
    this->temporadas = new Temporada[1];
    this->ntemporadas = 0;
}

Serie::Serie(string I, string nom, float du, string gen,Temporada * temporadas, int ntemporadas):Video(I,  nom,  du,  gen){
    this->temporadas = temporadas;
    this->ntemporadas=ntemporadas;
}


void Serie::EvaluacionSerie(){
    //Información primaria
    cout << "-------" << endl;
    cout<<"Serie: "<<endl;
    cout<<"ID: "<<ID<<endl;
    cout<<"nombre: "<<nombre<<endl;
    cout<<"duracion: "<<duracion<<endl;
    cout<<"genero: "<<genero<<endl;
    //Mostrar productos
    for(int i=0; i<(this->ntemporadas); i++){
        temporadas[i].print();
    }
    cout << "-------" << endl;
}

