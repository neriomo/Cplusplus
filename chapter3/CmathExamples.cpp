/*Nerio Moran edo Merida 26 de febrero 2015 13:23
Introduccion a la biblioteca de funciones matematicas

La biblioteca de funciones matematicas <cmath> permite al programador realizar ciertos calculos matematicos comunes.
Por lo general las funciones se llaman escribiendo el nombre de la funcion, seguido por un parentesis derecho()--> sumar()

*/


#include <iostream>
#include <cmath>


int main(){
using namespace std;
double numero;
cout<<"EJEMPLOS DE ALGUNAS FUNCIONES MATEMATICAS IMPORTANTES"<<endl;
cout<<"por favor ingrese un numero real \"x\" "<<endl;
cin>>numero;

cout<<"la funcion ceil(x) redondea numero al entero mas pequeño no menor que x  --> ";
cout<<ceil(numero)<<endl;
cout<<endl;

cout<<"La funcion cos(x) es el coseno trigonometrico de x en radianes --> ";
cout<<cos(numero)<<endl;
cout<<endl;

cout<<"La funcion sin(x) es el seno trigonometrico de x en radianes --> ";
cout<<sin(numero)<<endl;
cout<<endl;

cout<<"La funcion tan(x) es el tangente trigonometrico de x en radianes --> ";
cout<<tan(numero)<<endl;
cout<<endl;

cout<<"La funcion exp(x) es la funcion exponencia exp[x] --> ";
cout<<exp(numero)<<endl;
cout<<endl;

cout<<"La funcion fabs(x) es la funcion valor absoluto de x |x| --> ";
cout<<fabs(numero)<<endl;
cout<<endl;

cout<<"La funcion floor(x) rendondea x al entero mas grande no mayor que x --> ";
cout<<floor(numero)<<endl;
cout<<endl;


cout<<"La funcion log(x) es el logaritmo natural de x (base e)  --> ";
cout<<log(numero)<<endl;
cout<<endl;


cout<<"La funcion log10(x) es el logaritmo natural de x (base 10)  --> ";
cout<<log10(numero)<<endl;
cout<<endl;


cout<<"La funcion sqrt(x) es la raiz cuadrada de x  --> ";
cout<<log(numero)<<endl;
cout<<endl;

cout<<"La funcion pow(x,y) es la funcion potencia x elevado a la potencia de y  x^(y)    y = 2 ";
cout<<pow(numero, int(2) )<<endl;
cout<<endl;

cout<<"La funcion fmod(x,y) es el residuo como un numero de punto flotante x/y   y = 2 ";
cout<<fmod(numero, int(2) )<<endl;
cout<<endl;





return 0;
}

