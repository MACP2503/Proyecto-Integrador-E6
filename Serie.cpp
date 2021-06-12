#include "Serie.h"

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Constructores
//Constructor por default
Serie::Serie(){
  this -> ID = 0;
  this -> nombre = "Desconocido";
  this -> duracion= 0;
  this -> genero = "Desconocido";
  this -> calificacion = 0;
  this -> temporadas = new Temporada[1];
  this -> ntemporadas = 0;
}

//Constructor con parametros
Serie::Serie(int I, string nom, int du, string gen, Temporada * temporadas, int ntemporadas){
  this -> ID = I;
  this -> nombre = nom;
  this -> duracion= du;
  this -> genero = gen;
  this -> calificacion = 0;
  this -> temporadas = temporadas;
  this -> ntemporadas = ntemporadas;
}

//Métodos
void Serie::evaluar(float evaluacion, int i){
  temporadas[i-1].evaluar(evaluacion);
  promediar();
}

void Serie::promediar(){
  //Se calcula el promedio de todas las temporadas para la evaluación general
  float prom = 0.0;
  float n = this -> ntemporadas;
  for(int i=0; i < (this -> ntemporadas); i++){
    prom += temporadas[i].getEvaluacion();
  }
  prom/= n;
  this -> calificacion = prom;
}

int Serie::contar(){
  int cont = 0;
  for(int i=0; i < (this -> ntemporadas); i++){
    cont += temporadas[i].getNepisodios();
  }
  return cont;
}

void Serie::mostrar(){
    //Información primaria
    cout << "Serie: " << nombre << endl;
    cout << "ID: "<< ID << endl;
    cout << "Duracion: " << duracion << endl;
    cout << "Genero: "<< genero << endl;
    this -> promediar();
    cout << "Calificacion: " << calificacion << endl;

    //Mostrar Temporadas
    cout << "Cantidad de Temporadas: " << this -> ntemporadas << endl;
    cout << "Cantidad total de Episodios: " << contar() << endl;
    for(int i=0; i < (this -> ntemporadas); i++){
      cout << "  Temporada " << i+1 <<endl;
      temporadas[i].mostrar();
    }
}

