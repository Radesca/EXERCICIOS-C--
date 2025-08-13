
/*
12) Construa um algoritmo que leia dois números inteiros, divida um pelo outro e mostre o resto da divisão (suponha que será dividido o maior pelo menor).
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, maior, menor;
    cout << "Digite o primeiro número inteiro: ";
    cin >> a;
    cout << "Digite o segundo número inteiro: ";
    cin >> b;
    if (a > b)
    {
        maior = a;
        menor = b;
    }
    else
    {
        maior = b;
        menor = a;
    }
    cout << "Resto da divisão: " << maior % menor << endl;
    return 0;
}
