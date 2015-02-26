/*Nerio Moran edo Merida 26 de febrero 2015 13:23
Introduccion a las funciones definidas por el programador

Las funciones permiten al programador dividir un programa en modulos. todas las variables definidas dentro de la funcion
son varibales locales; estas se conocen solo en la funcion en la que se definen. Mayormente poseen una lista de paramentros
que proporpocionan los medios para comunicar informacion entre funciones.

En los programas que contienen muchas funciones, el main se debe implementar como un grupo de llamadas a funciones
que realizan el grueso del trabajo del programa.

Cada funcion se debe limitar a realizar un funcion simple,sencilla y bien definida, y el nombre de la funcion debe expresar de manera
efectiva dicha tarea. Esto promueve la reutilizacion de software 
*/

#include <iostream>
#include <cmath>
using namespace std;
                                 //prototipo de funcion
double Cuadrado(double);         //tipo dato retorno identificador( paramentros );
double Raiz(double);
int Redondeo(double);

int main(){
double numero;
cout<<"Introduzca un numero x real\n";
cin>>numero;
cout<<"El cuadrado es "<<Cuadrado(numero)<<endl;
cout<<"La raiz cuadrada es "<<Raiz(numero)<<endl;
cout<<"El redondeo es "<<Redondeo(numero)<<endl;






return 0;
}
//definicion de las funciones

double Cuadrado( double numero)        //se define el cuerpo de la funciones
{
   return numero * numero;             //return envia el dato 
}

double Raiz( double numero)
{
   return sqrt(numero);
}

int Redondeo(double numero)
{
   return ceil(numero);
}




















