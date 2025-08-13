
/*
16) Construa um algoritmo que leia o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do novo salário.
*/

#include <iostream>
using namespace std;

int main()
{
    float salario, percentual;
    cout << "Digite o salário: R$ ";
    cin >> salario;
    cout << "Digite o percentual de aumento (%): ";
    cin >> percentual;
    cout << "Novo salário: R$ " << salario * (1 + percentual / 100.0) << endl;
    return 0;
}
