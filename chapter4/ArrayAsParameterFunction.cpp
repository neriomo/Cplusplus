/*Nerio Moran edo Merida 1 de marzo 2015 00:01	
Introduccion funciones y Caracteristicas del paso de arreglos a funciones

Cuando se pasa una arreglo a una funcion, por lo general tambien se pasa el tamaño del arreglo(de otra manera necesitariamos
hacer uso de variables gloabales o declarar el tamaño en el cuerpo de la funcion) lo cual no es una buena practica de programacion.

C++ pasa los arreglos a las funciones mediante un paso por referencia simulado; las funciones a las que se llama pueden modificar
los valores de los elementos en los arreglos. El valor del nombre del arreglo es la direccion de la computadora del primer
elemento del arreglo. Debido a que la direccion inicial del arreglo se pasa, la funcion a la que se llama sabe de manera precisa
donde se almacena el arreglo en memoria. Por lo tanto cuando una funcion modifica una arreglo esta modifica sus elementos
actuales en sus ubicaciones originales de memoria.

Pasar arreglos por referencia tiene sentido si el arreglo es muy grande, ya que se ahorra el tiempo que se tarda en hacer
la copia y se ahorra memoria. 

Para asegurarnos de que los elementos originales del arreglo no se mofiquen el cuerpo de una funcion podemos asignar el
el parametro(arreglo) de la funcion como constante es decir: void MostrarArreglo(const int []); asi estaremos seguros
de que ningun elemento del arreglo podra ser modificado.
*/

#include <iostream>
using namespace std;
void ModificarArray(int [], int tamano);
void MostrarArreglo(const int [], int tamano);	//al usar el calificador const nos aseguramos de que esta funcion no modificara
																//los valores de los elementos del arreglo
int main(){
cout<<"EJEMPLO DE PASO DE ARREGLOS A FUNCIONES"<<endl;
const int tamano = 10; 							// los tamaños de los Arrays siempre deben ser constantes
int arreglo[tamano] = {1,2,3,4,5,6,7,8,9,10};		//declaramos e inicializamos mediante una lista de inicializacion
cout<<endl;
cout<<"Los elemenos del arreglo son"<<endl;
MostrarArreglo(arreglo,tamano);						
cout<<"\nllamamos a ModificarArray"<<endl;	
ModificarArray(arreglo,tamano);				//modificamos los elementos
cout<<"\nAhora los nuevos elementos son"<<endl;
MostrarArreglo(arreglo,tamano);

	return 0;
}

void ModificarArray(int arreglo[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		arreglo[i]*= 10;			//multiplicamos por 10 cada elemento del arreglo
	}
}

void MostrarArreglo(const int arreglo[], int tamano)
{
	for(int j = 0; j < tamano; ++j)
 			cout<<arreglo[j]<<", ";
 		{	
 		}
 		cout<<endl;
}