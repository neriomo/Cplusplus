/*Nerio Moran edo Merida 28 de febrero 2015 21:19	}	
Introduccion al operador unario de resolucion de alcance (::)

Es posible declarar variables locales y globales con el mismo nombre. C++ proporciona el 
"operador unario de resolucion de alcance"(::) para acceder a una variable global, cuando una variable
local con el mismo nombre se encuentra en el mismo alcance. 

Solo funciona para acceder a variables Globales !
El operador unario de resolucion de alcance tambien es usado en las (Clases)

*/

#include <iostream>
#include <iomanip>
using namespace std;

//variable global
const double e =  2.718281828459045235360287471352;

int main(){
cout<<"EJEMPLO DE OPERADOR UNARIO DE RESOLUCION DE ALCANCE"<<endl;
// declaramos una variable local
const float e = static_cast< float > (::e); // el operador static_cast<tipo> (expresion) realiza una conversión de tipo 
														 //durante la compilación del programa
cout<< setprecision(20)<<" valor de la variable local float e "<< e <<endl;
cout<< setprecision(20)<<"valor de la variable local double e "<< ::e <<endl;





	return 0;
}






































