/*
2) Escreva um algoritmo para ler o salário de uma pessoa no ano de 2015 e o salário atual.
    Calcule e mostre quantos por cento esta pessoa teve de aumento no período.
*/
#include <iostream>
using namespace std;

int main()
{
    double salario_2015, salario_atual;
    cout << "Salário em 2015: ";
    cin >> salario_2015;
    cout << "Salário atual: ";
    cin >> salario_atual;

    double aumento = salario_atual - salario_2015;
    double percentual = (aumento / salario_2015) * 100.0;

    cout << "Percentual de aumento: " << percentual << "%" << endl;
    return 0;
}
