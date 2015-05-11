/*Nerio Jose Moran Paez 23.556.790 21:24 10/04/15 */
/*  Programa que cuenta los dias trascurridos entre dos fechas  (validando las fechas) y usando Estructuras de desicion */


#include <iostream>
using namespace std;
int main() {
	int fecha1, fecha2, dia1, mes1, anyo1, dia2, mes2, anyo2,ano,dano;
	int dias_transcurridos, dias_transcurridos1, dias_transcurridos2;
	int enero, febrero, marzo, abril, mayo, junio, julio, agosto, septiembre;
	int octubre, noviembre, diciembre;
	bool valido;
	
	valido = false;
	fecha1 = anyo1 = mes1 = dia1 = 0;
	fecha2 = anyo2 = mes2 = dia2 = 0;
	cout<< "Porfavor ingrese la fecha en formato yymmdd ejm: 940622 -> 22 de junio de 1994"<<endl;
	cout<<"Primera fecha yymmdd ";
	cin >> fecha1;
	cout<<"Segunda fecha yymmdd ";
	cin >> fecha2;
	
	anyo1 = fecha1 / 10000;
	mes1 = (fecha1 - anyo1 * 10000) / 100;
	dia1 = fecha1 - (anyo1 * 100 + mes1) * 100;
	
	anyo2 = fecha2 / 10000;
	mes2 = (fecha2 - anyo2 * 10000) / 100;
	dia2 = fecha2 - (anyo2 * 100 + mes2) * 100;
	
	ano=anyo2-anyo1;
	dano=ano*365;
	
	// Dias que tiene cada mes
	enero = 31 ;
	// febrero es caso especial
	marzo = 31;
	abril = 30;
	mayo = 31;
	junio = 30;
	julio = 31;
	agosto = 31;
	septiembre = 30;
	octubre = 31;
	noviembre = 30;
	diciembre = 31;
	
	// Si el anyo es bisiesto febrero tiene 29 dias,
	// en caso contrario tiene 28 dias
	if ((anyo1 % 4 == 0 && anyo1 % 100 != 0) || anyo1 % 400 == 0)
		febrero = 29;
	else
		febrero = 28;
	
	// Se valida que las fechas introducidas estén en orden cronologico
	if (anyo1 != anyo2 || ((mes1 > mes2 ) || (mes1 == mes2 && dia1 >= dia2))) {
		valido = false;
	} else {
		
		// Se valida la primera fecha ingresada
		if (dia1 >= 1 && mes1 >= 1 && mes1 <= 12 && anyo1 >= 0) {
			switch (mes1) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				valido = dia1 <= 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				valido = dia1 <= 30;
				break;
			case 2:
				valido = dia1 <= febrero;
				break;
			}
		} else {
			valido = false;
		}
		// Se valida la segunda fecha ingresada
		if (dia2 >= 1 && mes2 >= 1 && mes2 <= 12 && anyo2 >= 0) {
			switch (mes2) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				valido = dia2 <= 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				valido = dia2 <= 30;
				break;
			case 2:
				valido = dia2 <= febrero;
				break;
			}
		} else {
			valido = false;
		}
		if(valido) {
			dias_transcurridos1 = 0;
			switch (mes1) {
			case 1:
				dias_transcurridos1 = dia1;
				break;
			case 2:
				dias_transcurridos1 = enero + dia1;
				break;
			case 3:
				dias_transcurridos1 = enero + febrero + dia1;
				break;
			case 4:
				dias_transcurridos1 = enero + febrero + marzo + dia1;
				break;
			case 5:
				dias_transcurridos1 = enero + febrero + marzo + abril + dia1;
				break;
			case 6:
				dias_transcurridos1 = enero + febrero + marzo + abril + mayo + dia1;
				break;
			case 7:
				dias_transcurridos1 = enero + febrero + marzo + abril + mayo + junio + dia1;
				break;
			case 8:
				dias_transcurridos1 = enero + febrero + marzo + abril + mayo + junio + julio + dia1;
				break;
			case 9:
				dias_transcurridos1 = enero + febrero + marzo + abril + mayo + junio + julio + agosto +dia1;
				break;
			case 10:
				dias_transcurridos1 = enero + febrero + marzo + abril + mayo + junio + julio + agosto +septiembre + dia1;
				break;
			case 11:
				dias_transcurridos1 = enero + febrero + marzo + abril + mayo + junio + julio + agosto +septiembre + octubre + dia1;
				break;
			case 12:
				dias_transcurridos1 = enero + febrero + marzo + abril + mayo + junio + julio + agosto +septiembre + octubre + noviembre + dia1;
				break;
			}
			dias_transcurridos2 = 0;
			switch (mes2) {
			case 1:
				dias_transcurridos2 = dia2;
				break;
			case 2:
				dias_transcurridos2 = enero + dia2;
				break;
			case 3:
				dias_transcurridos2 = enero + febrero + dia2;
				break;
			case 4:
				dias_transcurridos2 = enero + febrero + marzo + dia2;
				break;
			case 5:
				dias_transcurridos2 = enero + febrero + marzo + abril + dia2;
				break;
			case 6:
				dias_transcurridos2 = enero + febrero + marzo + abril + mayo + dia2;
				break;
			case 7:
				dias_transcurridos2 = enero + febrero + marzo + abril + mayo + junio + dia2;
				break;
			case 8:
				dias_transcurridos2 = enero + febrero + marzo + abril + mayo + junio + julio + dia2;
				break;
			case 9:
				dias_transcurridos2 = enero + febrero + marzo + abril + mayo + junio + julio + agosto +
				dia2;
				break;
			case 10:
				dias_transcurridos2 = enero + febrero + marzo + abril + mayo + junio + julio + agosto + septiembre + dia2;
				break;
			case 11:
				dias_transcurridos2 = enero + febrero + marzo + abril + mayo + junio + julio + agosto + septiembre + octubre + dia2;
				break;
			case 12:
				dias_transcurridos2 = enero + febrero + marzo + abril + mayo + junio + julio + agosto + septiembre + octubre + noviembre + dia2;
				break;
			}
			if (anyo1!=anyo2)
				dias_transcurridos = dias_transcurridos2 -  dias_transcurridos1+dano;
			else
				dias_transcurridos= (dias_transcurridos2 - dias_transcurridos1);
		} else {
			valido = false;
		}
	}
	if (valido)
		cout<<"Han pasado "<< dias_transcurridos <<"dias"<< endl;
	else
		cout << "Error" << endl;
	return dias_transcurridos;
} 



