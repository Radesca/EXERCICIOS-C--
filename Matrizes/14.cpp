/*

14. Elabore um programa que leia uma matriz M de 09 elementos do tipo real. Guarde a diagonal principal dessa matriz num vetor V. Mostre V.

*/

#include <iostream>
using namespace std;

int main()
{
    float M[3][3], V[3];
    // Leitura da matriz M
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento [" << i << "][" << j << "] da matriz M: ";
            cin >> M[i][j];
        }
    }

    // Armazenando a diagonal principal em V
    for (int i = 0; i < 3; i++)
    {
        V[i] = M[i][i];
    }

    // Exibindo o vetor V
    cout << "Vetor V (diagonal principal):" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << V[i] << " ";
    }
    cout << endl;

    return 0;
}
