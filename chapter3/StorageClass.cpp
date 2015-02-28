/*Nerio Moran edo Merida 27 de febrero 2015 15:58	}	
Introduccion a las Clases para almacenamiento y Reglas de alcance

Las caracteristicas comunes de la de definicion de la una variable son:
tipo identificador tamaño y valor. Existe variables que son definidas por el programador(mas adelante)
Cada identificador de un programa tiene varios atributos, incluyendo clases para almacenamiento, alcance y vinculacion.

C++ proporciona cinco especificadores de clase para almacenamiento: auto, register, extern, mutable y static.
El especificador de clase para almacenamieto, ayuda a determinar su clase para almacenamieto y su vinculacion.

La clase para almacenamiento correspondiente a un identificador, determina el periodo durante el cual el identificador
existe en memoria. Algunos identificadores existen de manera breve, algunos se crean y se destruyen de manera repetida
y otros existen durante toda la ejecucion de un programa.
Las clases para almacenamiento son: static y automatic


Las palabras "auto" y "register" se utilizan para declarar variables de clase de almacenamiento automatico.
Dichas variables se crean cuando la ejecucion del programa entra a un bloque en el que se definen
, estan existiran mientras el bloque se encuentre activo y se destruiran cuando el programa sale del bloque.

Solo las variables locales de una funcion puede ser clases de almacenamiento automatico( son asi por defecto ).

Si hacemos uso de una variable muchas veces podemos anexar antes de declarar la variable la clase de almacenamiento
"register" asi el compilador la mantendra dentro de un registro de alta velocidad en lugar de hacerlo en memoria.

Las variables locales declaradas mediante la clase de almacenamieto static solo se reconocen en la funcion donde estan definidas
pero a diferencia de las variables definidas bajo la clase de almacenamieto auto, las variables locales estaticas 
retienen sus valores cuando la funcion regresa a quien la llama. La siguiente vez que se llama la funcion, las variables estaticas
tendran los valores de la ultima ejecucion que se realizo. Todas las variables estaticas que sean numericas se inicializan en 0.

El alcance  de un identificador es el lugar en donde se puede hacer referencia a él dentro de un programa.

La vinculacion de un identificador determina, dentro de un programa de multiples archivos fuente, si el identificador
es conocido en al archivo fuente activo o en cualquier archivo fuente con las declaracion apropiadas.


*/

#include <iostream>
using namespace std;

void usolocal();		//prototipos de funciones con Alcanze de archivo
void usoStaticLocal();
void usoGlobal();


int x = 1; // variable global (con alcance de archivo)

int main(){

int x = 5; // variable local de main

cout<< " la x local en el alcance externo de main es "<<x<<endl;

	{ //inicia nuevo alzance
		int x = 1000;
		cout<<" la variable x dentro del alcance interior del main es "<<x<<endl;

	}//finaliza nuevo alcanze

cout<< " la x local en el alcance externo de main es "<<x<<endl;
cout<<endl;
usolocal();
cout<<endl;
usoStaticLocal();
cout<<endl;
usoGlobal();
cout<<endl;
usolocal();
cout<<endl;
usoStaticLocal();
cout<<endl;
usoGlobal();
cout<<endl;

cout<< " la x local de main es "<< x <<endl;

return 0;

}

//definimos el cuerpo de cada funcion

void usolocal(){
	int x = 100;
	cout<<" la x local es "<< x << " al entrar al usolocal"<<endl;

	x++;
	
	cout<< " la x local es "<< x <<" al salir del uso local"<<endl;


}

void usoStaticLocal(){
	static int x = 25;

	cout<<" la x estatica local es "<<x<<" al entrar a usoStaticLocal "<<endl;
	x++;

	cout<<" la x estatica local es "<<x<<" al salir de usoStaticLocal "<<endl;

}

void usoGlobal(){
	cout<<" la variable global es "<<x<<" al entrar a usoGlobal"<<endl;

	x *=10;

	cout<<" la variable global es "<<x<<" al salir de usoGlobal"<<endl;

}