
/*
1) Construa um algoritmo que leia 10 números do tipo real. Calcule e mostre:
   a) A quantidade de números positivos;
   b) A quantidade de números negativos;
   c) A quantidade de números nulos.
*/

#include <iostream>
using namespace std;

int main()
{
    float numeros[10];
    int positivos = 0, negativos = 0, nulos = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o número " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] > 0)
            positivos++;
        else if (numeros[i] < 0)
            negativos++;
        else
            nulos++;
    }
    cout << "Quantidade de números positivos: " << positivos << endl;
    cout << "Quantidade de números negativos: " << negativos << endl;
    cout << "Quantidade de números nulos: " << nulos << endl;
    return 0;
}
