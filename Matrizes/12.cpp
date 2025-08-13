/*

12. Escreva um programa que leia uma matriz A de 3x3, do tipo inteiro. Em
seguida gere a matriz B como sendo a multiplicação de cada elemento de A pelo seu valor de i + j. Mostre a matriz B.

*/

#include <iostream>
using namespace std;

int main()
{
    int A[3][3], B[3][3];

    // Leitura da matriz A
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento [" << i << "][" << j << "] da matriz A: ";
            cin >> A[i][j];
        }
    }

    // Geração da matriz B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            B[i][j] = A[i][j] * (i + j);
        }
    }

    // Exibição da matriz B
    cout << "Matriz B (resultado):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
