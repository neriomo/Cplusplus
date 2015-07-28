/*Nerio Moran edo Merida 28 de julio 2015 10:00	
Llamada a funciones por referencia

Existen cuatro formas de pasar un apuntador a una funcion:

-nonconstant pointer to noncon­stant data: El mayor acceso se logra mediante un apuntador no constante 
a un dato no constante. Podemos (modificar datos) y (modificar punteros)

-nonconstant pointer to constant data: Un apuntador no constante a un dato constante es un apuntador
que se puede modificar para que apunte a cualquier elemento de dato del tipo apropiado, pero el dato
que se apunta no puede ser modificado

-constant pointer to constant data: Un apuntador constante a un dato no constante es un apuntador
que apunta siempre a la misma direccion de memoria;el dato a el cual apunta se puede modificar a través
del apuntador.


-constant pointer to non-constant data: El menor privigilegio se concede mediante un apuntador no
constante a un dato no constante. El apuntador siempre apunta a la misma localidad y el dato no 
puede ser modificado.


*/

#include <iostream>
#include <cctype>			// libreria estandar manejor de caracteres
using namespace std;

void convierteMayuscula(char *);
void imprimeCaracteres(const char *);
void intercambiaCaracter(char * const, char * const);

int main(){

char cad[] =  "Lo importante es la salud";
char cad2[] = "la salud no es importante";

char *cadena2 = cad; //cadena2 apunta a cad(a la direccion del primer elemento), cadena2 no es constante
cout<<"nuestra cadena es: ";
imprimeCaracteres(cadena2);		
cout<<endl;
convierteMayuscula(cadena2); 
cout<<"nuestra cadena moficada: ";
imprimeCaracteres(cadena2);
cout<<endl;
cout<<endl;
cout<<endl;

cadena2 = cad2; // cadena2 es un puntero y ahora apunta a cad2, cadena2 no es constante
cout<<"ahora nuestra cadena ahora apunta a la nueva cadena: ";
imprimeCaracteres(cadena2);
cout<<endl;

cout<<"intercambiando los primeros 2 caracteres de ambas cadenas: "<<endl;
intercambiaCaracter(&cad[0], &cad2[0]);
intercambiaCaracter(&cad[1], &cad2[1]);
imprimeCaracteres(cad);
cout<<endl;
imprimeCaracteres(cad2);
cout<<endl;



	return 0;
}


void convierteMayuscula(char *Ptrcadena)		// Mayor privilegio dato no constante y puntero no constante
{
	while(*Ptrcadena != '\0')
		{
			if(islower(*Ptrcadena)) 	//islower verifica que sea una minuscula
				{
					*Ptrcadena = toupper(*Ptrcadena);	//Modificamos cada elemento del dato a el cual apunta nuestro puntero
				}

			Ptrcadena ++;

		}

}


void imprimeCaracteres(const char *Ptrcadena) //el dato al cual se apunta es constante y puntero es no constante
{
	while (*Ptrcadena != '\0')
		{
			cout<<*Ptrcadena;		//No podemos modificar solo acceder
			Ptrcadena++;
		}
}

void intercambiaCaracter(char * const Ptrcadena1, char * const Ptrcadena2)		//el puntero es constante y el dato no-constante
{
	char mantiene = *Ptrcadena1;		//solo podemos modificar el dato al cual apunta
	*Ptrcadena1 = *Ptrcadena2;
	*Ptrcadena2 = mantiene;

}