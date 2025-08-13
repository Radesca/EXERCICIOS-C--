
/*
5) Faça um algoritmo que leia 15 números inteiros e mostre:
   a) A quantidade de números entre 30 e 90 (inclusive os extremos);
   b) O somatório dos números negativos;
   c) A quantidade de números ímpares.
*/

#include <iostream>
using namespace std;

int main()
{
    int numeros[15], entre_30_90 = 0, soma_negativos = 0, impares = 0;
    for (int i = 0; i < 15; i++)
    {
        cout << "Digite o número " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] >= 30 && numeros[i] <= 90)
            entre_30_90++;
        if (numeros[i] < 0)
            soma_negativos += numeros[i];
        if (numeros[i] % 2 != 0)
            impares++;
    }
    cout << "Quantidade de números entre 30 e 90: " << entre_30_90 << endl;
    cout << "Somatório dos números negativos: " << soma_negativos << endl;
    cout << "Quantidade de números ímpares: " << impares << endl;
    return 0;
}
