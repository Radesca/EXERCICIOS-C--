/*

2) Escreva um programa que leia um vetor de 10 elementos do tipo real. Calcule e
mostre:

  a) A soma entre os elementos >= 10;
  b) A multiplicação entre os elementos > 0;
  c) A raiz quadrada de cada elemento > 3.

*/

#include <iostream>
#include <cmath> // <math.h> também funciona, mas <cmath> é o padrão C++
using namespace std;

void leitura(float a[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> a[i];
    }
}

void processamento(float a[], int tamanho)
{
    float soma = 0;
    float mult = 1;
    bool temPositivo = false;

    cout << "\nRaiz quadrada dos elementos > 3:\n";
    for (int i = 0; i < tamanho; i++)
    {
        if (a[i] >= 10)
            soma += a[i];

        if (a[i] > 0)
        {
            mult *= a[i];
            temPositivo = true;
        }

        if (a[i] > 3)
            cout << "Raiz quadrada de " << a[i] << ": " << sqrt(a[i]) << endl;
    }

    cout << "\nSoma dos elementos >= 10: " << soma << endl;

    if (temPositivo)
        cout << "Multiplicação dos elementos > 0: " << mult << endl;
    else
        cout << "Nenhum elemento positivo para multiplicar.\n";
}

int main()
{
    const int TAM = 10;
    float vetor[TAM];

    leitura(vetor, TAM);
    processamento(vetor, TAM);

    return 0;
}
