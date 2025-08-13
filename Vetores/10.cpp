/*

10) Construa um programa que leia um vetor de 5 elementos reais e encontre o maior
e o menor elemento.

*/

#include <iostream>
using namespace std;

int main()
{
    float vetor[5];
    float maior, menor;

    // Leitura do vetor
    cout << "Digite 5 elementos reais:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Inicializa maior e menor
    maior = vetor[0];
    menor = vetor[0];

    // Encontra o maior e o menor elemento
    for (int i = 1; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    // Exibição dos resultados
    cout << "Maior elemento: " << maior << endl;
    cout << "Menor elemento: " << menor << endl;

    return 0;
}