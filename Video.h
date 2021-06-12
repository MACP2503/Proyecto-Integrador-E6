#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Video {

  protected:
    int ID;
    string nombre;
    int duracion;
    string genero; 
    //La agregamos por practicidad (todos los Videos tienen)
    float calificacion;

  public:
    //Constructores
    Video();
    Video(int, string, int, string);

    //Getters
    int getID();
    string getNombre();
};

#endif // VIDEO_H