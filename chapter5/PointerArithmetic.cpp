/*Nerio Moran edo Merida 28 de julio 2015 20:00	
Expresiones de con apuntadores y aritmetica

Los apuntadores son operandos validos dentro de expresiones artiméticas, expresiones de asignacion
y expresiones de comparacion. Existen operadores que pueden tener apuntadores como operandos y 
ademas tienen una forma especifica de ser usados.

Un apuntador se puede 
-incrementar(++)
-decrementar(--)
-sumar un entero (+ o +=)
-restar un entero (- o -=)

Los arreglos y los apuntadores se relacionan fuertemente en C++ y se pueden utilizar casi de modo
intercambiable. Un arreglo se puede representar como un apuntador constante, pero ademas podemos
hacer operaciones de subindices con punteros:
int b[5];

int *ptrB = b;    esto es equivalente a  ptrB = &b[0];

para hacer referencia a los elementos de b podemos usar la expresion desplazamiento para apuntadores:
*(b+1) = b[1]		o  (ptrB +1) 
*(b+2) = b[2]		o  (ptrB +2)
*(b+3) = b[3]		o  (ptrB +3)
.						.
.						.
.						.
*(b+(n)) = b[n]		o *(ptrB +n)

*/

#include <iostream>
using namespace std;

int main(){

int arreglo[5] = {10,20,30,40,50};
int *ptrE = arreglo;

cout<<"El arreglo impreso mediante:\n"<<endl;
cout<<"notacion de subindices de arreglo"<<endl;

for(int i = 0; i< 5; i++)
	{
		cout<<"arreglo["<<i<<"]"<<" = "<<arreglo[i]<<endl;
	}

cout<<endl;
cout<<"notacion apuntador/desplazamiento usando el arrelo como un apuntador"<<endl;

for(int i = 0; i< 5; i++)
	{
		cout<<"*(arreglo +"<<i<<")"<<" = "<<*(arreglo+i)<<endl;
	}



cout<<"notacion subindices de un puntero que apunta al arreglo"<<endl;

for(int i = 0; i< 5; i++)
	{
		cout<<"ptrE["<<i<<"]"<<" = "<<ptrE[i]<<endl;
	}



cout<<"notacion apuntador/desplazamiento"<<endl;

for(int i = 0; i< 5; i++)
	{
		cout<<"*(ptrE +"<<i<<")"<<" = "<<*(ptrE+i)<<endl;
	}

	return 0;
}


