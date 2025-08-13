/*

3) Elabore um algoritmo que leia uma matriz de 4x4, calcule e mostre:

a) A soma dos elementos ímpares maiores que N, passado por argumento;
b) O menor valor da matriz;
c) O maior valor da matriz.

*/

#include <iostream>

using namespace std;

void leitura(int M[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Digite o [" << i + 1 << "]" << "[" << j + 1 << "]";
            cin >> M[i][j];
        }
    }
}

int parametro()
{
    int N;
    cout << "\nDigite o parametro N: ";
    cin >> N;
    return N; // <--- corrigido
}

int somaimpar(int M[4][4], int N)
{
    int soma = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (M[i][j] % 2 != 0 && M[i][j] > N)
            {
                soma += M[i][j];
            }
        }
    }

    cout << "\nA Soma dos elementros impares maiores que N: \n"
         << soma << endl;
    return soma;
}

int menor(int M[4][4])
{
    int menor = M[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (M[i][j] < menor)
            {
                menor = M[i][j];
            }
        }
    }
    cout << "\nO menor valor da matriz:\n"
         << menor;
    return menor;
}

int maior(int M[4][4])
{
    int maior = M[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (M[i][j] > maior)
            {
                maior = M[i][j];
            }
        }
    }
    cout << "\nO maior valor da matriz: \n"
         << maior;
    return maior;
}

int main()
{
    int M[4][4];
    int N;

    leitura(M);
    N = parametro();

    somaimpar(M, N);
    menor(M);
    maior(M);
}
