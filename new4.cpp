#include <iostream>

//Emiliano Rivera Armendariz 358193 2CC2

using namespace std;

int main() 
{

    int countV = 0;
    int countR = 0;
    int countCh = 0;
    int countMo = 0;
    int countDis = 0;
    int countChRe = 0;
    float priceV = 2;
    float priceR = 1;
    float priceCh = 3;
    float priceMo = 4;
    float priceDis = 5;
    float priceChRe = 6;

    cout << "================================ \n";
    cout << "Hola bienvenido a Burritos Don Julio \n";
    cout << "================================ \n\n";
    cout << "Los burritos que tenemos son de: \n";
    cout << "1) Deshebrada Rojo 1 peso\n";
    cout << "2) Deshebrada Verde 2 pesos\n";
    cout << "3) Chicharron 3 pesos\n";
    cout << "4) Mole 4 pesos\n";
    cout << "5) Discada 5 pesos\n";
    cout << "6) Chile Relleno 6 pesos\n\n";
    cout << "Cuantos burritos Rojos quieres: ";
    cin >> countV;
    cout << "Cuantos burritos Verdes quieres: ";
    cin >> countR;
    cout << "Cuantos burritos de Chicharron quieres: ";
    cin >> countCh;
    cout << "Cuantos burritos de Mole quieres: ";
    cin >> countMo;
    cout << "Cuantos burritos de Discada quieres: ";
    cin >> countDis;
    cout << "Cuantos burritos de Chile Relleno quieres: ";
    cin >> countChRe;
    cout << "\n";
    cout << "Me pediste " << countV << " burritos Rojos\n";
    cout << "Me pediste " << countR << " burritos Verdes\n";
    cout << "Me pediste " << countCh << " burritos de Chicharron\n";
    cout << "Me pediste " << countMo << " burritos de Mole\n";
    cout << "Me pediste " << countDis << " burritos de Discada\n";
    cout << "Me pediste " << countChRe << " burritos de Chile Relleno\n";

    float total = (countV * priceV) +
    (countR * priceR) +
    (countCh * priceCh) +
    (countMo * priceMo) +
    (countDis * priceDis) +
    (countChRe * priceChRe);

    int sum = countV + countR + countCh + countMo + countDis + countChRe;
    cout << "\nPediste en total: " << sum << " burritos";
    cout << "\nEl total a pagar es de: $" << total;


    return 0;
}