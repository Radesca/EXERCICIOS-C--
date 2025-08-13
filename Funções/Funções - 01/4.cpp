/*

4) Escreva um programa que leia uma matriz de 3x3, do tipo inteiro. Calcule e mostre:

a) A soma entre os elementos pares;
b) A quantidade de elementos divisíveis por 3;

*/

#include <iostream>

using namespace std;

void leitura(int matriz[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void soma_par(int matriz[3][3])
{
    int soma = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                soma += matriz[i][j];
            }
        }
    }
    cout << "Soma dos elementos pares: " << soma << endl;
}

void cont_div3(int matriz[3][3])
{
    int cont = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] % 3 == 0)
            {
                cont++;
            }
        }
    }
    cout << "Quantidade de elementos divisíveis por 3: " << cont << endl;
}

int main()
{
    int matriz[3][3];
    leitura(matriz);
    soma_par(matriz);
    cont_div3(matriz);
    return 0;
}