#include<iostream>
using namespace std;
//Sumar los elementos de un arreglo
//Escribe un programa que declare un arreglo de 5 enteros y calcule la suma de todos sus elementos.
int main(){
    int arr[5];
    int suma=0;

    cout<<"Ingrese 5 numeros enteros: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        suma+=arr[i];
        cout<<"La suma va en: "<<suma<<endl;
    }

    cout<<"La suma total es: "<<suma<<endl;
}