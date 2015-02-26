/*Nerio Moran edo Merida 25 de febrero 2015 23:29
Introduccion a las instrucciones break and continue 

Las introucciones break and continue alteran elfulojo de control.

Cuando una intruccion break se ejecuta en una estructura while,for,do/while o switch, provoca la salida inmediata
de dicha estructura.

La instruccion continue, cuando se ejecuta en una estructura while, for o do/while, escapa del resto de las 
instrucciones en el cuerpo de esa estructura, y procede con la siguiente iteracion del ciclo.

*/

#include <iostream>
using namespace std;

int main(){
cout<<"EJEMPLO DE BREAK\n"<<endl;
   for(int i =0; i<10; ++i)
      {
         if(i == 6)
            break;
            
         cout<<i<<endl;
      }
cout<<"\n"; 
cout<<"EJEMPLO DE CONTINUE"<<endl;      
   
   for(int i=0; i < 10; ++i)
      {
         if(i == 5)
            continue;
          cout<<i<<" ";
      }
      
      cout<<"sin el 5"<<endl;





return 0;
}
