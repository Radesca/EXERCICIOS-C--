/*

3) Escreva um programa que leia um vetor de 8 elementos inteiros. Calcule e mostre:

 a) O maior elemento;
 b) O menor elemento;
 c) Pegue o último elemento do vetor e multiplique todos os elementos por ele. Mostre a multiplicação.

*/

#include <iostream>

using namespace std;

void leitura(int a[8])
{
    for (int i = 0; i < 8; i++)
    {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> a[i];
    }
}

void maior_elemento(int a[8])
{
    int maior = a[0];
    for (int i = 1; i < 8; i++)
    {
        if (a[i] > maior)
            maior = a[i];
    }
    cout << "Maior elemento: " << maior << endl;
}

void menor_elemento(int a[8])
{
    int menor = a[0];
    for (int i = 1; i < 8; i++)
    {
        if (a[i] < menor)
            menor = a[i];
    }
    cout << "Menor elemento: " << menor << endl;
}

void multiplicar_por_ultimo(int a[8])
{
    int ultimo = a[7];
    cout << "Multiplicação dos elementos pelo último elemento (" << ultimo << "):" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] * ultimo << " ";
    }
    cout << endl;
}

int main()
{
    int vetor[8];

    leitura(vetor);
    maior_elemento(vetor);
    menor_elemento(vetor);
    multiplicar_por_ultimo(vetor);

    return 0;
}