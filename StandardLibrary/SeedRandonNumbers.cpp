/*Nerio Moran edo Merida 27 de febrero 2015 14:56
Generar secuencias diferentes de numeros aleatorios(randomizar) usando la funcion srand() 
<iomanip> para manipuladores de flujo que dan formato a flujos de datos.
<cstdlib> para generar numeros seudoaletarios (en este caso)

La funcion rand() % n genera un numero aleatorio entre 0 y n-1  [0,n-1]
si sumamos 1 a rand es decir 1 + rand() % n genera un numero entre 1 y n [1,n]

La funcion srand(unsigned int) tiene como argumento un entero sin signo que provoca un cambio
en la secuencia de nuemros aletarios.


*/

#include <iostream>
#include <iomanip>		
#include <cstdlib>      //contiene el prototipo de la funcion rand() y srand()
#include <ctime>		//contiene la funcion time(0) la cual retorna el la hora actual en segundos (unsigned int)
using namespace std;

int main(){
int j=0;
for(j = 0; j < 5; ++j)
	{						// Si solo usamos el tiempo corremos el riesgo de que el tiempo sea el mismo en cada iteracion por eso
		srand(time(0)+j); // usamos el tiempo y sumamos un valor "x" para cambiar la semilla por cada iteracion 
		for(int i =1; i<=20; ++i)
   			{
      			cout<< setw(10) << (1+rand() % 6); //imprime un numero aleatorio cada 10 espacios
      
      			if(i % 5 == 0)
         			{
            			cout<<endl;       //si es divisible entre 5 hace salto de linea
         			}
   			}

   		cout<<endl;
   		cout<<endl;
   		cout<<endl;

	}	


return 0;
}

//deitel 4ta edicion fig 3.7





