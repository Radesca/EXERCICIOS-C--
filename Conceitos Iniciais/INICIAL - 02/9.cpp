
/*
9) Escreva um algoritmo que leia o peso de uma pessoa, calcule e mostre:
   a) O novo peso caso a pessoa engorde 15% sobre o peso digitado;
   b) O novo peso caso a pessoa emagreça 20% sobre o peso digitado.
*/

#include <iostream>
using namespace std;

int main()
{
    float peso;
    cout << "Digite o peso: ";
    cin >> peso;
    cout << "Novo peso se engordar 15%: " << peso * 1.15 << " kg" << endl;
    cout << "Novo peso se emagrecer 20%: " << peso * 0.8 << " kg" << endl;
    return 0;
}
