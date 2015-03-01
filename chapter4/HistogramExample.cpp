/*Nerio Moran edo Merida 1 de marzo 2015 16:50	
Introduccion a los arreglos ejemplo de un Histograma

*/

#include <iostream>
#include <iomanip>
using namespace std;


void MostrarHistograma(int);

int main(){

const int tamanoarreglo = 10;
cout<<"EJEMPLO DE ARRAYS HISTOGRAMA"<<endl;
cout<<endl; 
cout<<"Por favor introduzca el numero de elementos"<<endl;
int array[tamanoarreglo] = {1,25,4,6,23,45,12,7,10,31};
cout<< "Elemento" << setw(12) << "Valor" << setw(19) << "Histograma" <<endl;
	for(int i =0; i<10; ++i)
		{
			cout<< setw(5) << i << setw(12) << array[i] << setw(13);
			MostrarHistograma(array[i]);
		}

	return 0;
}

void MostrarHistograma(int elementos)
{
	
	for(int i=0; i<elementos; ++i)
	{
		cout<<"*";
	}
	cout<<endl;

}