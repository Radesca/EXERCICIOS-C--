/*

4. Escreva um algoritmo que leia duas matrizes, A e B (3x3) e calcule,
numa matriz R, o quadrado de cada elemento de A somado ao
quadrado de cada elemento de B. Mostre a matriz resultante R. Dica: R[i][j] = A[i][j]**2 + B[i][j]**2

*/

#include <iostream>
using namespace std;

int main()
{
    int A[3][3], B[3][3], R[3][3];

    // Leitura da matriz A
    cout << "Digite os elementos da matriz A (3x3):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    // Leitura da matriz B
    cout << "Digite os elementos da matriz B (3x3):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> B[i][j];
        }
    }

    // Cálculo da matriz R
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            R[i][j] = (A[i][j] * A[i][j]) + (B[i][j] * B[i][j]);
        }
    }

    // Exibição da matriz R
    cout << "Matriz R (resultado):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << R[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
