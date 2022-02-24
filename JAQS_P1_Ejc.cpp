//funcion 3 - serie de Taylor
#include <iostream>
#include <cstdlib>
using namespace std;
double funcionexp (double x, int n);
double potencia (double x, int n);
double factorial (int n);
 
int main (void){
    int n;
    double x, expo;
    cout<<"Introduce dos valores, el primero sera el valor de x de la funcion exponencial\n";
    cin>>x;
    cout<<"\nY el segundo el numero de terminos que se consideraran en la serie de Taylor: "<<endl;
    cin>>n;
    cout<<endl<<endl;
    expo=funcionexp(x,n);
    cout<<expo;
    cout<<"\n";
    system("PAUSE");
    return 0;
}
double potencia (double x, int n){
    int h;
    double pote=1.0;
    for (h=1;h<=n;h++) pote*=x;
    return pote;
}
double factorial ( int n){
    int k;
    double fact=1.0;
    for (k=1;k<=n;k++){
        fact*=k;
    }
    return fact;
}
double funcionexp (double x, int n){
    int z;
    double exp, sii;
    exp=0.0;
    sii=0.0;
    for (z=0;z<=n;z++){
        exp=(potencia(x,n))/(factorial(n));
        sii+=exp;
    }
    return sii;
}
