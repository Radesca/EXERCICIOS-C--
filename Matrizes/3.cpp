/*

3. Construa um algoritmo que leia uma matriz Z de 9 elementos, do tipo inteiro e mostre a quantidade de elementos pares e a quantidade de elementos ímpares armazenados na matriz.

*/

#include <iostream>
using namespace std;

int main()
{
    int Z[3][3];
    int countEven = 0, countOdd = 0;

    // Leitura da matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento Z[" << i << "][" << j << "]: ";
            cin >> Z[i][j];
            // Contagem de elementos pares e ímpares
            if (Z[i][j] % 2 == 0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }
    }

    // Resultados
    cout << "Quantidade de elementos pares: " << countEven << endl;
    cout << "Quantidade de elementos impares: " << countOdd << endl;

    return 0;
}
