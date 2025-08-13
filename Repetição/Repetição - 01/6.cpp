
/*
6) Escreva um algoritmo que leia a idade e o peso de 50 pessoas. Calcule e mostre:
   a) A quantidade de pessoas com mais de 50 kg;
   b) A média das idades das pessoas;
   c) A quantidade de pessoas maiores que 18 anos e com peso superior a 55 kg;
   d) A quantidade de pessoas com idade par.
*/

#include <iostream>
using namespace std;

int main()
{
    int idade, soma_idade = 0, mais_50kg = 0, mais_18_55kg = 0, idade_par = 0;
    float peso;
    for (int i = 0; i < 50; i++)
    {
        cout << "Digite a idade da pessoa " << i + 1 << ": ";
        cin >> idade;
        cout << "Digite o peso da pessoa " << i + 1 << ": ";
        cin >> peso;
        soma_idade += idade;
        if (peso > 50)
            mais_50kg++;
        if (idade > 18 && peso > 55)
            mais_18_55kg++;
        if (idade % 2 == 0)
            idade_par++;
    }
    cout << "Quantidade de pessoas com mais de 50 kg: " << mais_50kg << endl;
    cout << "Média das idades: " << (float)soma_idade / 50 << endl;
    cout << "Quantidade de pessoas > 18 anos e peso > 55 kg: " << mais_18_55kg << endl;
    cout << "Quantidade de pessoas com idade par: " << idade_par << endl;
    return 0;
}
