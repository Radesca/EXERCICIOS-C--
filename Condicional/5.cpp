
/*
5. Construa um algoritmo que leia 2 números reais e mostre o maior entre eles.
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
        cout << "Maior: " << a << endl;
    }
    else if (b > a)
    {
        cout << "Maior: " << b << endl;
    }
    else
    {
        cout << "Os números são iguais." << endl;
    }
    return 0;
}
