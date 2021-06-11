#include "Capitulos.h"

Capitulos::Capitulos()
{
    capitulostemp1=0;
    CalificacionTemp=0;

}

Capitulos::Capitulos( int cap1, float ct){
   capitulostemp1=cap1;
   CalificacionTemp=ct;
}
float Capitulos::Calificacion(){
  return CalificacionTemp;
}
void Capitulos::print(){
  cout<<"Capitulos temporada: "<<capitulostemp1<<endl;
  cout<<"calificacion temporada: "<<CalificacionTemp<<endl;
}

