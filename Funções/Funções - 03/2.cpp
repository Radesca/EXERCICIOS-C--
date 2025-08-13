/*

2) Faça um algoritmo que leia um vetor de 10 posições, calcule e mostre:

a) Quantos elementos são maiores que seus respectivos índices;
b) A quantidade de números negativos. Mostre uma mensagem se não houver número
negativo;

*/

#include <iostream>
using namespace std;

void leitura(int M[10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> M[i];
    }
}

int maior_indice(int M[10])
{
    int contador = 0;
    for (int i = 0; i < 10; i++)
    {
        if (M[i] > i)
        {
            contador++;
        }
    }
    return contador;
}

int negativo(int M[10])
{
    int contadornegativo = 0;
    for (int i = 0; i < 10; i++)
    {
        if (M[i] < 0)
        {
            contadornegativo++;
        }
    }
    return contadornegativo;
}

int main()
{
    int M[10];
    leitura(M);

    int qtd_maior = maior_indice(M);
    int qtd_negativo = negativo(M);

    cout << "\nQuantidade de elementos maiores que seus indices: " << qtd_maior << endl;

    if (qtd_negativo > 0)
        cout << "Quantidade de numeros negativos: " << qtd_negativo << endl;
    else
        cout << "Nao tem numero negativo." << endl;

    return 0;
}
