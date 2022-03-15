#include <iostream>

using namespace std;

int main(){
    cout <<"|==============================|\n";
    cout <<"| Calculador de años bisiestos |\n";
    cout <<"|==============================|\n\n";

    int number;

    cout << "Introduce un año: ";
    cin >> number;

    float total = number % 4;
   
    if(total == number % 400){
        cout << "el año " << number << " es año bisiesto ";
    }else if(total == number % 100){
        cout << "el año " << number << " no es año bisiesto ";
    }else if(total == 0){
        cout << "el año " << number << " es año bisiesto ";
    }



    return 0;
}