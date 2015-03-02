/*Nerio Moran edo Merida 1 de marzo 2015 16:50	
Introduccion a los arreglos de caracteres para almacenr y manipular cadenas

Los arreglos basados en punteros de C, pueden ser de cualquier tipo como por ejemplo char. C++ es un lenguaje extendido
por lo que es comun que podamos crear arreglos de tipo de datos definidos por el usuario.(clases o estructuras).

La capacidad mas comun que hasta ahora hemos trabajado para la manipulacion de cadenas de caracteres es
cout<<"hello world"<<endl;  "hello world" en realidad es una cadena de caracteres.

*Un arreglo de de caracteres se puede inicializar mediante una literal de cadena. por ejemplo:

char cadena1[] = "primero" 	

inicializa los elementos del arreglo cadena1 mediante los caracteres individuales de la literal de cadena "primero"
El tamaño lo de termina el numero de caracteres de la cadena "primero"

Hay que tener en cuenta que la cadena "primero" contiene 7 caracteres mas el caracter nulo "\0" 
Todas las cadenas terminan con el caracter nulo "\0", por eso un arreglo de caracteres debe declararse con el tamaño suficiente 
como para almacenar la cadena+ caracter nulo.

*Un arreglo de caracteres tambien se puede inicializar mediante caracteres constantes en una lista de inicializacion.

char cadena1[] = {´p´, ´r´, ´i´, m´, ´e´, ´r´,´o´, ´\0´ }; si no proporcionamos el caracter nulo no seria una cadena sino
																				un simple arreglo de caracteres.

Debido a que un arreglo es una cadena podemos acceder a los caracteres individuales de una cadena de manera directa mediante
la notacion de sub-indices en los arreglos.ejm:

cadena1[0] es ´p´
cadena1[7] es ´\0´

*Una cadena se puede introducir a un arreglo de caracteres mediante el terminal haciendo uso de cin>>. Ejm:

char cadena1[20];		//puede almacenar 19 caracteres mas el caracter nulo
cin>>cadena1;			// Lee hasta encontrar el primer espacio, es independiente del tamaño (lee todo) hay que prevenirlo.
									
*Un arreglo de caracteres que represente a una cadena que termina con el caracter nulo puede mostrar mediante un cout<<. ejem
cout<< cadena1 <<endl;

*/

#include <iostream>

using namespace std;

int main(){
cout<<"EJEMPLO DE USO DE ARREGLO DE CARACTERES PARA REPRESENTAR CADENAS DE CARACRES"<<endl;

char cadena1[20];  //declaracion de arreglo de caracteres sin inicializacion
char cadena2[] = "literal de cadena";		//declaracion y declaracion mediante literales de cadena

cout<<"introduzca la cadena1 \"Hola amigos\" "<<endl;
cin>>cadena1;						//escritura de una cadena directamente desde el terminal (solo se lee amigos) 

cout<<"la cadena1 es "<<cadena1<<"\nla cadena2 es "<<cadena2<<endl;


for (int i = 0; '\0' != cadena1[i]; ++i)
{
	cout<<cadena1[i]<<' ';			//elementos de una cadena separados por un espacio
}
cout<<endl;


	return 0;
}











