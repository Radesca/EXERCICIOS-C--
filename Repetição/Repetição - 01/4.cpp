
/*
4) Faça um algoritmo que leia a idade de 10 pessoas, calcule e mostre:
   a) A quantidade de pessoas com idade maior ou igual a 18 anos;
   b) A média entre todas as idades;
   c) A média das idades entre 10 e 20 anos.
*/

#include <iostream>
using namespace std;

int main()
{
    int idades[10], maior_18 = 0, soma = 0, soma_10_20 = 0, cont_10_20 = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite a idade da pessoa " << i + 1 << ": ";
        cin >> idades[i];
        soma += idades[i];
        if (idades[i] >= 18)
            maior_18++;
        if (idades[i] >= 10 && idades[i] <= 20)
        {
            soma_10_20 += idades[i];
            cont_10_20++;
        }
    }
    cout << "Quantidade de pessoas com idade >= 18: " << maior_18 << endl;
    cout << "Média entre todas as idades: " << (float)soma / 10 << endl;
    if (cont_10_20 > 0)
        cout << "Média das idades entre 10 e 20 anos: " << (float)soma_10_20 / cont_10_20 << endl;
    else
        cout << "Nenhuma idade entre 10 e 20 anos." << endl;
    return 0;
}
