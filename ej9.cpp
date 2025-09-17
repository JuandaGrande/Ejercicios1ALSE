//Ejercicio 9.1: Cálculo del MCD
//Escribe un programa que calcule el máximo común divisor (MCD) de dos números. El programa debe pedir dos números al usuario y luego imprimir el MCD de ambos.

#include<iostream>
using namespace std;

int mcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a=temp;
    }
    return a;
}
int main(){
    int E1, E2;
    cout<<"Ingrese dos números enteros para hallar el MCD"<<endl;
    cin>>E1>>E2;

    cout<<"El MCD entre "<<E1<<" y "<<E2<<" es: "<<mcd(E1,E2)<<endl;
}