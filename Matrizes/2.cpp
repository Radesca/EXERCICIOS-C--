/*

2. Escreva um algoritmo que leia uma matriz A de 4 x 3, do tipo real.
Calcule e mostre:
a) A média entre todos os elementos;
b) A quantidade de elementos >= 0;
c) A multiplicação entre todos os elementos.

*/

#include <iostream>
using namespace std;

int main()
{
    float A[4][3];
    float sum = 0, product = 1;
    int count = 0;

    // Leitura da matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
            // Soma dos elementos
            sum += A[i][j];
            // Contagem de elementos >= 0
            if (A[i][j] >= 0)
            {
                count++;
            }
            // Multiplicação dos elementos
            product *= A[i][j];
        }
    }

    // Resultados
    cout << "Media dos elementos: " << sum / (4 * 3) << endl;
    cout << "Quantidade de elementos >= 0: " << count << endl;
    cout << "Multiplicacao dos elementos: " << product << endl;

    return 0;
}
