#include <iostream>
#include <string>

using namespace std;

int sumar(int a[], int x);

int main(){

    int x=0;
    int a[50];
    

    cout<<"Ingresa Tamaño de Arreglo"<<endl;
    cin>>x;

    for(int i=0; i<x; i++){
         cout<<"Ingresa Numeros"<<endl;
         cin>>a[i];
    }
    
    int result=sumar(a, x-1);
    cout<<"La suma es "<<endl;
    cout<<result<<endl;
    
    return 0;
}


int sumar(int a[], int x){

    if(x==0){
        return a[0];
    }
    return a[x]+sumar(a, x-1);


}


