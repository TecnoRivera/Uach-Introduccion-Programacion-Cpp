#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int TacosR = 0;
    int TacosV = 0;
    int TacosCh = 0;
    float priceR = 10;
    float priceV = 15;
    float priceCh = 12;

    cout << "===============================\n";
    cout << "Bienvenidos a tacos vaqueros :D\n";
    cout << "===============================\n\n";
    cout << "cuantos tacos rojos quieres? ";
    cin >> TacosR;
    cout << "cuantos tacos verdes quieres? ";
    cin >> TacosV;
    cout << "cuantos tacos de chicharron quieres? ";
    cin >> TacosCh;
    cout << "\n";
    cout << "Me pediste " << TacosR << " de rojo\n";
    cout << "Me pediste " << TacosV << " de verde\n";
    cout << "Me pediste " << TacosCh << " de chicharron\n";

    float total = (TacosR * priceR) +
    (TacosV * priceV) + 
    (TacosCh * priceCh);

    int sum = TacosR + TacosV + TacosCh;
    cout << "\nEl total a pagar es de: $" << total;

    if(sum > 10 && sum < 20){
    cout << "\n\nPediste mas de 10";
    cout << "\nTe damos un descuento del: $" << (total * .10);
    total = total - (total * .10);
    }else if(sum > 20){
        cout << "\nPediste mas de 20";
        cout << "\nTe damos un descuento del: $" << (total *.20);
        total = total - (total *.20);
    }
    cout << "\nEl total con descuento a pagar es de: $" << total;

    string respuesta;

    cout << "\nDesea redondar?";
    cin >> respuesta;
    if (respuesta == "si") {
        cout << "El total con redondeo es de: $" << ceil(total);
    }else if(respuesta == "no"){
        cout << "El total sin redondeo es de: $" << total;
    }

    
    return 0;
}