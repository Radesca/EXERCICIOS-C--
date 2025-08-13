
/*
15) Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofre um aumento de 25%. Experimente multiplicar o salário por 1.25.
*/

#include <iostream>
using namespace std;

int main()
{
    float salario;
    cout << "Digite o salário: R$ ";
    cin >> salario;
    cout << "Novo salário: R$ " << salario * 1.25 << endl;
    return 0;
}
