/*

8. Construa um programa que leia o estoque atual de 3 produtos que
estão armazenados em 4 armazéns e coloque esses dados em uma
matriz 3x4:

           Armazém 1 | Armazém 2 | Armazém 3 | Armazém 4
Produto 1 |200       |250        |100        |180
Produto 2 |100       |90         |150        |100
Produto 3 |300       |400        |500        |100


Calcule e mostre:
a) A quantidade de itens armazenados em cada armazém;
b) Em qual armazém está estocado a maior quantidade do produto 2?c) A quantidade média de itens armazenados pelo Armazém 3.

*/

#include <iostream>

int main()
{
    int estoque[3][4];
    int somaArmazens[4] = {0};
    int maiorProduto2 = 0;
    int armazemMaiorProduto2 = 0;
    float mediaArmazem3 = 0;

    // Leitura dos dados
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << "Digite o estoque do Produto " << (i + 1) << " no Armazém " << (j + 1) << ": ";
            std::cin >> estoque[i][j];
            somaArmazens[j] += estoque[i][j];
        }
    }

    // Cálculo da maior quantidade do produto 2
    for (int j = 0; j < 4; j++)
    {
        if (estoque[1][j] > maiorProduto2)
        {
            maiorProduto2 = estoque[1][j];
            armazemMaiorProduto2 = j;
        }
    }

    // Cálculo da média do Armazém 3
    for (int i = 0; i < 3; i++)
    {
        mediaArmazem3 += estoque[i][2];
    }
    mediaArmazem3 /= 3;

    // Exibição dos resultados
    std::cout << "a) Itens armazenados em cada armazém:\n";
    for (int j = 0; j < 4; j++)
    {
        std::cout << "Armazém " << (j + 1) << ": " << somaArmazens[j] << "\n";
    }

    std::cout << "b) Armazém com maior quantidade do Produto 2: Armazém " << (armazemMaiorProduto2 + 1) << "\n";
    std::cout << "c) Média de itens armazenados pelo Armazém 3: " << mediaArmazem3 << "\n";

    return 0;
}