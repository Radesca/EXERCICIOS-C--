
/*
3) Escreva um algoritmo que leia um número (do tipo real) e mostre-o de três formas:
   a) Multiplicado por 3;
   b) Somado com 10;
   c) Dividido por 20.
*/

#include <iostream>
using namespace std;

int main()
{
    float num;
    cout << "Digite um número real: ";
    cin >> num;
    cout << "Multiplicado por 3: " << num * 3 << endl;
    cout << "Somado com 10: " << num + 10 << endl;
    cout << "Dividido por 20: " << num / 20 << endl;
    return 0;
}
