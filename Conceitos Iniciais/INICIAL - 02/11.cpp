
/*
11) Escreva um algoritmo que leia o peso de uma pessoa, aqui na Terra. Em seguida calcule e mostre qual será o peso lido em Marte e em Vênus. Sabe-se que a gravidade relativa em Marte é 0.38 e em Vênus é 0.88.
   Fórmula: peso no planeta = peso na Terra * gravidade relativa
*/

#include <iostream>
using namespace std;

int main()
{
    float peso_terra;
    cout << "Digite o peso na Terra: ";
    cin >> peso_terra;
    cout << "Peso em Marte: " << peso_terra * 0.38 << " kg" << endl;
    cout << "Peso em Vênus: " << peso_terra * 0.88 << " kg" << endl;
    return 0;
}
