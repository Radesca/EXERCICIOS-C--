/*

13. Construa um programa que leia uma matriz de 2x3, do tipo inteiro. Em
seguida calcule e mostre a quantidade de elementos pares da matriz. Se não encontrar nenhum elemento par, mostre “Não encontrei elemento PAR na
matriz”.

*/

#include <iostream>
using namespace std;

int main()
{
    int matriz[2][3];
    int quantidadePares = 0;

    // Leitura da matriz
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Cálculo da quantidade de elementos pares
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                quantidadePares++;
            }
        }
    }

    // Exibição dos resultados
    if (quantidadePares > 0)
    {
        cout << "Quantidade de elementos pares: " << quantidadePares << endl;
    }
    else
    {
        cout << "Não encontrei elemento PAR na matriz." << endl;
    }

    return 0;
}
