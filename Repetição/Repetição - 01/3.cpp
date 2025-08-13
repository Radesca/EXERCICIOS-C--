
/*
3) Faça um algoritmo que leia 20 números inteiros e a seguir:
   a) Calcule e mostre a quantidade de elementos ímpares;
   b) Calcule e mostre a soma entre os elementos pares e >= a 12.
*/

#include <iostream>
using namespace std;

int main()
{
    int numeros[20], impares = 0, soma_pares_12 = 0;
    for (int i = 0; i < 20; i++)
    {
        cout << "Digite o número " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] % 2 != 0)
            impares++;
        if (numeros[i] % 2 == 0 && numeros[i] >= 12)
            soma_pares_12 += numeros[i];
    }
    cout << "Quantidade de elementos ímpares: " << impares << endl;
    cout << "Soma dos elementos pares e >= 12: " << soma_pares_12 << endl;
    return 0;
}
