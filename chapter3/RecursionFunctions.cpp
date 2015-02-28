/*Nerio Moran edo Merida 27 de febrero 2015 18:20	}	
Introduccion a la  Recursividad Ejemplo Sencillo ( Factorial)

En general los programas estan estructurados como funciones que se llaman unas a otras de manera diciplinada y jerarquica.
Para algunos problemas, es util tener funciones que se invoquen asi mismas. Una funcion Recursiva es una funcion que se llama
asi si misma de manera directa o indirecta (a traves de otra funcion).

Primero cosideraremos la Recursividad de manera conceptual, luego examinaremos programas que contienen funciones 
recursivas. Los metodos para solucionar problemas recursivos tienen un conjunto de elementos en comun.
Las funciones que usan Recursividad usan un caso base (punto donde la condicion es acertada y retorna el dato)
En los casos mas complicados el problema se divide en dos casos conceptuales:

La parte que la funcion sabe hacer-> retornar (terminar recursion)

La parter que la funcion no sabe hacer -> Esta parte debe replantear el problema original (llamar de nuevo a la funcion)
esta parte se le denomina paso recursivo pero asegurandonos de que al entrar en la funcion el problema se reduzca y
pueda entrar al caso base para terminar la recursion 

*/

#include <iostream>
#include <iomanip> 
using namespace std;

long long Factorial(int); // prototipo de funcion

int main(){
cout<<"EJEMPLO DE RECURSIVIDAD FUNCION FACTORIAL"<<endl;

for(int i=0; i< 20; i++)
	{	
		cout<<i<<setw(1)<<"!"<<setw(2)<<"="<<setw(3)<<" "<<Factorial(i)<<endl;
	}

	return 0;
}


//definicion de la funcion

long long Factorial(int value)
{
	if(value == 1 or value == 0 )		//Caso base donde termina la recursion 
	{
		return 1;
	}

	return value * Factorial(value - 1);	//Paso Recursivo
}






