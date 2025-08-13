/*

13) Escreva um algoritmo que leia um vetor de 10 elementos, do tipo inteiro. Calcule e
mostre os números superiores a 50 e suas respectivas posições. Mostrar mensagem se
não existir nenhum número nessa condição.

*/

#include <iostream>
using namespace std;

int main()
{
    int vetor[10];
    bool encontrou = false;

    // Leitura do vetor
    cout << "Digite 10 elementos inteiros:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Verificação dos elementos
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > 50)
        {
            cout << "Elemento " << vetor[i] << " encontrado na posição " << i << endl;
            encontrou = true;
        }
    }

    if (!encontrou)
    {
        cout << "Nenhum elemento superior a 50 foi encontrado." << endl;
    }

    return 0;
}
