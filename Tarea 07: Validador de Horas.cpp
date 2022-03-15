#include<iostream>

using namespace std;

int main(){
  
int x = 0;
int y = 0;
int z = 0;

cout << "========================================\n";
cout << "Bienvenido al programa validador de hora\n";
cout << "========================================\n";

cout << "Ingresa la hora: ";
cin >> x;

if(x > 0 && x <= 23){
    cout << "La hora es correcta\n";}
else{
    cout << "La hora es incorrecta\n";
}

cout << "Ingresa los minutos: ";
cin >> y;

if(y >= 0 && y <= 59){
    cout << "Los minutos son correctos\n";}
    else{
    cout << "Los minutos son incorrectos\n";
}

cout << "ingresa los segundos: ";
cin >> z;

if(z >= 0 && z <= 59){
    cout << "Los segundos son correctos\n";}
else{
    cout << "Los segundos son incorrectos\n";
}


    return 0;
}
