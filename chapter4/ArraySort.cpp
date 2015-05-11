/*Nerio Moran edo Merida 10 de mayo 2015 22:06*/
//Ejemplo de Ordenamiento de arreglos

/*El ordenamiento de datos,ordenar en un orden particular, (ascendente o descendente ) es una de las aplicaciones
de computo mas importantes. Ordenar datos es un problema intrigante que ha atraido a algunas de las acciones
de investigacion en el campo de las ciencias de la computacion.*/

// Ordenamiento Burbuja!!!! ---> O(n²)


#include <iostream>
#include <iomanip>
using namespace std;

void Burbuja(int[], int tamanoArreglo);  //prototipo de funcion

int main(){
cout<<"ORDENAMIENTO DE ARREGLO EN FORMA ASCENDENTE\n";

const int tamanoArreglo = 14;
int array[tamanoArreglo] = {-1,2,3,-5,90,45,748,454,8,412,48,12168,1,1};


cout<<"Los elementos en forma original!\n";
for( int i = 0; i< tamanoArreglo; i++)
	{
		cout<< setw(4) << array[i];
	}

cout<<endl;

cout<<"Los elementos en forma ascendente!\n";
Burbuja(array, tamanoArreglo);	// Ordenamos
for( int i = 0; i< tamanoArreglo; i++)
	{
		cout<< setw(4) << array[i];
	}


cout<<endl;
	return 0;
}

void Burbuja (int array[], int tamanoArreglo) {
int KeepOn;  //ubicacion temporal utilizada para intercambiar los elementos del arreglo

for (int pasada = 0; pasada < tamanoArreglo -1; pasada++ )
	{
		for(int j = 0; j< tamanoArreglo - 1 ; j++ )
			{
				if( array[j] > array[j + 1] )		//si el termino n es mayor a el termino n+1, n+2, n+3 ... n+tamanoArreglo-1
					{
						KeepOn = array[j];					//intercambie!!!
						array[j] = array[j + 1];
						array[j + 1] = KeepOn;
					}
			}
	}




}