/*

7) Faça um algoritmo que leia um vetor de 10 posições e mostre quantos elementos
são maiores que seus respectivos índices.

*/

#include <iostream>
using namespace std;

int main()
{
    int VET[10];
    int count = 0;

    // Leitura do vetor
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o elemento VET[" << i << "]: ";
        cin >> VET[i];
    }

    // Contar elementos maiores que seus índices
    for (int i = 0; i < 10; i++)
    {
        if (VET[i] > i)
        {
            count++;
        }
    }

    cout << "Quantidade de elementos maiores que seus indices: " << count << endl;

    return 0;
}