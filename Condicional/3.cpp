
/*
3. Construa um algoritmo que leia dois números inteiros e mostre o resultado da diferença do maior pelo menor valor.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Digite o primeiro número inteiro: ";
    cin >> a;
    cout << "Digite o segundo número inteiro: ";
    cin >> b;
    int maior = (a > b) ? a : b;
    int menor = (a < b) ? a : b;
    cout << "Diferença do maior pelo menor: " << maior - menor << endl;
    return 0;
}
