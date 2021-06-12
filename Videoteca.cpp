#include "Videoteca.h"

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Constructores
//Constructor por default
Videoteca::Videoteca(){
  this -> peliculas = new Pelicula[1];
  this -> npeliculas = 0;

  this -> series = new Serie[1];
  this -> nseries = 0;
}

//Constructor con tamaño especifico
Videoteca::Videoteca(int npeliculas, int nseries){
  this -> npeliculas = npeliculas;
  peliculas = new Pelicula[npeliculas];

  this -> nseries = nseries;
  series = new Serie[nseries];
}

//Constructor con parámetros
Videoteca::Videoteca(Pelicula * peliculas, int npeliculas, Serie * series, int nseries){
  this -> npeliculas = npeliculas;
  this -> peliculas = peliculas;

  this -> nseries = nseries;
  this -> series = series;
}

//Métodos
void Videoteca::operator+(Pelicula p){
  int i = 0;
  while(peliculas[i].getNombre() != "Desconocido"){
    i++;
  }
  if(i < (this -> npeliculas)){
    peliculas[i] = p;
  }
  else{
    cout << endl << "La Videoteca esta llena, no se pueden agregar mas Peliculas";
  }
}

void Videoteca::operator+(Serie s){
  int i = 0;
  while(series[i].getNombre() != "Desconocido"){
    i++;
  }
  if(i < (this -> nseries)){
    series[i] = s;
  }
  else{
    cout << endl << "La Videoteca esta llena, no se pueden agregar mas Series";
  }
}

//Sobrecarga de operadores
void Videoteca::buscar(int id){
  bool encuentra = false;
  for(int i=0; i < (this -> npeliculas); i++){
    if(peliculas[i].getID() == id){
      cout << endl;
      cout << "Resultados de la busqueda: " << endl;
      peliculas[i].mostrar();
      cout << "---------" << endl << endl;
      encuentra = true;
    }
  }
  for(int i=0; i < (this -> nseries); i++){
    if(series[i].getID() == id){
      cout << endl;
      cout << "Resultados de la busqueda: " << endl;
      series[i].mostrar();
      cout << "---------" << endl << endl;
      encuentra = true;
    }
  }
  if(!encuentra){
    cout << endl;
    cout << "Lo sentimos!" << endl;
    cout << "Sin resultados de busqueda" << endl << endl;
  }
}

void Videoteca::buscar(string nom){
  bool encuentra = false;
  for(int i=0; i < (this -> npeliculas); i++){
    if(peliculas[i].getNombre() == nom){
      cout << endl;
      cout << "Resultados de la busqueda: " << endl;
      peliculas[i].mostrar();
      cout << "---------" << endl << endl;
      encuentra = true;
    }
  }
  for(int i=0; i < (this -> nseries); i++){
    if(series[i].getNombre() == nom){
      cout << endl;
      cout << "Resultados de la busqueda: " << endl;
      series[i].mostrar();
      cout << "---------" << endl << endl;
      encuentra = true;
    }
  }
  if(!encuentra){
    cout << endl;
    cout << "Lo sentimos!" << endl;
    cout << "Sin resultados de busqueda" << endl << endl;
  }
}

void Videoteca::evaluar(float cal, string nom, int j){
  bool encuentra = false;
  for(int i=0; i < (this -> npeliculas); i++){
    if(peliculas[i].getNombre() == nom){
      peliculas[i].evaluar(cal);
      encuentra = true;
    }
  }
  for(int i=0; i < (this -> nseries); i++){
    if(series[i].getNombre() == nom){
      series[i].evaluar(cal, j);
      encuentra = true;
    }
  }
  if(!encuentra){
    cout << endl;
    cout << "Lo sentimos!" << endl;
    cout << "No hemos encontrado el titulo que quiere calificar" << endl << endl;
  }
}

void Videoteca::mostrar(){
  //Información primaria
  cout << "Bienvenido a la Videoteca " << endl << endl;
  cout << "Cantidad de Peliculas: " << this -> npeliculas << endl;
  cout << "Cantidad de Series: " << this -> nseries << endl;
  cout << "--------------------------" << endl << endl;
  
  //Mostrar Videos (Peliculas y Series)
  
  for(int i = 0; i < (this -> npeliculas); i++){
    cout << "Video: " << i + 1 << endl;
    peliculas[i].mostrar();
    cout << "---------" << endl;
  }

  for(int i = 0; i < (this -> nseries); i++){
    cout << "Video: " << npeliculas +i + 1 << endl;
    series[i].mostrar();
    cout << "---------" << endl;
  }
}
