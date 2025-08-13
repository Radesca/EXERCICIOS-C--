/*

12) Escreva um algoritmo que leia um vetor de 8 elementos, do tipo real, calcule e
mostre:
a. A soma entre os elementos >= a 20 e < que 30;
b. A quantidade de números negativos;
c. O maior elemento.

*/

#include <iostream>
using namespace std;

int main()
{
    float vetor[8];
    float soma = 0;
    int quantidadeNegativos = 0;
    float maior = -999999; // Inicializa com um valor bem baixo

    // Leitura do vetor
    cout << "Digite 8 elementos reais:" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Cálculo das métricas
    for (int i = 0; i < 8; i++)
    {
        // a. Soma dos elementos >= 20 e < 30
        if (vetor[i] >= 20 && vetor[i] < 30)
        {
            soma += vetor[i];
        }

        // b. Contagem de números negativos
        if (vetor[i] < 0)
        {
            quantidadeNegativos++;
        }

        // c. Encontrar o maior elemento
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    // Exibição dos resultados
    cout << "Soma dos elementos >= 20 e < 30: " << soma << endl;
    cout << "Quantidade de números negativos: " << quantidadeNegativos << endl;
    cout << "Maior elemento: " << maior << endl;

    return 0;
}
