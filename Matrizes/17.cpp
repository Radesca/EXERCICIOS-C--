/*

17. Construa um programa que leia uma matriz, de 3x3, do tipo inteiro. Calcule e mostre a subtração de cada elemento da 1ª com a 3ª linha.


4 9 2
3 0 15
1 12 2

*/

#include <iostream>
using namespace std;

int main()
{
    int M[3][3];
    int resultado[3][3];

    // Leitura da matriz M
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento [" << i << "][" << j << "] da matriz M: ";
            cin >> M[i][j];
        }
    }

    // Cálculo da subtração
    for (int j = 0; j < 3; j++)
    {
        resultado[0][j] = M[0][j] - M[2][j];
    }

    // Exibição do resultado
    cout << "Resultado da subtração da 1ª pela 3ª linha:" << endl;
    for (int j = 0; j < 3; j++)
    {
        cout << resultado[0][j] << " ";
    }
    cout << endl;

    return 0;
}
