/*Nerio Moran edo Merida 27 de febrero 2015 12:26
Generar numeros aleatorios uso de algunas funciones de la libreria Standar C++
<iomanip> para manipuladores de flujo que dan formato a flujos de datos.
<cstdlib> para generar numeros seudoaletarios (en este caso)

La funcion rand() % n genera un numero aleatorio entre 0 y n-1  [0,n-1]
si sumamos 1 a rand es decir 1 + rand() % n genera un numero entre 1 y n [1,n]


Falta ejemplo de uso de semilla para alterar la generacion de numeros.
Libreria matematica (ojo buscar)
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>      //contiene el prototipo de la funcion rand()
using namespace std;

int main(){

for(int i =1; i<=20; ++i)
   {
      cout<< setw(10) << (1+rand() % 6); //imprime un numero aleatorio cada 10 espacios
      
      if(i % 5 == 0)
         {
            cout<<endl;       //si es divisible entre 5 hace salto de linea
         }
   }




return 0;
}

//deitel 4ta edicion fig 3.7





