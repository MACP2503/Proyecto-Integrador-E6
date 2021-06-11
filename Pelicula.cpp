#include "Pelicula.h"

Pelicula::Pelicula()
{
    ID = "p";
    nombre = "d";
    duracion=0.0;
    genero="f";
    calificacion=0;
}

Pelicula::Pelicula(string I, string nom, float du, string gen,float cal):Video(I,  nom,  du,  gen){
  calificacion=cal;
}

void Pelicula::EvaluacionPelicula(){
  cout<<"Pelicula: "<<endl;
  cout<<"ID: "<<ID<<endl;
  cout<<"nombre: "<<nombre<<endl;
  cout<<"duracion: "<<duracion<<endl;
  cout<<"genero: "<<genero<<endl;
  cout<<"calificacion: "<<calificacion<<endl;
}

