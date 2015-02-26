/*Nerio Moran edo Merida 25 de febrero 2015 21:47
introduccion a las Estructuras de control con un menú 

*/

#include <iostream>
using namespace std;

int main(){
int opcion, num;
double media,value;        // tipo de dato primitivo
int numero;
cout<<"ESTRUCTURAS DE CONTROL"<<endl;
cout<<"elija una opcion"<<endl;
cout<<"1) if{}"<<endl;
cout<<"2) if{}else{}"<<endl;
cout<<"3) for(){}"<<endl;
cout<<"4) while(){}"<<endl;
cout<<"5) do{} while();"<<endl;
cin>>opcion;

switch(opcion){

case 1:     // ingresa un numero positivo y si es asi el terminal lo muestra
   cout<<"ingrese un numero positivo"<<endl;
   cin>>num;
   if(num >= 0)
      {
        cout<<"El numero es positivo"<<endl;
      }
      
break;

case 2:     // ingresa un numero entero y el terminal muestra si es positivo o negativo
      cout<<"ingrese un numero positivo o negativo"<<endl;
   cin>>num;
   if(num >= 0)
      {
        cout<<"El numero es positivo"<<endl;
      }else
         {
         cout<<"El numero es negativo"<<endl;
         }
         
break;

case 3:     // genera la media de tamaño n(tamaño fijo) de numeros suministrada por el usuario
      
      media = 0;
      cout<<"ingrese el tañaño n"<<endl;
      cin>>numero;
      for(int i=1; i<=numero; ++i)
         {
            cout<<"ingrese el numero "<<i<<endl;
            cin>>value;
            media = media + value;  // abreviadamente media += media;
         }
       cout<<"la media para "<<numero<<" numeros es "<<double(media/numero)<<endl;
break;
       
case 4:  // genera la media de n numeros suministrada por el usuario
      
      media = 0;
      cout<<"ingrese un numero, para salir ingrese un numero negativo"<<endl;
      cin>>value;
      while(value >= 0)
         {
            media = media + value;  // abreviadamente media += value;
            numero ++;              //numero = numero + 1;
            cin>>value;
           
         }
       cout<<"la media para "<<numero<<" numeros es "<<double(media/numero)<<endl;
break;


case 5: //muestra los numeros del 0 al 10 mostrando antes de revisar la condicion
      numero =0;
      do {
         cout<<numero<<" ";       
      }while(++numero <= 10);
      cout<<"\n"<<endl;
       
 break;
 
 default:
      cout<<"La opcion no existe"<<endl;
 break;
        
        
        
        
        
        
        
        
        














}



return 0;
}
