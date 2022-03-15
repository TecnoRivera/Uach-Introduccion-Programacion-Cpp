#include <iostream>

using namespace std;

//Emiliano Rivera Armendariz 358193 2CC2

int main(){

    float numero;
    float numero2;
    float multiplicacion;
    char s;

    cout << "|===============================================|\n";
    cout << "|Bienvenido al programa Multiplicador de numeros|\n";
    cout << "|===============================================|\n";

    
    while (s!='N' && s!='n'){
        cout << "\nProporcione un numero entre 10 y 20: ";
        cin >> numero;
        cout << "Proporcione un segundo numero entre 10 y 20: ";
        cin >> numero2;
        if (9 < numero && numero2 < 21 ){
        cout << "\nLa multiplicacion es de: " << numero*numero2 << endl;
        cout << "Presione s para ingresar nuevos numeros\n";
        cout << "Presione n para salir del programa\n";
        cin >> s;
        }else{
        cout << "\nError: Los numeros son menores que 10 o mayores a 20\n";
    }}
        cout << "Saliste del programa";


    
    cout << "\nHasta la proxima :D";

    return 0;
}
