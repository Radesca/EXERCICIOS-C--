/*
11. Escreva um programa que leia uma matriz de 4x3, do tipo real. Em seguida calcule e mostre a soma de cada uma das linhas dessa matriz.

       0   1   2

0    | 4 | 9 | 0
1    | 1 | 3 |-7
2    | 0 |65 |32
3    | 2 |-8 |19

*/

#include <iostream>
using namespace std;

int main()
{
    float matriz[4][3];
    float somaLinhas[4] = {0, 0, 0, 0};

    // Leitura da matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Cálculo da soma das linhas
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            somaLinhas[i] += matriz[i][j];
        }
    }

    // Exibição dos resultados
    cout << "Soma das linhas:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Linha " << i << ": " << somaLinhas[i] << endl;
    }

    return 0;
}
