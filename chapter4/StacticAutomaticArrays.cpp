/*Nerio Moran edo Merida 1 de marzo 2015 16:50	
Introduccion a los arreglos Estaticos locales Y Automaticos locales
Recordemos que el especificador de la clase de almacenamiento static nos permite declarar una variable que exista
durante toda la duracion de un programa pero solamente es visible en el cuerpo de la funcion donde se declara.

Podemos aplicar el especificador estatic a una declaracion local de un arreglo de manera que el arreglo no se cree
y se inicialize cada vez que se llame a la funcion donde se declara y no se destruya cada vez que se termine la funcion
en el programa. Esto mejora el rendimiento cada vez que se utilizan arreglos grandes.

*//* code */

#include <iostream>
using namespace std;

void iniEstaticArreglo(void);
void iniAutomaicArreglo(void);

int main(){
cout<<"EJEMPLO DE USO DE ARREGLOS AUTOMATICOS Y ESTATICOS"<<endl;
cout<<endl;
cout<<"Primera llamada a cada funcion "<<endl;
iniEstaticArreglo();
cout<<endl;
cout<<endl;
iniAutomaicArreglo();
cout<<endl;
cout<<endl;
cout<<"Segunda llamada a cada funcion "<<endl;
iniEstaticArreglo();
cout<<endl;
cout<<endl;
iniAutomaicArreglo();
cout<<endl;


	return 0;
}


//defincion de las funciones

void iniEstaticArreglo(void) {
	//inicialmente se inicializa en 0 el arreglo es decir {0,0,0}
	static int arreglo1[3];

	cout<<"los valores al entrar a iniEstaticArreglo:";
	for (int i = 0; i < 3; ++i)
		{
			cout<<arreglo1[i]<<", ";
		}

	cout<<"\nlos valores al salir de iniEstaticArreglo:";
	for (int i = 0; i < 3; ++i)
	{
		arreglo1[i]+= 100;
		cout<<arreglo1[i]<<", ";
	}

}

void iniAutomaicArreglo(void) {
	//se declara y se inicializa con una lista inicializadora
	int arreglo2[3] = {100,200,300};

	cout<<"los valores al entrar a iniEstaticArreglo:";
	for (int i = 0; i < 3; ++i)
		{
			cout<<arreglo2[i]<<", ";			//se muestran lo elementos al entrar
		}

	cout<<"\nlos valores al salir de iniEstaticArreglo:";
	for (int i = 0; i < 3; ++i)
	{
		arreglo2[i]*= 2;
		cout<<arreglo2[i]<<", ";
	}
}


