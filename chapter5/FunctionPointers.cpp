/*Nerio Moran edo Merida 28 de julio 2015 22:00	
Apuntadores a funciones

Un apuntador a una funcion contiene  la direccion de la funcion en memoria. El nombre de 
una funcion es enrealidad la direccion  inicial en memoria del codigo que realiza la tarea
de la funcion.Los apuntadores de funciones:
-Se pueden pasar como argumentos a otras funciones
-Regresear de funciones 
-Asignarse a otros apuntadores a funciones

Ejemplo de niveles de privilegio en referencias como punteros como argumentos y punteros de funciones
*/


#include <iostream>
#include <iomanip>
using namespace std;

void burbuja(int [], const int, bool(*)(int,int) );
void intercambia(int * const, int *const);
bool ascendente(int, int);
bool descendente(int, int);


int main(){

const int tamanoArreglo = 10;
int orden ;
int contador ;
int a [ tamanoArreglo] = { 2,6,4,7,8,9,6,5,4,1};

cout<<"introduzca 1 para ordenar de manera ascendente"<<endl;
cout<<"introduzca 2 para ordenar de manera descendente"<<endl;
cin>>orden;
cout<<"\n Elementos del arreglo en forma original"<<endl;
for(contador = 0; contador<10; contador++)
	{
		cout<<setw(4)<<a[contador];
	}


if(orden == 1)
	{
		burbuja(a, tamanoArreglo, ascendente);
	}

if(orden == 2)
	{
		burbuja(a, tamanoArreglo, descendente);
	}

cout<<"\n Elementos del arreglo en forma ordenada"<<endl;
for(contador = 0; contador<10; contador++)
	{
		cout<<setw(4)<<a[contador];
	}
cout<<"\n";

	return 0;
}

void burbuja(int trabajo[], const int tamano, bool(*compara)(int,int) )		//en este caso compara es un puntero que apunta a una funcion
{
	for(int pasada =1; pasada< tamano; pasada++)
		{
			for(int cuenta = 0; cuenta<tamano-1; cuenta++)
				{
					if( (*compara)(trabajo[cuenta],trabajo[cuenta+1]) )
						{
							intercambia(&trabajo[cuenta], &trabajo[cuenta+1]);
						}
				}		
		}


}

void intercambia(int * const firstValue, int * const secondValue)
{
	int mantiene =  *firstValue;
	*firstValue = *secondValue;
	*secondValue = mantiene;
}

bool ascendente (int a , int b)
{

	return a > b;		
}

bool descendente (int a , int b)
{

	return a < b;
}