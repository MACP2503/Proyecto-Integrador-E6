#include "Temporada.h"

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Constructores
//Constructor por default
Temporada::Temporada(){
  this -> evaluacion = 0;
  this -> episodios = new Episodio[1];
  this -> nepisodios = 0;
}

//Constructor con parametros
Temporada::Temporada(Episodio * episodios, int nepisodios){
  this -> evaluacion = 0;
  this -> episodios = episodios;
  this -> nepisodios = nepisodios;
}

//Getters
float Temporada::getEvaluacion(){
  return evaluacion;
}

int Temporada::getNepisodios(){
  return nepisodios;
}

//Métodos
void Temporada::evaluar(float evaluacion){
  this -> evaluacion = evaluacion;
}

void Temporada::mostrar(){
  //Información primaria
    cout << "  Cantidad de Episodios: " << this -> nepisodios << endl;

    //Mostrar Episodios
    for(int i=0; i < (this -> nepisodios); i++){
        cout<<"    Episodio "<< i+1 << ": ";
        episodios[i].mostrar();
        cout << endl;
    }
}

