/*Nerio Moran edo Merida 28 de febrero 2015 15:17	}	
Introduccion a la referencias  y a los parametros por referencias y por valor

Existen dos maneras de pasar argumentos a una funcion, estas son paso por valor y paso por referencias.

Cuando un argumento se pasa por valor, se hace una copia del argumento y pasa la funcion. Los cambios que se
hagan a esta funcion no afectan el valor original de la variable en la llamada. Esto previene los efectos colaterales
accidentales que dificultan, en gran medida, el desarrollo de sistemas de software adeacuados y bien hechos.

Si el argumento(dato) que se pasa a la funcion por valor es muy grande genera un costo considerable de tiempo y memoria.


El paso por referencia es bueno por razones de rendimiento, debido a que puede eliminar el consumo excesivo de copias
grande de volumenes de datos. Pero puede debilitar la seguridad del programa ya que la funcion invocada puede corronper
los datos de la de la funcion que invoca.

int & contador ;   se le "Contador hace referencia a un entero"

Ejemplo de una funcion que recibe parametros por referencia:
int Referencia(int & a);
void Referencia(char& a);

*/ 

#include <iostream>
using namespace std;

	//prototipos de funcion
int CuadradoPorValor(int); //funcion con parametros por valor	
void CuadradoPorReferencia(int &);	//funcion de parametros por referencia


int main(){
cout<<"EJEMPLO DE PARAMETROS POR VALOR Y POR REFERENCIA"<<endl;
int x=2;
int z=4;

cout<<"Paso de parametro por valor"<<endl;
cout<<endl;
cout<< "x = "<<x<<" antes de entrar a CuadradoPorValor"<<endl;
cout<<"valor devuelto por CuadradoPorValor: "<<CuadradoPorValor(x)<<endl;
cout<<endl;
cout<<"Paso de parametros por referencia"<<endl;
cout<<"z ="<<z<<" antes de entrar a CuadradoPorReferenca "<<endl;
cout<<"valor devuelto por CuadradoPorReferenca: ";
CuadradoPorReferencia(z);
cout<<z<<endl;
cout<<endl;
cout<<"X es "<<x<<endl;
cout<<"Z es "<<z<<endl;


	return 0;
}
// Definicion de las funciones

int CuadradoPorValor(int numero)
{
	return numero*numero;		// retorna un entero que es el cuadrado del parametro que recibe por valor
}

void CuadradoPorReferencia(int & numero)  // Para pasar objetos grandes, es utilil usar una referncia constante (const int & numero)
{											// para simular un paso por valor, y para evitar copias muy grandes

  numero *= numero;			// recibe un por parametro por referencia y no retorna nada solo modifica la variable
}

// nota: Los apuntadores permiten una manera alternativa de pasar parametros por referencia, en la que el estilo de llamada indica 
//claramente el paso por referencia( y el potencial de modificar la funcion que llama).

// Por razones de Claridad y rendimiento muchos programadores de C++ prefieren:
// argumentos modificables se pasen a las funciones mediante el uso de apuntadores,
// argumentos pequeños y no modificables se pasen a las funciones mediante el paso por valor
//argumentos no modificables se pasen a las funciones mediante uso de referencias a constantes.



