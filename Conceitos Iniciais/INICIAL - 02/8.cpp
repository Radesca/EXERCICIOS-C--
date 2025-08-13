
/*
8) Faça um algoritmo que leia o custo de um espetáculo teatral e o preço do convite desse espetáculo. Calcule e mostre a quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado.
*/

#include <iostream>
using namespace std;

int main()
{
    float custo, preco;
    cout << "Digite o custo do espetáculo: R$ ";
    cin >> custo;
    cout << "Digite o preço do convite: R$ ";
    cin >> preco;
    int qtd = (int)(custo / preco);
    if (custo > qtd * preco)
        qtd++;
    cout << "Quantidade de convites necessários: " << qtd << endl;
    return 0;
}
