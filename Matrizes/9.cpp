/*

9. A empresa A & B pretende perfurar um poço artesiano num terreno de 25 m2. Para isso contratou uma pessoa que esquadrinhou o terreno e levantou as
propriedades orgânicas do solo com o objetivo de encontrar água potável.

• Em cada um dos quadros existe um valor obtido a partir da análise elaborada pelo perfurador. Escreva um programa que indique o melhor local do terreno para perfurar o poço e encontrar água em abundância.

• Para efeito dos cálculos, que indicará o melhor local para a perfuração, você deverá considerar:

a) O valor da propriedade orgânica deve estar entre 50 e 95; E
b) A raiz quadrada de cada propriedade orgânica não pode estar na faixa entre 9 e 10.

*/

#include <iostream>
#include <cmath>

int main()
{
    int terreno[5][5];
    int melhorX = -1, melhorY = -1;

    // Leitura dos dados
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << "Digite o valor da propriedade orgânica no quadro (" << i + 1 << ", " << j + 1 << "): ";
            std::cin >> terreno[i][j];
        }
    }

    // Cálculo do melhor local para perfuração
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int valor = terreno[i][j];
            float raiz = std::sqrt(valor);

            if (valor >= 50 && valor <= 95 && (raiz < 9 || raiz > 10))
            {
                melhorX = i;
                melhorY = j;
            }
        }
    }

    // Exibição do resultado
    if (melhorX != -1 && melhorY != -1)
    {
        std::cout << "Melhor local para perfuração: (" << melhorX + 1 << ", " << melhorY + 1 << ")\n";
    }
    else
    {
        std::cout << "Nenhum local adequado encontrado.\n";
    }

    return 0;
}