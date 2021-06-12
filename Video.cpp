#include "Video.h"

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Constructores
//Constructor por default
Video::Video()
{
  this -> ID = 0;
  this -> nombre = "Desconocido";
  this -> duracion = 0;
  this -> genero = "Desconocido";
  this -> calificacion = 0;
}

//Constructor con parámetros
Video::Video(int I, string nom, int du, string gen){
  this -> ID = I;
  this -> nombre = nom;
  this -> duracion = du;
  this -> genero = gen;
  this -> calificacion = 0;
}

//Getters
int Video::getID(){
  return ID;
}

string Video::getNombre(){
  return nombre;
}
