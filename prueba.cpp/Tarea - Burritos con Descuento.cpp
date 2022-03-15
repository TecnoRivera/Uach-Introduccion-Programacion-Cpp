#include <iostream>
#include <cmath>

//Emiliano Rivera Armendariz 358193 2CC2

using namespace std;

int main() 
{

    int countV = 0;
    int countR = 0;
    int countCh = 0;
    float priceV = 10;
    float priceR = 5.5;
    float priceCh = 10.5;

    cout << "================================ \n";
    cout << "Hola bienvenido a Burritos Don Julio \n";
    cout << "================================ \n\n";
    cout << "Cuantos burritos Verdes quieres: ";
    cin >> countV;
    cout << "Cuantos burritos Rojos quieres: ";
    cin >> countR;
    cout << "Cuantos burritos de Chicharron quieres: ";
    cin >> countCh;
    cout << "\n";
    cout << "Me pediste " << countV << " burritos Verde\n";
    cout << "Me pediste " << countR << " burritos Rojos\n";
    cout << "Me pediste " << countCh << " burritos de Chicharron\n";

    float total = (countV * priceV) +
    (countR * priceR) +
    (countCh * priceCh);

    int sum = countV + countR + countCh;
    cout << "\nEl total a pagar es de: $" << total;

    if(sum > 10 && sum < 20){
        cout << "\n\npediste mas de 10  ";
        cout << "\n\nte damos un descuento de: $" << (total * .10);
        total = total - (total * .10);
    }else if(sum > 20){
        cout << "\n\npediste mas de 20  ";
        cout << "\n\nte damos un descuento de: $" << (total * .20);
        total = total - (total * .20);
    }
    cout << "\nEl total con descuento a pagar es de: $" << total;
    
    

    string respuesta;
   

    cout << "\nDesea redondear? ";
    cin >> respuesta;
    if (respuesta == "si") {
    cout << "El total con redondeo es de: $" << ceil(total);
    }else if(respuesta == "no"){
    cout << "El total sin redondeo es de: $" << total;
    }

    return 0;
}
