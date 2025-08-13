/*

9) Construa um algoritmo que leia dois vetores de 5 elementos cada um. A seguir gere
um terceiro vetor a partir da intercalação dos dois vetores lidos. Mostre o vetor
gerado.

*/

#include <iostream>
using namespace std;

int main()
{
    int vetor1[5], vetor2[5], vetor3[10];

    // Leitura do primeiro vetor
    cout << "Digite 5 elementos para o primeiro vetor:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor1[i];
    }

    // Leitura do segundo vetor
    cout << "Digite 5 elementos para o segundo vetor:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor2[i];
    }

    // Intercalação dos vetores
    for (int i = 0; i < 5; i++)
    {
        vetor3[i * 2] = vetor1[i];
        vetor3[i * 2 + 1] = vetor2[i];
    }

    // Exibição do vetor gerado
    cout << "Vetor gerado pela intercalação:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << vetor3[i] << " ";
    }
    cout << endl;

    return 0;
}