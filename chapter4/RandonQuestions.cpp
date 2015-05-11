/*Universidad de los Andes NUAA
Programa que permite elegir aleatoriamente 5 preguntas motrarlas en pantalla,seleccionar opciones y una vez selecionado todas las opciones
ver las opciones correctas e incorrectas y el puntaje obtenido
intergrantes: Nerio Jose Moran Paez 23.556.790
Daniel Pernia Zambrano 20.396.472*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
using namespace std;
//planilla de registro de preguntas
struct Pregunta
{
	char pregunta[200];
	char resp1[200];
	char resp2[200];
	char resp3[200];
	char resp4[200];
	char nombre_respuesta[200];
	int resp_correcta;
	int respuesta_usuario;
};

void imprimir_pantalla (Pregunta & examen);//prototipos de funciones
bool verificar_azar(int n_aleatorio, int num[]);
void inicializar_preguntas(Pregunta[]);
void inicializar_azar(int num[]);
int resultado (Pregunta [], int []);

int main() {

cout<<"RESOLVER INDICANDO LAS OPCIONES MOSTRADAS EN PANTALLA"<<endl;
int puntaje=0;
Pregunta examen[20];
inicializar_preguntas (examen);

int num[5];
inicializar_azar(num);

for(int i = 0; i<5; ++i)
	{
		imprimir_pantalla(examen[num[i]]);
	}
int puntaje_final = 0;
puntaje_final = resultado(examen, num);
cout<<" "<<endl;
cout<< " PUNTAJE " <<puntaje_final<<endl;

	return 0;
}

int resultado (Pregunta examen[], int num[])
{
int puntaje = 0;
cout<<"RESPUESTAS CORRECTAS"<<endl;
for(int k=0;k<5;k++)
	{												//validamos las respuestas introducidas por el usuario comparando con las respuestas correctas
		if(examen[num[k]].resp_correcta == examen[num[k]].respuesta_usuario)
			{
				cout<<examen[num[k]].pregunta<<" = Correcto"<<endl;
				puntaje++;
			}
	}

cout<<" "<<endl;
cout<<"RESPUESTAS INCORRECTAS"<<endl;
	for(int k=0;k<5;k++)
		{
			if(examen[num[k]].resp_correcta!=examen[num[k]].respuesta_usuario)
				{
					cout<<examen[num[k]].pregunta<<" = Incorrecto"<<endl;
					cout<<"La respuesta correcta es:"<<examen[num[k]].nombre_respuesta<<endl;
					cout<<" "<<endl;
				}
		}
	cout<<" "<<endl;
	return puntaje*4;
	
}

void inicializar_azar(int num[])
{
int n_aleatorio;
srand(time(0));//creacion de numeros aleatorios
for(int i =0; i<5; i++)
	{
		do
			{
				n_aleatorio = rand() % 20; //	[0,19]
			}
		while(verificar_azar(n_aleatorio, num));//llamamos la funcion verificar para que los numeros aleatorios no se repitan
		
		num[i]= n_aleatorio;

	}

}



bool verificar_azar(int n_aleatorio, int num[])
{																								//funcion de numeros no repitientes
	for(int i=0; i<5; i++)
		{
			if(n_aleatorio == num[i])
				{
					return true;
				}
		}
	return false;
}

void imprimir_pantalla(Pregunta & examen){//funcion que permite mostrar en pantalla elementos del arreglo
	cout<<" "<<endl;
	cout<<examen.pregunta<<endl;
	cout<<examen.resp1<<endl;
	cout<<examen.resp2<<endl;
	cout<<examen.resp3<<endl;
	cout<<examen.resp4<<endl;
	cin>>examen.respuesta_usuario;
}

void inicializar_preguntas (Pregunta examen[]  )
{

//preguntas y repsuesta en la posicion [0] del arreglo
	strcpy(examen[0].pregunta, " Que es la biologia");
	strcpy(examen[0].resp1, "1# Es una ciencia que estudia el comportamiento de los organismos vivos");//correcta
	strcpy(examen[0].resp2, "2# Es la ciencia que estdia los animales");
	strcpy(examen[0].resp3, "3# Es la universidad mas prestigiosa del mundo");
	strcpy(examen[0].resp4, "4# Es la calculadora de operacion ilogicas");
	strcpy(examen[0].nombre_respuesta,"Es una ciencia que estudia el comportamiento de los organismos vivos");
	examen[0].resp_correcta=1;
	//preguntas y repsuesta en la posicion [1] del arreglo
	strcpy(examen[1].pregunta, "Cual es la excentricidad de una hiperbola?");
	strcpy(examen[1].resp1, "1# Es una ciencia que estudia el comportamiento de la naturaleza");
	strcpy(examen[1].resp2, "2# Es la ciencia que estia los animales");
	strcpy(examen[1].resp3, "3# Es la universidad mas prestigiosa del mundo"); 
	strcpy(examen[1].resp4, "4# La excentricidad es mayor a uno");//correcta
	strcpy(examen[1].nombre_respuesta,"La excentricidad es mayor a uno");
	examen[1].resp_correcta=4;
	//preguntas y repsuesta en la posicion [2] del arreglo
	strcpy(examen[2].pregunta, " Que es la Quimica?");
	strcpy(examen[2].resp1, "1# Es la ciencia que estudia las propiedades de la materia");//correcto
	strcpy(examen[2].resp2, "2# Son los procesos que hace el cerebro mientras leemos");
	strcpy(examen[2].resp3, "3# Es un acto de magia");
	strcpy(examen[2].resp4, "4# Relacion entre dos personas");
	strcpy(examen[2].nombre_respuesta, "1# Es la ciencia que estudia las propiedades de la materia");
	examen[2].resp_correcta=1;
	//preguntas y repsuesta en la posicion [3] del arreglo
	strcpy(examen[3].pregunta, "Que es la cerebracion?");
	strcpy(examen[3].resp1, "1# Es la ciencia que estudia las propiedades de el cerebro");
	strcpy(examen[3].resp2, "2# Son los procesos que hace el cerebro mientras leemos");//correcta
	strcpy(examen[3].resp3, "3# Derrame cerebral");
	strcpy(examen[3].resp4, "4# Dolor de cabeza");
	strcpy(examen[3].nombre_respuesta, "2# Son los procesos que hace el cerebro mientras leemos");
	examen[3].resp_correcta=2;
	//preguntas y repsuesta en la posicion [4] del arreglo
	strcpy(examen[4].pregunta, "Con que instrumento se mide las precipitaciones?"); 
	strcpy(examen[4].resp1, "1# Higrometro");
	strcpy(examen[4].resp2, "2# Termometro");
	strcpy(examen[4].resp3, "3# Pluviometro");//correcto
	strcpy(examen[4].resp4, "4# varometro");
	strcpy(examen[4].nombre_respuesta, "3# Pluviometro");
	examen[4].resp_correcta=3;
	//preguntas y repsuesta en la posicion [5] del arreglo
	strcpy(examen[5].pregunta,"El efecto a largo plazo de la radiacion solar sobre la superficie y la atmosfera de la Tierra en rotacion. ¿Es la definición de?");
	strcpy(examen[5].resp1, "1# Temperatura");
	strcpy(examen[5].resp2, "2# Humedad");
	strcpy(examen[5].resp3, "3# Clima");//correcta
	strcpy(examen[5].resp4, "4# Pluviosidad");
	strcpy(examen[5].nombre_respuesta, "3# Clima");
	examen[5].resp_correcta=3;
	//preguntas y repsuesta en la posicion [6] del arreglo
	strcpy(examen[6].pregunta,"Que mar bana las tres penínsulas del sur de Europa?");
	strcpy(examen[6].resp1, "1# El mar Mediterraneo");
	strcpy(examen[6].resp2, "2# El oceano Atlantico ");
	strcpy(examen[6].resp3, "3# El mar del Norte");//correcta
	strcpy(examen[6].resp4, "4# El mar Cantabrico ");
	strcpy(examen[6].nombre_respuesta, "3# El mar del Norte");
	examen[6].resp_correcta=3;
	//preguntas y repsuesta en la posicion [7] del arreglo
	strcpy(examen[7].pregunta, "Cual es el rio mas largo del mundo");                                                      
	strcpy(examen[7].resp1, "1# El rio Amazonas");
	strcpy(examen[7].resp2, "2# El rio Nilo ");//correcta
	strcpy(examen[7].resp3, "3# El rio Guadalquivir ");
	strcpy(examen[7].resp4, "4# El rio Danubio");
	strcpy(examen[7].nombre_respuesta, "2# El rio Nilo ");
	examen[7].resp_correcta=2;
	//preguntas y repsuesta en la posicion [8] del arreglo
	strcpy(examen[8].pregunta,"Cual es la minima distancia entre dos rectas paralelas");
	strcpy(examen[8].resp1, "1# Una recta perpendicular a las dos");//correcta
	strcpy(examen[8].resp2, "2# Una recta diagonal a las dos");
	strcpy(examen[8].resp3, "3# Una recta perpendicular a otras dos rectas contenidas en el espacio");
	strcpy(examen[8].resp4, "4# Una recta de 30 grados");
	strcpy(examen[8].nombre_respuesta, "1# Una recta perpendicular a las dos");
	examen[8].resp_correcta=1;
	//preguntas y repsuesta en la posicion [9] del arreglo
	strcpy(examen[9].pregunta, "Identifique que tipo de funcion es la siguiente F(x)=X^2+2");
	strcpy(examen[9].resp1, "1# Funcion radical par");
	strcpy(examen[9].resp2, "2# Funcion trigonometrica ");
	strcpy(examen[9].resp3, "3# No es funcion");
	strcpy(examen[9].resp4, "4# Funcion par");//correcta
	strcpy(examen[9].nombre_respuesta, "4# Funcion par");
	examen[9].resp_correcta=4;
	//preguntas y repsuesta en la posicion [10] del arreglo
	strcpy(examen[10].pregunta,"Cuales son las estruturas de repeticion usadas en c++");
	strcpy(examen[10].resp1, "1# Long int");
	strcpy(examen[10].resp2, "2# For,Do while ");
	strcpy(examen[10].resp3, "3# For, while,do while");//correcta
	strcpy(examen[10].resp4, "4# Using namespace std");
	strcpy(examen[10].nombre_respuesta, "3# For, while,do while");
	examen[10].resp_correcta=3;
	//preguntas y repsuesta en la posicion [11] del arreglo
	strcpy(examen[11].pregunta,"La Fotosintesis es el proceso mediante el cual:");
	strcpy(examen[11].resp1, "1# Las plantas absorben las energia del sol");//correcta
	strcpy(examen[11].resp2, "2# Las plantas absorben el agua");
	strcpy(examen[11].resp3, "3# Las plantas absorven nutrientes de la tierra");
	strcpy(examen[11].resp4, "4# Se produce cuando dos plantas se cruzan");
	strcpy(examen[11].nombre_respuesta, "1# Las plantas absorben las energia del sol");
	examen[11].resp_correcta=1;
	//preguntas y repsuesta en la posicion [12] del arreglo
	strcpy(examen[12].pregunta,"Que es la trigometria?");
	strcpy(examen[12].resp1, "1# Es un proceso que establece las relaciones entre angulos y distancias");//correcta
	strcpy(examen[12].resp2, "4# Es la relacion entre distancias de un cuadrado");
	strcpy(examen[12].resp3, "2# Es el angulo de triangulo");
	strcpy(examen[12].resp4, "3# Es es vector directo de un triangulo");
	strcpy(examen[12].nombre_respuesta, "1# Es un proceso que establece las relaciones entre angulos y distancias");
	examen[12].resp_correcta=1;
	//preguntas y repsuesta en la posicion [13] del arreglo
	strcpy(examen[13].pregunta,"Que significa Paradigma");
	strcpy(examen[13].resp1, "1# Significa creer");
	strcpy(examen[13].resp2, "2# Es el sueño de un pensamiento");
	strcpy(examen[13].resp3, "3# Es el pensamiento de una persona");
	strcpy(examen[13].resp4, "4# Es la manera de pensar una persona");//correcta
	strcpy(examen[13].nombre_respuesta, "4# Es la manera de pensar una persona");
	examen[13].resp_correcta=4;
	//preguntas y repsuesta en la posicion [14] del arreglo
	strcpy(examen[14].pregunta, "Palabra cientifica usada para el dolor de cabeza");
	strcpy(examen[14].resp1, "1# Nigtasmu");
	strcpy(examen[14].resp2, "2# Migraña");
	strcpy(examen[14].resp3, "3# Vertigo");
	strcpy(examen[14].resp4, "4# Cefalea");//correcta
	strcpy(examen[14].nombre_respuesta, "4# Cefalea");
	examen[14].resp_correcta=4;
	//preguntas y repsuesta en la posicion [15] del arreglo
	strcpy(examen[15].pregunta,"Que es la organizacion");
	strcpy(examen[15].resp1, "1# Institucion que tienen un objetivo en comun ");
	strcpy(examen[15].resp2, "2# Empresa que lleva a cabo actividades");
	strcpy(examen[15].resp3, "3# Personas con un fin en particular");//correcta
	strcpy(examen[15].resp4, "4# Ninguna de las anteriores");
	strcpy(examen[15].nombre_respuesta, "3# Personas con un fin en particular");
	examen[15].resp_correcta=3;
	//preguntas y repsuesta en la posicion [16] del arreglo
	strcpy(examen[16].pregunta,"Que significan las siglas M.S.D.S");
	strcpy(examen[16].resp1, "1# Ministerio de Sanidad del Desarrollo Social ");//correcta
	strcpy(examen[16].resp2, "2# Maxmima Serenidad Del SocioCapitalismo");
	strcpy(examen[16].resp3, "3# Mejores Sabores Desarrollados Secuencialmente");
	strcpy(examen[16].resp4, "4# Mujeres Sanguinarias Desarrolladoras de Sangre");
	strcpy(examen[16].nombre_respuesta, "1# Ministerio de Sanidad del Desarrollo Social ");
	examen[16].resp_correcta=1;
	//preguntas y repsuesta en la posicion [17] del arreglo
	strcpy(examen[17].pregunta,"Cuantos años tiene un quinquenio");
	strcpy(examen[17].resp1, "1# 15 anios");//correcta
	strcpy(examen[17].resp2, "2# 45 anios");
	strcpy(examen[17].resp3, "3# 500 anios");
	strcpy(examen[17].resp4, "4# 25 anios");
	strcpy(examen[17].nombre_respuesta, "1# 15 anios");
	examen[17].resp_correcta=1;
	//preguntas y repsuesta en la posicion [18] del arreglo
	strcpy(examen[18].pregunta,"Las propiedades de la materia son:");
	strcpy(examen[18].resp1, "1# Solido, liquido,aguado,arrugado");
	strcpy(examen[18].resp2, "2# Solido,gaseoso,sintetico");
	strcpy(examen[18].resp3, "3# Gaseoso,liquido,solido,plasma");//correcta
	strcpy(examen[18].resp4, "4# Eferbencente,gratinado");
	strcpy(examen[18].nombre_respuesta, "3# Gaseoso,liquido,solido,plasma");
	examen[18].resp_correcta=3;
	//preguntas y repsuesta en la posicion [19] del arreglo
	strcpy(examen[19].pregunta,"Que significa ortogonal?");
	strcpy(examen[19].resp1, "1# Linea de 30 grados pararelos a dos puntos en el espacio");
	strcpy(examen[19].resp2, "2# Parelelo");
	strcpy(examen[19].resp3, "3# Perpedicular");//correcto
	strcpy(examen[19].resp4, "4# Diagonal");
	strcpy(examen[19].nombre_respuesta, "3# Perpedicular");
	examen[19].resp_correcta=3;
	/*Se termina de asignar todas las preguntas y respuestas para luego mediante una funcion imprimir 5
	preguntas aleatoriamente*/
	


}