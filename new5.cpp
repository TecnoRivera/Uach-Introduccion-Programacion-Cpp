#include<iostream>

using namespace std;

//Emiliano Rivera Armendariz 358193 2CC2

int main(){
  
    char option=0;

    cout << "Teclee una vocal minuscula: " << endl;
    cin >> option;
    cout << "La vocal Mayuscula es: ";
    

    switch (option){
        case 'a': 
            cout << "A" << endl;
            break;
        case 'e':
            cout << "E" << endl;
            break;
        case 'i':
            cout << "I" << endl;
            break;
        case 'o':
            cout << "O" << endl;
            break;
        case 'u':
            cout << "U" << endl;
            break;
        default:
            cout << endl << "Error: la letra no es una vocal minuscula" << endl;
            break;
    }
    cout << "Termino el switch" << endl;
    return 0;
}