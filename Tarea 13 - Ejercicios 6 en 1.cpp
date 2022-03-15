#include <iostream>

using namespace std;

//Emiliano Rivera Armendariz 358193 2CC2

int main(){

    int option;


    cout << "=================\n";
    cout << "Ejercicios 6 en 1\n";
    cout << "=================\n\n";

    cout << "1- Escribir un programa que escriba los numeros del 0 al 100\n";
    cout << "2- Escribir un programa que escriba los numeros pares del 0 al 100\n";
    cout << "3- Escribir un programa que escriba los numeros impares del 0 al 100\n";
    cout << "4- Escribir un programa que cacule cuantos numeros impares hay del 0 al 100\n";
    cout << "5- Escribir un programa que solicite 2 numeros y te diga cuantos numeros hay entre esos dos y ademas que los muestre\n";
    cout << "6- Escribir un programa que solicite 1 numero y que imprima la tabla de multiplicar de dicho numero\n";
    
    cout << "\nPrimer ejercicio\n";
    cout << "Numeros del 0 al 100\n";
    int numero = 0;
    while(numero < 101){
    cout << numero << endl;
    numero = numero+1; 
    }
    

    cout << "\nSegundo ejercicio";  
    cout << "\nNumeros pares del 0 al 100\n";
    int number = 0;

    while(number < 101){
    cout << number << endl;
    number = number+2;
    }
    

    cout << "\nTercer ejercicio";  
    cout << "\nNumeros impares del 0 al 100\n";
    int num = 1;
    while(num < 101){
    cout << num << endl;
    num = num+2;
    }
    

    cout << "\nCuarto ejercicio";   
    cout << "\nCuantos numeros impares hay del 0 al 100\n";
    int a;
    int b;
    cout << "En total hay 50 numeros impares\n";
    

    cout << "\nQuinto ejercicio\n";  
    cout << "Dame 2 numeros: ";
    cin >> a >> b;
    cout << "Los numeros entre estos dos son: " << abs(a-b) << endl;
    cout << "Los numeros que escribiste son: " << a << " y " << b;
    

    cout << "\n\nSexto ejercicio";
    int numbe;
    cout << "\nDame un numero: ";
    cin >> numbe;
    cout << "TABLA DE MULTIPLICAR DEL: " << numbe << endl;
    
    {for(int i=1; i<=10; i++){
        cout<<numbe<<" * " <<i<<" = "<<numbe * i<<endl;
    }}
    
    cout << "\nFin del programa";
    return 0;
}
