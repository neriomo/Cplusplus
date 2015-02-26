/*Nerio Moran edo Merida 25 de febrero 2015 23:45
Introduccion a los operadores logicos and, or y not y a el tipo de dato booleano

C++ proporciona operadores logicos que se utilizan para formar condiciones mas complejas mediante combinacion de condiciones
simples. Los operadores logicos son:
&& -> (AND logico)
// -> (OR logico) 
!  -> (NOT logico)

Los tipos de datos booleanos son aquellos que solo guardan como informacion un 1 o 0 (true/n false)


*/

#include <iostream>
using namespace std;

int main(){
bool valor1,valor2; // tipo de dato booleano
valor1 = true;
valor2 = false;

cout<<"Tabla de verdad del operador logico &&(AND logico)"<<endl;
cout<<"x     y     x&&y "<<endl;
cout<<valor1<<"     "<<valor2<<"      "<<bool(valor1 and valor2)<<endl;
cout<<valor2<<"     "<<valor1<<"      "<<bool(valor2 and valor1)<<endl;
cout<<valor1<<"     "<<valor1<<"      "<<bool(valor1 and valor1)<<endl;
cout<<valor2<<"     "<<valor2<<"      "<<bool(valor2 and valor2)<<endl;

cout<<endl;


cout<<"Tabla de verdad del operador logico ||(OR logico)"<<endl;
cout<<"x     y     x||y "<<endl;
cout<<valor1<<"     "<<valor2<<"      "<<bool(valor1 or valor2)<<endl;
cout<<valor2<<"     "<<valor1<<"      "<<bool(valor2 or valor1)<<endl;
cout<<valor1<<"     "<<valor1<<"      "<<bool(valor1 or valor1)<<endl;
cout<<valor2<<"     "<<valor2<<"      "<<bool(valor2 or valor2)<<endl;


cout<<"Tabla de verdad del operador logico !(NOT logico)"<<endl;
cout<<"x    !x "<<endl;
cout<<valor1<<"     "<<bool(!valor1)<<endl;
cout<<valor2<<"     "<<bool(!valor2)<<endl;





return 0;
}


