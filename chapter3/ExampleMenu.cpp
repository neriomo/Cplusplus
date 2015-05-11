/*Nerio Moran 23.556.790; PrI sección 1;*/
// tres numeros indicando la suma, promedio, producto, mayor y menor.
//Con menú!
#include<iostream> 
using namespace std;

enum Opciones{
	Suma =1,
	Promedio,
	Producto,
	Menor,
	Mayor,
	Salir
};
int suma(int a, int b, int c);
int promedio(int a, int b, int c);
int producto(int a, int b, int c);
int menor(int a, int b, int c);
int mayor(int a, int b, int c);

int main(){ 				//Funcion Principal
	int a,b,c,r,Opciones; 		//declaracion de variables

	cout<<"Introduzca tres numeros enteros diferentes: "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
			if(a>0 && b>0 && c>0 && a!= b && b!=c && c!=a ){
				do{
	cout<<"Hola, ¿Qué operación desea realizar hoy?"<<endl;
	cout<<"Suma		1"<<endl;
	cout<<"Promedio	2"<<endl;
	cout<<"Producto	3"<<endl;
	cout<<"Menor		4"<<endl;
	cout<<"Mayor		5"<<endl;
	cout<<"Salir		6"<<endl;
	cin>>Opciones;
	cout<<endl;
	
					switch(Opciones){
						case Suma:
							suma(a,b,c);
							break;

						case Promedio:
							promedio(a,b,c);
							break;

						case Producto:
							producto(a,b,c);
							break;

						case Menor:
							menor(a,b,c);
							break;
						case Mayor:
							mayor(a,b,c);
							break;
						case Salir:
							cout<<"lindo dia"<<endl;
							break;
						default:
							cout<<"error"<<endl;
								}
}while(Opciones!= Salir);

}
	else
		cout<<" Los tres Numeros deben ser mayores a cero y diferentes entre si"<<endl;
	return 0;
}


int suma(int a, int b, int c)
{
	int suma;
	suma = a+ b + c;
	cout<<"La Suma es "<<suma<<endl;
	cout<<endl;
}

int promedio(int a, int b, int c)
{
	int pr;
	pr=(a*b*c)/3;
	cout<<"El Promedio es "<<pr<<endl;
	cout<<endl;
}

int producto(int a, int b, int c)
{
	int p;	
	p=a*b*c;
	cout<<"El Producto es "<<p<<endl;
	cout<<endl;
}

int menor(int a, int b, int c)
{
	if(a<b && a<c)
		cout<<"El Menor es "<<a<<endl;
	else
	if (b<a && b<c)
		cout<<"El Menor es "<<b<<endl;
	else
	if (c<b && c<a)
		cout<<"El Menor es "<<c<<endl;
		cout<<endl;
}

int mayor(int a, int b, int c){
	if(a>b && a>c)
		cout<<"El Mayor es "<<a<<endl;
	else
	if (b>a && b>c)
		cout<<"El Mayor es "<<b<<endl;
	else
	if (c>b && c>a)
		cout<<"El Mayor es "<<c<<endl;
	cout<<endl;
}
