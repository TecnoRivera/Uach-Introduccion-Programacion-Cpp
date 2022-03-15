#include <iostream>

using namespace std;

int main(){
    cout <<"|==========================|\n";
    cout <<"| Calcular pares e impares |\n";
    cout <<"|==========================|\n\n";

    int number;

    cout << "Introduce un numero: ";
    cin >> number;

    float total = number % 2;

    if(total == 0){
        cout << "el numero " << number << " es PAR";
    }else{
        cout << "el numero " << number << " es IMPAR";
    }


    return 0;
}
