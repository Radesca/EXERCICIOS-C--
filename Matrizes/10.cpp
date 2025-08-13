/*

10. Escreva um programa que leia uma matriz de 4x3, do tipo real. Em seguida calcule e mostre a soma de cada uma das colunas dessa matriz.

       0   1   2

0    | 4 | 9 | 0
1    | 1 | 3 |-7
2    | 0 |65 |32
3    | 2 |-8 |19

-
*/

#include <iostream>
using namespace std;

int main()
{
    float matriz[4][3];
    float somaColunas[3] = {0, 0, 0};

    // Leitura da matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Cálculo da soma das colunas
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            somaColunas[j] += matriz[i][j];
        }
    }

    // Exibição dos resultados
    cout << "Soma das colunas:" << endl;
    for (int j = 0; j < 3; j++)
    {
        cout << "Coluna " << j << ": " << somaColunas[j] << endl;
    }

    return 0;
}