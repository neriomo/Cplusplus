/*Nerio Moran edo Merida 27 de febrero 2015 18:20	}	
Introduccion a las Funciones de tipo "Inline"

Implementar un programa como un conjunto de Funciones, es bueno desde el punto de vista de la 
ingenieria de sofware, pero las llamadas a Funciones involucran el consumo de tiempo de ejecucion.
C++ proporciona funciones inline para ayudar a reducir la sobrecarga de llamadas a funciones, especialmente
las funciones pequeñas. El calificador "inline" antes del tipo de retorno de una funcion, en la definicion
de la funcion avisa al compilador que genere una copia del codigo de la funcion en el sitio cuando sea 
apropiado para evitar una llamada a la funcion.

El calificador inline solo debe ser usado en funciones pequeñas de uso frecuente
Reduce el tiempo de ejecucion de un programa

*/

#include <iostream>
using namespace std;

inline long long Factorial(const int numero)		// no necesita prototipos por lo general si la funcion es muy grande es ignorado 
{													// el calificador inline por el compilador (Usar libreria Chronos y demostrar mejora)
	if(numero == 1 or numero == 0)
		{
			return numero;
		}else
			{
				return numero * Factorial(numero -1);
			}
}

int main(){
cout<<"EJEMPLO DE FUNCION INLINE\n";
cout<<"el factorial de 10 es:"<<Factorial(10)<<endl;




	return 0;
}