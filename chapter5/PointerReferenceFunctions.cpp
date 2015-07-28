/*Nerio Moran edo Merida 28 de julio 2015 10:00	
Llamada a funciones por referencia

En C++ existen 3 formas de pasar argumentos a funciones: 
-paso por valor o copia
-paso por referencia mediante referencias como argumentos
-paso por referencia mediante apuntadores como argumentos


*/

#include <iostream>
using namespace std;


int cuboPorValor(int);			//paso por valor
void cuboPorReferencia(int *);	//Referencia con puntero como argumento

int main(){
int valor  = 10;
cout<<"cuboPorValor "<<cuboPorValor(valor)<<endl;


cout<<"cuboPorReferencia ";
cuboPorReferencia(&valor);
cout<<valor<<endl; //Pasamos la direccion!



	return 0;
}

int cuboPorValor(int valor){ return valor*valor*valor;}
void cuboPorReferencia(int *PtrValor){ *PtrValor = *PtrValor * *PtrValor * *PtrValor;}

/*El uso de referencias como apuntadores y como referencias, permite evitar la sobrecarga suele de pasar
al pasar argumentos como copia. El uso de referencias es mucho mas rapido ya que los valores se modifican 
directamente en el cuerpo donde fue invocada la funcion antes de que el control regrese al cuerpo donde la 
funcion se invocó 

Si el argumento que pasamos a nuestra funcion no debe ser modificado utilizamos el calificador "const"
para asegurarnos de que este no pueda ser modificado dentro de la funcion.

*/