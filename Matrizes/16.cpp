/*

16. Construa um algoritmo que leia uma matriz de 3x3 de elementos reais.
Calcule e mostre:
• A média entre os valores da diagonal secundária (i + j = t – 1);
• A quantidade de elementos >= 0 da diagonal principal (i = j);
• A soma entre os elementos que estão abaixo da diagonal principal (i > j).

*/

#include <iostream>
using namespace std;

int main()
{
    float M[3][3];
    float somaDiagonalSecundaria = 0;
    int countDiagonalPrincipal = 0;
    float somaAbaixoDiagonalPrincipal = 0;

    // Leitura da matriz M
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento [" << i << "][" << j << "] da matriz M: ";
            cin >> M[i][j];
        }
    }

    // Cálculo dos valores solicitados
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Diagonal secundária
            if (i + j == 2)
            {
                somaDiagonalSecundaria += M[i][j];
            }
            // Diagonal principal
            if (i == j)
            {
                if (M[i][j] >= 0)
                {
                    countDiagonalPrincipal++;
                }
            }
            // Abaixo da diagonal principal
            if (i > j)
            {
                somaAbaixoDiagonalPrincipal += M[i][j];
            }
        }
    }

    // Exibição dos resultados
    cout << "Média da diagonal secundária: " << somaDiagonalSecundaria / 3 << endl;
    cout << "Quantidade de elementos >= 0 na diagonal principal: " << countDiagonalPrincipal << endl;
    cout << "Soma dos elementos abaixo da diagonal principal: " << somaAbaixoDiagonalPrincipal << endl;

    return 0;
}
