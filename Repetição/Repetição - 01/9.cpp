
/*
9) A empresa Igual Diferente S/A deseja conceder um aumento salarial de 5% para todos os seus 20 funcionários.
   Escreva um algoritmo que leia o salário de cada funcionário, a seguir calcule e mostre o novo salário.
*/

#include <iostream>
using namespace std;

int main()
{
    float salario, novo_salario;
    for (int i = 0; i < 20; i++)
    {
        cout << "Digite o salário do funcionário " << i + 1 << ": R$ ";
        cin >> salario;
        novo_salario = salario * 1.05;
        cout << "Novo salário: R$ " << novo_salario << endl;
    }
    return 0;
}
