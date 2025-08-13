
/*
10) Igor precisa comprar um tênis para fazer caminhada.
    A loja Pé Quente ofereceu um tênis por R$209,00 para parcelar em 4 vezes, porém se ele pagar à vista, receberá um desconto de 8%.
    Calcule:
    a) O valor de cada parcela sem o desconto;
    b) O valor do tênis à vista.
*/
#include <iostream>
using namespace std;

int main()
{
    float preco = 209.0;
    float parcela = preco / 4.0;
    float preco_vista = preco * 0.92;
    cout << "Valor de cada parcela: R$ " << parcela << endl;
    cout << "Valor do tênis à vista: R$ " << preco_vista << endl;
    return 0;
}
