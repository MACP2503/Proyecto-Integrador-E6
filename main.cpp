#include <iostream>
#include <stdio.h>
using namespace std;

#include "Videoteca.h"
//#include "Video.h"
#include "Serie.h"
#include "Pelicula.h"
//#include "Episodio.h"
//#include "Temporada.h"

//Proyecto Integrador
//Programación orientada a objetos

/*
- Sofia Ingigerth Cañas Urbina A01173828

- Marco Antonio Camalich Pérez A01351725

- Alejandro Paredes Balgañón A01351746

- Jesús Julián Madrid Castro A00227101

- Stephanie Ruiz Díaz A00227730

- 12 de junio de 2021

- Profesor Iván Alejandro García Ramírez
*/

int main() { //bbbb
  // A. Crear 1 videoteca
  Videoteca vdt1(3, 2);

  // C. Las series deberán tener 2 temporadas y cada temporada deberá tener al menos 2 episodios
  //Se crean los Episodios
  Episodio e1("Panico en la fiesta del palacio", 1, 1);
  Episodio e2("Problemas en el espacio grumoso", 1, 2);
  Episodio e3("Llego de la Nocheosfera", 2, 1);
  Episodio e4("Los ojos", 2, 1);
  
  Episodio e5("El tercero", 1, 1);
  Episodio e6("La presion", 1, 2);
  Episodio e7("Los caballeros", 2, 1);
  Episodio e8("La hojita", 2, 1);

  //Arreglos de apuntadores de Episodios
  Episodio * episodios1 = new Episodio[2];
  episodios1[0] = e1;
  episodios1[1] = e2;

  Episodio * episodios2 = new Episodio[2];
  episodios2[0] = e3;
  episodios2[1] = e4;

  Episodio * episodios3 = new Episodio[2];
  episodios3[0] = e5;
  episodios3[1] = e6;

  Episodio * episodios4 = new Episodio[2];
  episodios4[0] = e7;
  episodios4[1] = e8;
  
  //Con los arreglos de apuntadores de Episodios se crean las Temporadas
  Temporada tem1(episodios1, 2);
  Temporada tem2(episodios2, 2);
  Temporada tem3(episodios3, 2);
  Temporada tem4(episodios4, 2);

  //Arreglos de apuntadores de Temporadas
  Temporada * temporadas1 = new Temporada[2];
  temporadas1[0]= tem1;
  temporadas1[1]= tem2;

  Temporada * temporadas2 = new Temporada[2];
  temporadas2[0]= tem3;
  temporadas2[1]= tem4;

  // B. Crear 2 películas y 2 series y agregarlas a la videoteca
  //Se crean las Peliculas
  Pelicula p1(7264, "StarWars", 125, "Ciencia ficcion");
  Pelicula p2(6154, "Avengers", 182, "Accion");
  Pelicula p3(4941,"Las cronicas de Narnia", 150, "Aventura");

  ////Con los arreglos de apuntadores de Temporadas se crean las Series
  Serie s1(7356,"Hora de Aventura", 92, "Aventura",temporadas1,2);
  Serie s2(9099, "El increible mundo de Gumball", 56, "Comedia", temporadas2, 2);
  
  //Las Peliculas y Series se agregan a la Videoteca
  vdt1 + p1;
  vdt1 + p2;
  vdt1 + p3;
  vdt1 + s1;
  vdt1 + s2;

  // D. Evaluar todas las 2 películas
  //Se evalua un elemento de la Videoteca con su título y el número de temporada si es que aplica (en este caso le ponemos 0 porque no importa)
  vdt1.evaluar(9.9, "StarWars", 0);
  vdt1.evaluar(7.7, "Avengers", 0);
  vdt1.evaluar(8.7, "Las cronicas de Narnia", 0);

  // E. Evaluar cada temporada de las 2 series
  //Se evalua un elemento de la Videoteca con su título y el número de temporada a evaluar
  vdt1.evaluar(7.2, "Hora de Aventura", 1);
  vdt1.evaluar(9.4, "Hora de Aventura", 2);
  vdt1.evaluar(9.5, "El increible mundo de Gumball", 1);
  vdt1.evaluar(7.7, "El increible mundo de Gumball", 2);

  // F. Mostrar la información de la videoteca 
  vdt1.mostrar();

  // Requerimientos adicionales (ya hemos usado herencia, apuntadores y sobrecarga de operaciones)
  //Sobrecarga de funciones:
  vdt1.buscar(9099);

  vdt1.buscar(1111);

  vdt1.buscar("Las cronicas de Narnia");

  vdt1.buscar("Mandalorian");

}