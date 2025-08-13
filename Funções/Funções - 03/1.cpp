/*

1) Escreva um algoritmo que calcule e mostre o somatório dos ímpares de um vetor M de 6 elementos inteiros.

*/

#include <iostream>

using namespace std;

void leitura(int M[6])
{
    for (int i = 0; i < 6; i++)
    {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> M[i];
    }
}

int somatorio_impares(int M[6])
{
    int soma = 0;
    for (int i = 0; i < 6; i++)
    {
        if (M[i] % 2 != 0)
        {
            soma += M[i];
        }
    }
    return soma;
}

int main()
{
    int M[6];
    leitura(M);
    int soma = somatorio_impares(M);
    cout << "Soma dos impares: " << soma << endl;
    return 0;
}
