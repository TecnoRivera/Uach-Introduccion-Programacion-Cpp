#include<iostream>

using namespace std;

int main(){
  
int x = 0;
int y = 0;
int z = 0;

cout<<"=========================================\n";
cout<<"Bienvenido al programa validador de sumas\n";
cout<<"=========================================\n";
cout<<"Escriba un numero: ";
cin>>x;
cout<<"Escriba un segundo numero: ";
cin>>y;
cout<<"Escriba la suma de los dos numeros que proporciono: ";
cin>>z;

if(z == x + y){
    cout << "La suma es correcta";
}else{
    cout << "La suma es incorrecta";
}


    return 0;
}