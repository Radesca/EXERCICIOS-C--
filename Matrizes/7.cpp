/*

7. Faça um algoritmo que leia uma matriz de 5x5, do tipo real. Calcule e mostre:
a) A média entre os elementos da diagonal secundária (i + j = dimensão – 1);
b) A média entre os elementos da diagonal principal (i = j).

*/

#include <iostream>
using namespace std;

int main()
{
    float M[5][5];
    float sumPrimary = 0, sumSecondary = 0;
    int countPrimary = 0, countSecondary = 0;

    // Leitura da matriz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite o elemento M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }

    // Cálculo da soma e contagem dos elementos da diagonal principal
    for (int i = 0; i < 5; i++)
    {
        sumPrimary += M[i][i];
        countPrimary++;
    }

    // Cálculo da soma e contagem dos elementos da diagonal secundária
    for (int i = 0; i < 5; i++)
    {
        sumSecondary += M[i][4 - i];
        countSecondary++;
    }

    // Cálculo e exibição das médias
    cout << "Média dos elementos da diagonal principal: " << (sumPrimary / countPrimary) << endl;
    cout << "Média dos elementos da diagonal secundária: " << (sumSecondary / countSecondary) << endl;

    return 0;
}
