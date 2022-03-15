#include <iostream>

using namespace std;

//Emiliano Rivera Armendariz 358193 2CC2

int main(){

    float numero;
    float division;
    int cont=0;

    cout << "|===================================================|\n";
    cout << "|Bienvenido al programa Mitades de multiples numeros|\n";
    cout << "|===================================================|\n";

    while ( numero != 0 ){
        cout << "\nProporcione un numero: ";
        cin >> numero;
        division=numero/2;
        cout << "La mitad es: " << division << endl;
        cont=cont+1;
    }

    cont=cont-1;
    
    

    cout << "\nUsted solicito " << cont << " numero(s) distinto(s) de 0";
    cout << "\nHasta la proxima :D";

    return 0;
}