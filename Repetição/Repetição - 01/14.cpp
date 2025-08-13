
/*
14) A empresa ABC Ltda pretende aumentar o salário de seus funcionários. Construa um algoritmo que efetue o aumento para cada um dos funcionários. O algoritmo deverá solicitar para que o usuário digite o salário do funcionário e o percentual de aumento que será concedido para o funcionário. Finalize o algoritmo quando o salário for igual a -1.
*/

#include <iostream>
using namespace std;

int main()
{
    float salario, percentual, novo_salario;
    int contador = 1;
    while (true)
    {
        cout << "Digite o salário do funcionário " << contador << " (-1 para sair): R$ ";
        cin >> salario;
        if (salario == -1)
            break;
        cout << "Digite o percentual de aumento (%): ";
        cin >> percentual;
        novo_salario = salario * (1 + percentual / 100.0);
        cout << "Novo salário: R$ " << novo_salario << endl;
        contador++;
    }
    return 0;
}
