/*

3. Faça um programa que crie a seguinte estrutura para 50 funcionários da
empresa ABC: código do funcionário, salário e nrfilhos. Armazene a estrutura num vetor. Calcule e mostre:

a) A média salarial da empresa;
b) A média do nr de filhos entre todos os funcionários;
c) O código do funcionário com o maior salário;
d) O código do funcionário com o maior número de filhos

*/

#include <iostream>
using namespace std;

struct Funcionario
{
    int codigo;
    float salario;
    int nrfilhos;
};

int main()
{
    const int N = 50;
    Funcionario funcionarios[N];

    float somaSalarios = 0;
    int somaFilhos = 0;

    int codMaiorSalario, codMaisFilhos;
    float maiorSalario = -1;
    int maisFilhos = -1;

    // Leitura dos dados
    for (int i = 0; i < N; i++)
    {
        cout << "Digite o codigo do funcionario " << i + 1 << ": ";
        cin >> funcionarios[i].codigo;

        cout << "Digite o salario do funcionario " << i + 1 << ": ";
        cin >> funcionarios[i].salario;

        cout << "Digite o numero de filhos do funcionario " << i + 1 << ": ";
        cin >> funcionarios[i].nrfilhos;

        cout << "-----------------------------" << endl;

        // Acumulando valores
        somaSalarios += funcionarios[i].salario;
        somaFilhos += funcionarios[i].nrfilhos;

        // Maior salário
        if (funcionarios[i].salario > maiorSalario)
        {
            maiorSalario = funcionarios[i].salario;
            codMaiorSalario = funcionarios[i].codigo;
        }

        // Mais filhos
        if (funcionarios[i].nrfilhos > maisFilhos)
        {
            maisFilhos = funcionarios[i].nrfilhos;
            codMaisFilhos = funcionarios[i].codigo;
        }
    }

    // Resultados
    cout << "\n===== RESULTADOS =====" << endl;
    cout << "a) Media salarial da empresa: R$ " << somaSalarios / N << endl;
    cout << "b) Media de filhos dos funcionarios: " << (float)somaFilhos / N << endl;
    cout << "c) Codigo do funcionario com maior salario: " << codMaiorSalario << endl;
    cout << "d) Codigo do funcionario com maior numero de filhos: " << codMaisFilhos << endl;

    return 0;
}
