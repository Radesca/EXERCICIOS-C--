/*

1. Escreva um programa que leia uma estrutura, de dois elementos: n1 é
inteiro e n2 é real. Armazene a estrutura num vetor com tamanho de 10
posições. Calcule e mostre:
a) A soma entre os valores ímpares de n1;
b) A média entre os valores de n2;
c) A raiz quadrada de cada valor positivo de n2.

*/

#include <iostream>
#include <cmath>

using namespace std;

struct Numero
{
    int n1;
    float n2;
};

int main()
{
    Numero numeros[10];
    int soma_impares_n1 = 0;
    float soma_n2 = 0.0;
    int count_n2 = 0;

    // Leitura dos dados
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o valor inteiro n1 para a posicao " << i + 1 << ": ";
        cin >> numeros[i].n1;
        cout << "Digite o valor real n2 para a posicao " << i + 1 << ": ";
        cin >> numeros[i].n2;

        // Soma dos valores ímpares de n1
        if (numeros[i].n1 % 2 != 0)
        {
            soma_impares_n1 += numeros[i].n1;
        }

        // Soma dos valores de n2 e contagem
        soma_n2 += numeros[i].n2;
        count_n2++;
    }

    // Cálculo da média de n2
    float media_n2 = soma_n2 / count_n2;

    // Exibição dos resultados
    cout << "\nSoma dos valores ímpares de n1: " << soma_impares_n1 << endl;
    cout << "Média dos valores de n2: " << media_n2 << endl;

    cout << "Raiz quadrada dos valores positivos de n2:\n";
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i].n2 > 0)
        {
            cout << "Raiz quadrada de " << numeros[i].n2 << " é " << sqrt(numeros[i].n2) << endl;
        }
    }

    return 0;
}
