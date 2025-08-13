
/*
2) Faça um algoritmo que leia um valor em metros e transforme-o para centímetros. Imprima o resultado.
*/

#include <iostream>
using namespace std;

int main()
{
    float metros;
    cout << "Digite o valor em metros: ";
    cin >> metros;
    cout << "Valor em centímetros: " << metros * 100 << " cm" << endl;
    return 0;
}
