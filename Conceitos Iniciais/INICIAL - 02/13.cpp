
/*
13) Faça um algoritmo que leia um valor em Real e o valor da cotação do dólar do dia. Calcule e mostre o valor lido em Real transformado para dólares.
*/

#include <iostream>
using namespace std;

int main()
{
    float real, cotacao;
    cout << "Digite o valor em Real: R$ ";
    cin >> real;
    cout << "Digite a cotação do dólar: R$ ";
    cin >> cotacao;
    cout << "Valor em dólares: $" << real / cotacao << endl;
    return 0;
}
