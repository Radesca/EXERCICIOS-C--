
/*
2) Elabore um algoritmo que leia 10 números reais, calcule e mostre:
   a) A soma entre os números maiores que 30;
   b) A média entre os números lidos.
*/

#include <iostream>
using namespace std;

int main()
{
    float numeros[10], soma_maior_30 = 0, soma_total = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o número " << i + 1 << ": ";
        cin >> numeros[i];
        soma_total += numeros[i];
        if (numeros[i] > 30)
            soma_maior_30 += numeros[i];
    }
    cout << "Soma dos números maiores que 30: " << soma_maior_30 << endl;
    cout << "Média dos números lidos: " << soma_total / 10 << endl;
    return 0;
}
