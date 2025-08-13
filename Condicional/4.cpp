
/*
4. Faça um algoritmo que leia dois números reais e mostre o maior, o menor ou se eles são iguais.
*/

#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cout << "Digite o primeiro número real: ";
    cin >> a;
    cout << "Digite o segundo número real: ";
    cin >> b;
    if (a > b)
    {
        cout << "Maior: " << a << "\nMenor: " << b << endl;
    }
    else if (b > a)
    {
        cout << "Maior: " << b << "\nMenor: " << a << endl;
    }
    else
    {
        cout << "Os números são iguais." << endl;
    }
    return 0;
}
