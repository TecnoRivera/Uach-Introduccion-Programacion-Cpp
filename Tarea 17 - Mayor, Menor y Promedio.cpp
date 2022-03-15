#include <iostream>

using namespace std;

int main(){

int n = 0;
int repetir = 0;
int menor = 0;
int mayor = 0;
float promedio = 0;



cout << "Dame n cantidad de numeros: ";
cin >> repetir;


    for (int cont(1);cont<=repetir;++cont) {
        cout << "Ingrese un numero: ";
        cin >> n;
        if(cont == 1){
            menor = n;
            mayor = n;
        }else if (n < menor){
            menor = n;
        }else if (n > mayor){
            mayor = n;
        }
        promedio += n;
    }
    cout << "El numero mayor ingresado es: " << mayor << endl;
    cout << "El numero menor ingresado es: " << menor << endl;
    cout << "El promedio es: " << promedio/repetir;

    return 0;
}
