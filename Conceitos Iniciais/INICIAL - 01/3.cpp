
/*
3) O custo para montar um espetáculo teatral é de R$1500,00.
    Cláudio precisa saber quantos ingressos ele deverá vender ao preço de R$10,00 para, pelo menos, cobrir os custos do espetáculo.
*/
#include <iostream>
using namespace std;

int main()
{
    float custo = 1500.0;
    float preco_ingresso = 10.0;
    int ingressos = (int)(custo / preco_ingresso);
    if (custo > ingressos * preco_ingresso)
        ingressos++;
    cout << "Cláudio deverá vender pelo menos " << ingressos << " ingressos." << endl;
    return 0;
}
