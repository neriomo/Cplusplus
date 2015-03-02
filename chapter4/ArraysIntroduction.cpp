/*Nerio Moran edo Merida 1 de marzo 2015 15:36	}	
Introduccion a los Arreglos (Arrays)   

Los (arreglos) arrays es una de las mas importantes Estructuras de datos. Los arreglos son estructuras de datos que 
consisten en elementos de datos relacionados del mismo tipo.
Las Estructuras y classes son capaces de almacenar elementos de datos de diferentes tipos. Los arreglos, las estructuras
y las clases son entidades "estaticas" que mantienen el mismo tamaño durante la ejecucion de un programa.

(Podrian pertener a una clase de almacenamieto automatica revisar StorageClass.cpp Chapter3) y por tanto crearse y destruirse 
cada vez que se llama el bloque donde se definen.

Existen otras estruturas de datos como pilas, colas, arboles que son dinamicos, es decir pueden cambiar su tañano durante la
ejecucion de un programa.

El tipo de arreglo que se mostrara se le conoce como "arreglos basados en aputadores de C"
Existen otros tipo de arreglos basados en objetos que son mas seguros y versatiles.


Los Arreglos son grupo consecutivo de localidades de memoria que tienen el mismo nombre y elmismo tipo. 
definificion de un arreglo en C++. Su declaracion es de la siguiente manera:

tipo Identificador[tamaño n];				El arreglo contiene n elementos
											El primer elemento de cada arreglo es el elemento 0 es decir identificador[0];
El elemento n de un arreglo es [n]
El elemento 1er,2do,3ro,4to,5to de un arreglo son [0],[1],[2],[3],[4],...[n-1]

Un arreglo se puede inicializar mediante una estructura de repeticion
Un arreglo se puede inicializar mediante una lista de inicializacion
Un arreglo se puede inincializar mediante una variable constante 


*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

void MostrarArreglo(int [], int); // prototipo de funcion que muestra arrays (arreglo, tamaño) el tamaño es obligatorio
									//Siempre se debe escribir el tipo de dato y [] para especificar que es un arreglo

int main(){
cout<<"EJEMPLO DE USO DE ARREGLOS "<<endl;
const int tamano_arreglo = 10; // Las variables constantes siempre se deben inicializar en su declaracion-


int enteros[10];		// declaracion de un arreglo de enteros con 10 elementos tamaño = 10
int enteros2[10] = {10,9,8,7,6,5,4,3,2,1}; // declaracion e inicialiacion de un arreglo mediante una lista de inicializacion{}
int enteros3[tamano_arreglo] = {0}; // los arrays siempre se debe declarar bajo variables constantes.(buena practica de programacion) 
												//al asignar un arreglo con {0}, asigna 0 a cada elmento del arreglo

	 //inicializamos todos los elementos en 0;

	//inicializando arreglos mediante una estructura de repeticion for
	for(int i = 0; i< 10; i++ )
		{
			srand( time(0) + i);		// usamos la funcione srand de la liberia standar de C++ <cstdlib> (StandarLibrary.cpp)
			enteros[i] = rand() % 6 + 1;	// creamos un numero aleatorio entre [1,6] y lo asignamos a cada ubicacion i
 													// de elementos del arreglo
 		}

 cout<<"Mostramos los elementos del arreglo incializados media un ciclo for"<<endl;
 MostrarArreglo(enteros,10);
 cout<<endl;
 cout<<"Mostramos los elementos del arreglo inicializados mediante una lista de inicializacion"<<endl;
 MostrarArreglo(enteros2,10);
 cout<<"Mostramos los elementos del arreglo incializados mediante una variable constante"<<endl;
 MostrarArreglo(enteros3,10);

	return 0;
}

// definicion de la funcion

void MostrarArreglo(int arreglo[], int tam)
{
	cout<< "Elemento" << setw(13) << "valor "<<endl;
 	for(int j = 0; j < tam; ++j)
 	{
 		
 		cout<< setw(7) << j << setw(13) << arreglo[j] <<endl;
 	}
}


