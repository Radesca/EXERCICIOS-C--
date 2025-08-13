/*

1) Construa um algoritmo que leia um vetor V de 10 elementos e mostre o valor
absoluto deste vetor. Dica: o valor absoluto de um número negativo é ele mesmo com
o sinal trocado. Para cada valor negativo, multiplique-o por -1 para trocar seu sinal,
transformando-o em positivo; os valores positivos permanecem como estão.
Exemplos: |-2| = 2 |4| = 4

*/

#include <iostream>
using namespace std;

int main()
{
    int V[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o elemento V[" << i << "]: ";
        cin >> V[i];
    }

    cout << "Valores absolutos: ";
    for (int i = 0; i < 10; i++)
    {
        if (V[i] < 0)
        {
            cout << -V[i] << " ";
        }
        else
        {
            cout << V[i] << " ";
        }
    }
    cout << endl;

    return 0;
}