/*Nerio Moran edo Merida 25 de Febrero 2015 20:48
Introduccion a los operadores Algebraicos de igualdad o relacion
Estructura de Control if 
*/

#include <iostream>
using namespace std;


int main(){
int num1,num2;
cout<<"OPERADORES ALGEBRAICOS DE IGUALDAD Y DE RELACION"<<endl;
cout<<"los operadores algebraicos de relacion son: > , >=, <, <= , "<<endl;
cout<<"los operadores algebraicos de igualdad son: =, !=\n";
cout<<"Ejemplo:\nPor favor escriba el numero1"<<endl;
cin>>num1;
cout<<"Por favor escriba el numero2"<<endl;
cin>>num2;                 

if(num1 > num2)      // estructura de control if trabaja con los operadores de relacion y igualdad para ejecutar un cuerpo
   {
    cout<<"el mayor es el numero1"<<endl;    //el cuerpo de se denomina a lo que se encierra en parentesis
   }
   
if(num1 < num2)
   {
   cout<<"el mayor es el numero2"<<endl;
   }
   
if(num1 >= num2)
   {
   cout<<"El numero1 es mayor o igual al numero2"<<endl;
   }
   
if(num1 <= num2)
   {
   cout<<"El numero1 es menor o igual al numero2"<<endl;
   }
   
if(num1 == num2)  //no se debe confundir el operador de relacion == con el de asignacion =
   {
   cout<<"ambos numeros son iguales"<<endl;
   }
   
if(num1 != num2)
   {
   cout<<"ambos numeros son diferentes"<<endl;
   }




return 0;
}



