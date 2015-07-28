/*Nerio Moran edo Merida 13 de mayo 2015 20:41	
Introduccion Apuntadores */

/*Una de las caracteristicas mas poderosas del leguaje de programacion C++ es el apuntador.
Los apuntadores permiten simular el paso por referencia y crear y manipular estructuras 
dinamicas de datos(es decir, que pueden crecer y dismunir), tales como las listas ligadas,
colas, pilas y árboles.

Las variables apuntador contienen direcciones de memoria como su valores. Por lo general,
Una variable contiene de manera directa, un valor especifico.
Un apuntador contiene la direccion de la variable que contiene un valor especifico.
&--> representa el operador de direccion(devuelve la direccion de memoria de su operando)
*--> representa el operador de indireccion(devuelve un sinonimo o nombre clave )
*/

#include <iostream>
using namespace std;

int main(){
	cout<<"EJEMPLO DE PUNTEROS Y OPERADORES DE PUNTEROS\n"<<endl;
	int *ptrEntero; //un puntero a un entero
	int entero ;

	entero = 7;
	ptrEntero = &entero; //a el ptrEntero se le asigna la direccion de memoria de "entero"

	//ptrEntero apunta a entero.
	cout<<"La direccion de memoria del entero es  ----> "<<ptrEntero<<endl;
	cout<<"El valor a el cual apunta el puntero es   ----> "<<*ptrEntero<<endl; // el * es el operador de indireccion
	cout<<endl;
	cout<<"& y * Son inverso uno de otro!!\n"<<endl;

	cout<<"&*ptrEntero  "<<&*ptrEntero<<endl;
	cout<<"*&ptrEntero  "<<*&ptrEntero<<endl;



	return 0;
}