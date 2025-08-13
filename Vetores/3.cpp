/*

3) Faça um algoritmo que:
 a) Leia um número N (apenas uma vez – fora do laço);
 b) Leia um vetor VET de 10 posições do tipo real;
 c) Multiplique cada elemento de VET por N e atualize VET;
 d) Mostre o novo VET

*/

#include <iostream>
using namespace std;

int main()
{
    float VET[10];
    float N;

    cout << "Digite um numero N: ";
    cin >> N;

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o elemento VET[" << i << "]: ";
        cin >> VET[i];
    }

    for (int i = 0; i < 10; i++)
    {
        VET[i] *= N;
    }

    cout << "Novo VET: ";
    for (int i = 0; i < 10; i++)
    {
        cout << VET[i] << " ";
    }
    cout << endl;

    return 0;
}