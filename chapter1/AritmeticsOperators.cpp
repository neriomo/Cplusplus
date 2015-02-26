/*Nerio Moran edo Merida 25 de febrero 2015 20:18
Introduccion a la Aritmetica y operadores aritmeticos y tipo de datos primitivos de c++
*/

#include <iostream>
using namespace std;

int main(){
int num1,num2;  //int es un tipo de dato primitivo que almacena un numero entero (tipos de datos primitivos sera explicada en breve) 
cout<<"OPERACIONES ARITMETICAS Y OPERADORES EN C++"<<endl;
cout<<"Los operadores aritmeticos son: +, -, *, /, %"<<endl;

cout<<"Ejemplo:\nPor favor escriba el numero1"<<endl;
cin>>num1;
cout<<"Por favor escriba el numero2"<<endl;
cin>>num2;                 //el operador << es conocido como extrator de flujo (operador extraccion de flujo)

cout<<"La suma es: "<< num1 + num2 <<endl;
cout<<"La resta es: "<< num1 - num2 <<endl;
cout<<"la multiplicacion es: "<< num1 * num2 <<endl;
cout<<"la divicion es: "<< num1 / num2 <<endl;
cout<<"El modulo (residuo de divicion entera) es: "<< num1 % num2 <<endl;


return 0;

}

//C++ aplica los operadores en expresiones aritmeticas en una secuencia determinada por las reglas de precedencia
//de operadores que generalmente son las mismas que las del algebra

/*
1) () parentesis
2) *, / , % 
3) + o -
*/
