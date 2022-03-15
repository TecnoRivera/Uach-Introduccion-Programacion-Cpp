#include <iostream>

using namespace std;

//Emiliano Rivera Armendariz 358193 2CC2

int main(){

    float peso;
    float estatura;
    float multiplicacion;
    char s;
    int cont = 0;

    cout << "|=====================================|\n";
    cout << "|Calculador de Indice de Masa Corporal|\n";
    cout << "|=====================================|\n";

    
    do 
    {
        cout << "\nProporcione su peso en kg: ";
        cin >> peso;
        cout << "Proporcione su estatura en metros: ";
        cin >> estatura;
        cout << endl;
        float IMC=(peso)/(estatura*estatura);
        
    
        if (peso>0 && estatura>0){
        cout << "Su IMC es de: " << IMC << endl;
        }else{
            cout << "Su peso y altura deben ser mayores a 0" << endl;
        }

        
        if (IMC<20 ){
        cout << "Peligro, estas bajo de peso" << endl;
        int cont=0;
        cont=cont+1;
        cout << "El numero de personas con bajo peso es de: " << cont << endl;
        }
        else if (IMC<25 && IMC>20){
        cout << "Felicidades estas en tu peso" << endl;
        int cont=0;
        cont=cont+1;
        cout << "El numero de personas con peso ideal es de: " << cont << endl;
        }
        else if (IMC>=25 && IMC < 30){
        cout << "Tienes sobrepeso" << endl;
        int cont=0;
        cont=cont+1;
        cout << "El numero de personas con sobrepeso es de: " << cont << endl;
        }
        else if (IMC>=30 && IMC<35){
        cout << "Tienes obesidad" << endl;
        int cont=0;
        cont=cont+1;
        cout << "El numero de personas con obesidad es de: " << cont << endl;
        }
        else if (IMC>35){
        cout << "Tienes obesidad morbida" << endl;
        int cont=0;
        cont=cont+1;
        cout << "El numero de personas con obesidad morbida es de: " << cont << endl;
        }
        cout << "\nPresione s para ingresar nuevos valores en el programa\n";
        cout << "Presione n para salir del programa\n";
        cin >> s;
        cont = cont+1;
        cout << endl;
    }
     while (s!='N' && s!='n');
    
    
        cout << "El numero de personas que ingresaron datos fue: " << cont << endl;
        cout << "\nSaliste del programa";


    
    cout << "\nHasta la proxima :D";

    return 0;
}