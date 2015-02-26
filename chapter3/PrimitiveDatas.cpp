/*Nerio Moran edo Merida 26 de febrero 2015 15:11
Introduccion a los tipos de datos primitivos de c++
Los tipos de datos primitivos más comunes de C++

Nombre   	      Descripción	Tamaño*	                           Rango de valores*
char	         Carácter o entero pequeño.	                  1byte	con signo: -128 to 127
                                                            sin signo: 0 a 255
short int
(short)	      Entero corto.	                              2bytes	con signo: -32768 a 32767
                                                            sin signo: 0 a 65535
                                                
int	Entero.	                                             4bytes	con signo: -2147483648 a 2147483647
                                                            sin signo: 0 a 4294967295
long int
(long)	      Entero largo.	4bytes	                     con signo: -2147483648 a 2147483647
                                                            sin signo: 0 a 4294967295
                                                
bool	         Puede tomar dos valores: verdadero ofalso.   	1byte	true o false

float	         Número de punto flotante.	                  4bytes	3.4e +/- 38 (7 digitos)

double	      De punto flotante de doble precisión.	      8bytes	1.7e +/- 308 (15 digitos)

long double	   Long de punto flotante de doble precisión.	8bytes	1.7e +/- 308 (15 digitos)

*/



#include <iostream>
#include <iomanip> //biblioteca que contiene prototipos de funcion para manipuladores de flujo que dan formato
                   //a flujos de datos
using namespace std;

int main(){


cout    << "Tipo de dato"  << setw( 22 ) << "Tamano(bytes)"              << endl  
   << "============"  << setw( 18 ) << "======"              << endl  
   << "char"          << setw( 23 ) << sizeof( char )        << endl
   << "short int"     << setw( 18 ) << sizeof( short int )   << endl
   << "int"           << setw( 24 ) << sizeof( int )         << endl
   << "long int"      << setw( 19 ) << sizeof( long )        << endl
   << "bool"          << setw( 23 ) << sizeof( bool )        << endl
   << "float"         << setw( 22 ) << sizeof( float )       << endl
   << "double"        << setw( 21 ) << sizeof( double )      << endl
   << "long double"   << setw( 16 ) << sizeof( long double ) << endl;
  




return 0;
}










