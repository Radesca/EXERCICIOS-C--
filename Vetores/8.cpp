/*

8) Faça um algoritmo que leia um vetor de 20 posições (a partir do índice 0) e imprimao na ordem inversa (do 19º até o 0º elemento)

*/

#include <iostream>
using namespace std;

int main()
{
    int VET[20];

    // Leitura do vetor
    for (int i = 0; i < 20; i++)
    {
        cout << "Digite o elemento VET[" << i << "]: ";
        cin >> VET[i];
    }

    // Impressão do vetor na ordem inversa
    cout << "Vetor na ordem inversa: ";
    for (int i = 19; i >= 0; i--)
    {
        cout << VET[i] << " ";
    }
    cout << endl;

    return 0;
}