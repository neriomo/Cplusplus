/*Nerio Moran edo Merida 9 de julio 2015 21:00	
Introduccion a Clases y POO

Una clase es un tipo de dato definido por el usuario que encapsula datos(atributos) y funciones (comportamiento),
los datos y las funciones se encuentran intimamente ligados entre si.

Booch: Una Clase es un conjunto de objetos que comparten una estructura y comportamiento comunes.

Para representar un sistema es necesario hacer el uso de Clases u Objetos, atributos y 
comportamiento de cada objeto y la especificacion de la manera que estos interactuan entre si 
para llevar a cabo las metas generales del sistema.

Def basica de una clase:
class NombreClase
{
	private:
	lista atributos;

	public:
	lista metodos;
	setters(a,b,c,d)
	getters()
	
	protected:
	lista atributos y metodos;
};

public, private y protected son especificadores de la clase.
El mecanismo principal para ocultar datos es ponerlos en una clase
y hacerlos privados!

ademas las clases poseen constructores y destructores que permiten definir 
correctamente un objeto cuando este es instanciado y destruirlo correctamente
cuando termina el programa.

Por lo general la mayoria de las clases tienen los metodods getters y setters que permiten
acceder y establecer o configurar los datos(atributos).  


Ejemplo clase tiempo

*/

#include <iostream>
#include <iomanip>
using namespace std;


//Definicion de la clase
class Tiempo 
{
public:										//metodos publicos
	void estableceHora(int, int, int);		//setter
	int obtenerMin() const;	//getter
	void imprimeUniversal();
	void imprimeEstandar();
	Tiempo();//Constructor
	~Tiempo();//Destructor
private:									//atributos privados
	int hora;
	int minuto;
	int segundo;
	
};



int main(){

Tiempo t; 				//objeto de tipo tiempo
Tiempo *ptrTiempo =  &t;	//puntero de tipo tiempo
cout<<"Hora de objeto creado"<<endl;
t.imprimeEstandar();		//acceso a los metodos desde el objeto
cout<<endl;
t.imprimeUniversal();
cout<<endl;
cout<<"hora del objeto modificado"<<endl;
(*ptrTiempo).estableceHora(3,10,12);	//acceso a los metodos mediante punteros
t.imprimeEstandar();
cout<<endl;
t.imprimeUniversal();

cout<<"\nLos minutos son : "<<t.obtenerMin()<<endl;;




	return 0;
}

Tiempo::Tiempo()
{
	hora = minuto = segundo = 0;
}

void Tiempo::estableceHora(int hora, int minuto, int segundo)
{
	this->hora = (hora >= 0 and hora < 24) ? hora: 0;
	this->minuto = (minuto >= 0 and minuto < 60) ? minuto: 0;
	this->segundo = (segundo >= 0 and segundo < 60) ? segundo: 0;
}

void Tiempo::imprimeUniversal()
{
	cout<<setfill('0')<<setw(2)<<hora<<":"<<setw(2)<<minuto<<":"<<setw(2)<<segundo;
}

void Tiempo::imprimeEstandar()
{
	cout<<((hora == 0 or hora == 12) ? 12: hora % 12)<<":"<<setfill('0')<<setw(2)<<minuto<<":"<<setw(2)<<segundo<<(hora < 12? 
	" AM":" PM");
}


int Tiempo::obtenerMin()const
{
	return minuto;
}



Tiempo::~Tiempo(){
	hora = 0;
	minuto =0;
	segundo =0;
}

