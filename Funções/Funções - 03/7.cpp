/*

7) A empresa MarcosLar S/A quer realizar um inventário de seus produtos. Sabendo que
existem 30 tipos de produtos diferentes no estoque, faça um programa que leia a
quantidade e o preço de cada produto. Ao final, calcule e mostre o valor total de cada
produto e o valor total do estoque. Utilize vetores para armazenar as informações

*/

#include <iostream>

using namespace std;

// Função para realizar a leitura da quantidade e do preço dos produtos
void leitura(int quantidade[30], float preco[30])
{
    for (int i = 0; i < 30; i++)
    {
        cout << "Digite a quantidade do produto " << i + 1 << ":\n";
        cin >> quantidade[i];
        cout << "Digite o preço do produto " << i + 1 << ":\n";
        cin >> preco[i];
    }
}

// Função para calcular e imprimir o valor total de cada produto e o valor total do estoque
void calcularValores(int quantidade[30], float preco[30])
{
    float valorTotalEstoque = 0;
    for (int i = 0; i < 30; i++)
    {
        float valorTotalProduto = quantidade[i] * preco[i];
        valorTotalEstoque += valorTotalProduto;
        cout << "Valor total do produto " << i + 1 << ": R$ " << valorTotalProduto << "\n";
    }
    cout << "Valor total do estoque: R$ " << valorTotalEstoque << "\n";
}
int main()
{
    int quantidade[30];
    float preco[30];

    // Leitura da quantidade e do preço dos produtos
    leitura(quantidade, preco);

    // Cálculo e impressão dos valores
    calcularValores(quantidade, preco);

    return 0;
}