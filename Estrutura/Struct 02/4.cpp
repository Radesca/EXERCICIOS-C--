/*

4. A empresa Miguel & Miguel Ltda atua no ramo de confecções e deseja armazenar o
preço de custo e o preço de vendas de seus 15 produtos. Escreva um programa que
gere uma estrutura com dois membros: custo e venda. Custo é o preço de custo de
um produto e venda é o valor da venda desse produto. Sabe-se que a política de
Miguel & Miguel é ter um lucro bruto de 50% em cada produto. Você deverá ler o
preço de custo e armazenar na estrutura o preço de venda a partir do lucro
informado. Mostre o seguinte relatório:
Produto Valor Venda
1 35,00
2 28,50
3 110,80
4 ...

*/

#include <iostream>

using namespace std;

struct Produto
{
    float custo;
    float venda;
};

int main()
{
    Produto produtos[15];

    // Leitura dos preços de custo
    for (int i = 0; i < 15; i++)
    {
        cout << "Digite o preço de custo do produto " << i + 1 << ": ";
        cin >> produtos[i].custo;
        produtos[i].venda = produtos[i].custo * 1.5; // Calcula o preço de venda
    }

    // Exibe o relatório
    cout << "Produto\tValor Venda" << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << i + 1 << "\t" << produtos[i].venda << endl;
    }

    return 0;
}