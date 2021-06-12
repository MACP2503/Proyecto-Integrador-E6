#include "Episodio.h"

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Constructores
//Constructor por default
Episodio::Episodio()
{
  this -> titulo = "Desconocido";
  this -> numTemporada = 0;
  this -> numEpisodio = 0;
}

//Constructor con parámetros
Episodio::Episodio(string titulo, int temp, int ep){
  this -> titulo = titulo;
  this -> numTemporada = temp;
  this -> numTemporada = ep;
}

//Métodos
void Episodio::mostrar(){
  cout << titulo;
}

