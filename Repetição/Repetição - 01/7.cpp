
/*
7) Faça um algoritmo que leia 10 números inteiros e a seguir:
   a) Calcule e mostre a quantidade de elementos divisíveis por 3;
   b) Calcule e mostre a quantidade de elementos ímpares e maiores que 11.
*/

#include <iostream>
using namespace std;

int main()
{
    int numeros[10], div3 = 0, imp_maior_11 = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o número " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] % 3 == 0)
            div3++;
        if (numeros[i] % 2 != 0 && numeros[i] > 11)
            imp_maior_11++;
    }
    cout << "Quantidade de elementos divisíveis por 3: " << div3 << endl;
    cout << "Quantidade de elementos ímpares e maiores que 11: " << imp_maior_11 << endl;
    return 0;
}
