/*Nerio Moran edo Merida 29 de julio 2015 21:00	
Introduccion a Clases y POO

La modularizacion de un programa utiliza la nocion de tipo de Dato Abstracto (TDA) siempre
que sea posible. Si el lenguaje de programacion soporta los tipos que desea el usuario y el
conjunto de operaciones sobre cada tipo, se obtiene un nuevo tipo de dato llamado TDA.

Una clase es un tipo de dato que encapsula datos(atributos) y funciones (comportamiento),
los datos y las funciones se encuentran intimamente ligados entre si.

Para representar un sistema es necesario hacer el uso de Clases u Objetos, atributos y 
comportamiento de cada objeto y la especificacion de la manera que estos interactuan entre si 
para llevar a cabo las metas generales del sistema.

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
	void estableceHora(int, int, int);
	int obtenerMin();
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


int Tiempo::obtenerMin()
{
	return minuto;
}



Tiempo::~Tiempo(){
	hora = 0;
	minuto =0;
	segundo =0;
}

