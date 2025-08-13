/*

14) Escreva um algoritmo que defina um vetor de 12 posições, do tipo inteiro. O
algoritmo deverá ler todos os elementos (da posição 1 até a posição 10). Pede-se:

a. Armazene na posição 0 a soma dos elementos PARES. Mostre o resultado da
soma;

b. Armazene na posição 11 a soma dos elementos ÍMPARES. Mostre o resultado da
soma;

c. Encontre o maior elemento do vetor (da posição 1 até a posição 10)

*/

#include <iostream>
using namespace std;

int main()
{
    int vetor[12] = {0}; // Inicializa o vetor com zeros
    int somaPares = 0;
    int somaImpares = 0;
    int maior = -999999; // Inicializa com um valor bem baixo

    // Leitura dos elementos (da posição 1 até a posição 10)
    cout << "Digite 10 elementos inteiros:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Elemento " << i << ": ";
        cin >> vetor[i];

        // Cálculo das somas e do maior elemento
        if (vetor[i] % 2 == 0) // Par
        {
            somaPares += vetor[i];
        }
        else // Ímpar
        {
            somaImpares += vetor[i];
        }

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    // Armazenar as somas nas posições apropriadas
    vetor[0] = somaPares;
    vetor[11] = somaImpares;

    // Exibição dos resultados
    cout << "Soma dos elementos PARES: " << vetor[0] << endl;
    cout << "Soma dos elementos ÍMPARES: " << vetor[11] << endl;
    cout << "Maior elemento (posição 1 a 10): " << maior << endl;

    return 0;
}
