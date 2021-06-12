#include "Pelicula.h"

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Constructores
//Constructor por default
Pelicula::Pelicula(){
  this -> ID = 0;
  this -> nombre = "Desconocido";
  this -> duracion = 0;
  this -> genero = "Desconocido";
  this -> calificacion = 0.0;
}

//Constructor con parámetros
Pelicula::Pelicula(int I, string nom, int du, string gen): Video(I, nom, du, gen){
  /*this -> ID = I;
  this -> nombre = nom;
  this -> duracion = du;
  this -> genero = gen;*/
  this -> calificacion = 0.0;
}

//Métodos
void Pelicula::evaluar(float cal){
  this -> calificacion = cal;
}

void Pelicula::mostrar(){
  cout << "Pelicula: " << nombre << endl;
  cout << "ID: " << ID << endl;
  cout << "Duracion: " << duracion <<endl;
  cout << "Genero: " << genero << endl;
  cout << "Calificacion: " << calificacion << endl;
}

