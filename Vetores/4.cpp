/*

e leia um vetor de 30 elementos do tipo inteiro e:
 a) Mostre a quantidade de elementos divisíveis por 5;
 b) Mostre em quais posições os elementos ímpares estão armazenados

*/
#include <iostream>
using namespace std;

int main()
{
    int V[30];
    int countDiv5 = 0;

    // Leitura do vetor
    for (int i = 0; i < 30; i++)
    {
        cout << "Digite o elemento V[" << i << "]: ";
        cin >> V[i];
    }

    // a) Contar elementos divisíveis por 5
    for (int i = 0; i < 30; i++)
    {
        if (V[i] % 5 == 0)
        {
            countDiv5++;
        }
    }
    cout << "Quantidade de elementos divisiveis por 5: " << countDiv5 << endl;

    // b) Mostrar posições dos elementos ímpares
    cout << "Posicoes dos elementos impares: ";
    for (int i = 0; i < 30; i++)
    {
        if (V[i] % 2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}