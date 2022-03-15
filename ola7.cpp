#include <iostream>

using namespace std;

int main(){
int n;

do {
    float resultado;
    float s = 2;
    cout << "Introduzca un numero para calcular la potencia n/(2*n) : ";
    cin >> n;

    resultado = n/(s*n);
    cout << "Resultado: " << resultado << endl;
    cout << "Si desea salir del programa ingrese 0" << endl;
    cout << "Si desea usar otro numero ingrese cualquier otro numero" << endl;
    cin >> n;
}   
    while(n!=0);

    cout << "Saliste del programa";

    return 0;
}