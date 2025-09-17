//Ejercicio 8.1: Interés Compuesto
//Escribe un programa que calcule el interés compuesto. La fórmula es la siguiente:
// A = P(1+ r/n)^(nt)
// Donde:
// A = monto final
// P = monto principal (inicial)
// r = tasa de interés anual (en decimal)
// n = número de veces que se aplica el interés por año
// t = número de años
// Pedir valores e imprimir monto final
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float P, r;
    int n, t;
    cout<<"Ingrese el monto Inicial (P): ";cin>>P;
    cout<<"Ingrese la tasa de interes anual en decimal (r): ";cin>>r;
    cout<<"Ingrese el numero de veces que se aplica el interes por año, por políticas bancarias, solo admite enteros (n): ";cin>>n;
    cout<<"Ingrese el numero de años (t): ";cin>>t;

    float A = P * pow((1 + r/n), (n*t));

    cout<<"El monto final es: "<<A<<endl;
}