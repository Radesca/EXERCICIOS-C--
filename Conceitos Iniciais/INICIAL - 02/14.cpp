
/*
14) Faça um algoritmo que leia um valor em quilometro e transforme-o para metros. Imprima o resultado.
*/

#include <iostream>
using namespace std;

int main()
{
    float km;
    cout << "Digite o valor em quilômetros: ";
    cin >> km;
    cout << "Valor em metros: " << km * 1000 << " m" << endl;
    return 0;
}
