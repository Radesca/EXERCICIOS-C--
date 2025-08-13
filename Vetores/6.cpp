/*

6) Escreva um algoritmo que leia o vetor de A de 5 elementos reais e o vetor B, do
mesmo tamanho. A seguir gere o vetor C como sendo a soma dos vetores A e B.
Mostre C.

*/

#include <iostream>
using namespace std;

int main()
{
    float A[5], B[5], C[5];

    // Leitura dos vetores A e B
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o elemento A[" << i << "]: ";
        cin >> A[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o elemento B[" << i << "]: ";
        cin >> B[i];
    }

    // Gerar o vetor C como a soma dos vetores A e B
    for (int i = 0; i < 5; i++)
    {
        C[i] = A[i] + B[i];
    }

    // Mostrar o vetor C
    cout << "Vetor C (soma de A e B): ";
    for (int i = 0; i < 5; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}