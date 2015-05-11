/*Nerio Jose Moran Paez 23.556.790 19:14 27/03/15 
Ejemplo de un menu estructuras de control*/
#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,x;
	cout<<"seleccione una de las siguientes opciones en el menu"<<endl;
	cout<<" "<<endl;
	cout<<"1# -suma"<<endl;
	cout<<"2# -promedio"<<endl;
	cout<<"3# -producto"<<endl;
	cout<<"4# -el mayor"<<endl;
	cout<<"5# -elmayor"<<endl;
	cin>>x;
	if(x==1){
		cout<<"ingrese tres numeros diferentes entre si"<<endl;
		cin>>a>>b>>c;
		if(a!=b && a!=c){
		d=a+b+c;
		cout<<"la suma es  "<<d<<endl;
	}
	else
		cout<<"los numeros deben ser diferentes"<<endl;
	}
	if(x==2){
		cout<<"ingrese tres numeros diferentes entre si"<<endl;
		cin>>a>>b>>c;
	if(a!=b && a!=c){
		d=a+b+c/3;
		cout<<"el promedio es  "<<d<<endl;
	}
	else
		cout<<"los numeros deben ser diferentes"<<endl;
	}
	if(x==3){
		cout<<"ingrese tres numeros diferentes entre si"<<endl;
		cin>>a>>b>>c;
		if(a!=b && a!=c){
			d=a*b*c;
			cout<<"el producto es "<<endl;
		}
		else
			cout<<"los numeros deben ser iguales"<<endl;
		}
		if(x==4){
			cout<<"ingrese tres numeros diferentes entre si"<<endl;
			cin>>a>>b>>c;
			if(a!=b && a!=c){
				if(a<b && a<c)
					cout<<"el menor es "<<a<<endl;
				if(b<a && b<c)
					cout<<"el menor es "<<b<<endl;
				if(c<a && c<b)
					cout<<"el menor es "<<c<<endl;
			}
			else
				cout<<"los numeros son iguales"<<endl;
			}
		if(x==5){
			cout<<"ingrese tres numeros diferentes entre si"<<endl;
			cin>>a>>b>>c;
			if(a!=b && a!=c){
			if(a>b && a>c)
				cout<<"el mayot es "<<a<<endl;
			if(b>a && b>c)
				cout<<"el mayor es "<<b<<endl;
			if(c>a && c>b)
				cout<<"el mayor es "<<c<<endl;
		}
		else
			cout<<"los numeros son iguales"<<endl;
		}
		if(x!=1 && x!=2 && x!=3 && x!=4 && x!=5)
			cout<<"ha seleccionado una opcion que no esta en el menu"<<endl;
	
	return 0;
}

