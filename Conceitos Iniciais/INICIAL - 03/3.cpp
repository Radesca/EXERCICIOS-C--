/*
3) Maria foi ao mercado comprar café, leite e pão. Escreva um algoritmo que leia a quantidade comprada e o valor de cada item. Calcule e mostre o valor total gasto por Maria.
*/

#include <iostream>
using namespace std;

int main()
{
    int qtd_cafe, qtd_leite, qtd_pao;
    double preco_cafe, preco_leite, preco_pao;
    cout << "Quantidade de café: ";
    cin >> qtd_cafe;
    cout << "Preço do café: ";
    cin >> preco_cafe;
    cout << "Quantidade de leite: ";
    cin >> qtd_leite;
    cout << "Preço do leite: ";
    cin >> preco_leite;
    cout << "Quantidade de pão: ";
    cin >> qtd_pao;
    cout << "Preço do pão: ";
    cin >> preco_pao;

    double total = qtd_cafe * preco_cafe + qtd_leite * preco_leite + qtd_pao * preco_pao;
    cout << "Valor total gasto: R$ " << total << endl;
    return 0;
}
