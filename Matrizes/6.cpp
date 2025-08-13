/*

6. Faça um algoritmo que leia uma matriz de 5x5, do tipo real e mostre:

a. Os elementos que estão na diagonal principal (i = j);
b. Os elementos que estão na diagonal secundária (i + j = dimensão – 1);
c. Os elementos que estão acima da diagonal principal (i < j)

*/

#include <iostream>
using namespace std;

int main()
{
    float M[5][5];

    // Leitura da matriz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite o elemento M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }

    // Exibição dos elementos da diagonal principal
    cout << "Elementos da diagonal principal (i = j):" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << M[i][i] << " ";
    }
    cout << endl;

    // Exibição dos elementos da diagonal secundária
    cout << "Elementos da diagonal secundária (i + j = 4):" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << M[i][4 - i] << " ";
    }
    cout << endl;

    // Exibição dos elementos acima da diagonal principal
    cout << "Elementos acima da diagonal principal (i < j):" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < j)
            {
                cout << M[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
