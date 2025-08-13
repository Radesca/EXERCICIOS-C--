/*

1. Faça um algoritmo que leia uma matriz M de 2 x 2 e mostre:
a) A quantidade de elementos > 5;
b) A soma entre todos os elementos.

*/

#include <iostream>
using namespace std;

int main()
{
    int M[2][2];
    int count = 0, sum = 0;

    // Leitura da matriz
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Digite o elemento M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
            // Contagem de elementos > 5
            if (M[i][j] > 5)
            {
                count++;
            }
            // Soma dos elementos
            sum += M[i][j];
        }
    }

    // Resultados
    cout << "Quantidade de elementos > 5: " << count << endl;
    cout << "Soma dos elementos: " << sum << endl;

    return 0;
}