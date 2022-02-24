// ECUACION DE SEGUNDO GRADO

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;
int main(){
  float a,b,c;
  float x1,x2;
  cout<<"intruduce el coeficiente de 2do grado\n";
  cin>>a;
  cout<<"intruduce el coeficiente de 1er grado\n";
  cin>>b;
  cout<<"intruduce el coeficiente independiente\n";
  cin>>c;
  if(a!=0){
    if(b*b-4*a*c>=0){
    x1 = (-b + sqrt ((b*b) - (4*a*c))) / (2*a);
      x2 = (-b - sqrt ((b*b) - (4*a*c))) / (2*a);
        cout<<"las raises son: "<<x1<<" y "<<x2<<endl;
      }
      else
      cout<<"raices complejas "<<endl;
    }else
    cout<<"solo tiene una raiz: "<<-c/b<<endl;
	system("PAUSE");
	return 0 ;
}

