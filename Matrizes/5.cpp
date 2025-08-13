/*

5. Elabore um algoritmo que leia uma matriz de 4x4, calcule e mostre:

a) A soma dos elementos pares e >= 0;
b) O quadrado de cada elemento ímpar da matriz

*/

#include <iostream>
using namespace std;

int main()
{
    int M[4][4];
    int sumEven = 0;

    // Leitura da matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Digite o elemento M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }

    // Cálculo da soma dos elementos pares e >= 0
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (M[i][j] % 2 == 0 && M[i][j] >= 0)
            {
                sumEven += M[i][j];
            }
        }
    }

    // Exibição dos resultados
    cout << "Soma dos elementos pares e >= 0: " << sumEven << endl;
    cout << "Quadrado dos elementos ímpares da matriz:" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (M[i][j] % 2 != 0)
            {
                cout << (M[i][j] * M[i][j]) << " ";
            }
            else
            {
                cout << M[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
