/*

4) Elabore um algoritmo que leia um vetor de 10 números reais, calcule e mostre:

a) A soma entre os números maiores que X, passado por argumento;
b) A média entre os números lidos.

*/

#include <iostream>

using namespace std;

void leitura(float V[10])
{

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o numero " << i + 1 << " do vetor:\n";
        cin >> V[i];
    }
}

int parametro()
{
    float X;
    cout << "\nDigite o parametro X: \n";
    cin >> X;
    return X; // <--- corrigido
}

int soma(float V[10], float X)
{
    float soma = 0;
    for (int i = 0; i < 10; i++)
    {
        if (V[i] > X)
        {
            soma += V[i];
        }
    }
    cout << "\nA soma entre os números maiores que X:\n"
         << soma;
    return soma;
}

int media(float V[10])
{
    float media = 0;
    for (int i = 0; i < 10; i++)
    {
        media += V[i];
    }

    media = (media / 10);

    cout << "\nA media entre os numeros lidos:\n"
         << media;
    return media;
}

int main()
{
    float V[10];
    float X;

    leitura(V);
    X = parametro();

    soma(V, X);
    media(V);
}
