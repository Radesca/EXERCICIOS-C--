/*

5) Escreva um algoritmo que leia um vetor de 10 elementos do tipo real e:

a) Mostre a quantidade de elementos maiores que 100. Se não existir nenhum
elemento, mostre uma mensagem indicando esta situação;

b) Mostre a média entre os elementos menores que 50. Se não existir nenhum
elemento que satisfaça esta condição, mostre uma mensagem indicando tal
situação.

*/

#include <iostream>
using namespace std;

int main()
{
    float VET[10];
    int countMaior100 = 0;
    float somaMenor50 = 0;
    int countMenor50 = 0;

    // Leitura do vetor
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o elemento VET[" << i << "]: ";
        cin >> VET[i];
    }

    // a) Contar elementos maiores que 100
    for (int i = 0; i < 10; i++)
    {
        if (VET[i] > 100)
        {
            countMaior100++;
        }
    }
    if (countMaior100 > 0)
    {
        cout << "Quantidade de elementos maiores que 100: " << countMaior100 << endl;
    }
    else
    {
        cout << "Nao existem elementos maiores que 100." << endl;
    }

    // b) Calcular a média dos elementos menores que 50
    for (int i = 0; i < 10; i++)
    {
        if (VET[i] < 50)
        {
            somaMenor50 += VET[i];
            countMenor50++;
        }
    }
    if (countMenor50 > 0)
    {
        float media = somaMenor50 / countMenor50;
        cout << "Media dos elementos menores que 50: " << media << endl;
    }
    else
    {
        cout << "Nao existem elementos menores que 50." << endl;
    }

    return 0;
}