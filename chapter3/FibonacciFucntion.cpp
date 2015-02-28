/*Nerio Moran edo Merida 27 de febrero 2015 18:20	}	
Introduccion a la  Recursividad Ejemplo "Serie de Finonacci"

La serie de Fibonacci empieza asi 0,1,1,2,3,4,5,8,13,21...
Comienza con numero 0 y 1 , y tiene la propiedad de que cada numero de fibonacci es la suma de los dos numeros 
previos a Fibonnaci. La serie ocurre de manera natural y se representa en forma de espiral, de hecho estos numeros
se encuentran en la naturaleza y representan la proporcion con que creecen o se dristribuyen las plantas, animales,
las raices de los arboles (entre otros) tambien son conocidos como los numeros auricos.

La serie de Fibonacci se puede definir de la siguiente manera
fibonacci(0);
fibonacci(1);
fibonacci(n) =  fibonacci(n-1)+ fibonacci(n-2)


*/ 

#include <iostream>
using namespace std;

unsigned long Fibonacci(unsigned long); // prototipo de funcion

int main(){
unsigned long numero;
unsigned long resultado;
cout<<"EJEMPLO SERIE DE FIBONACCI"<<endl;

cout<<"introduzca un numero entero ";
cin>>numero;

resultado = Fibonacci(numero);
cout<<"Fibonacci("<<numero<<") es: "<<resultado<<endl;




	return 0;
}

// definicion de la funcion

unsigned long Fibonacci(unsigned long numero)
{	
	//caso base 
	if(numero == 0 or numero == 1)
		{
			return numero;
		}
		else
			{
				return Fibonacci(numero - 1) + Fibonacci(numero -2);
			}
						
}



