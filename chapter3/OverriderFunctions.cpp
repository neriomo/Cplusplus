/*Nerio Moran edo Merida 28 de febrero 2015 21:19	}	
Introduccion a las sobrecarga de funciones (Overrider Functions)

C++ permite definir distinitas funciones con el mismo nombre, mientras estas funciones tengas diferentes conjuntos de 
parametros ( al menos en tipo u orden ). Esta capacidad es conocida como sobrecarga de funciones. La sobrecarga de funciones
se usa generalmente para definir dos funciones con el mismo nombre que realizan tareas similares pero con diferentes tipos de 
datos.
*/


#include <iostream>
using namespace std;

int Cuadrado(int );		// prototipos de funcion
double Cuadrado(double );


int main(){
cout<<"EJEMPLO DE SOBRECARGA DE FUNCIONES"<<endl;
cout<<"el cuadrado del entero"<<int(5)<<"es "<<Cuadrado(5)<<endl;
cout<<"el cuadrado del flotante"<<float(5.35)<<"es "<<Cuadrado(5.25)<<endl;




	return 0;
}

//Definicion de las funciones

int Cuadrado(int x)
{
	return x * x;
}

double Cuadrado(double y)
{
	return y * y;
}































