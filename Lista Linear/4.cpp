/*

4. Dada a estrutura abaixo, do tipo Lista Linear com tamanho máximo de 10 posições.
Cada nó da Lista contém a idade e o salário de cada um dos funcionários da empresa.
Calcule e mostre:
0 1 2 3 4 5 6 7 8 9
25
1100
45
2300
18
1000
22
1500
30
1900
20
2000

 ↑
 Final
a. A média entre as idades dos funcionários;
b. Dê um aumento de 5% para os funcionários que recebem salário <= 1500 e
atualize o seu salário na LLS. A cada aumento, mostre o novo salário;
c. A quantidade de funcionários que possuem idade entre >=18 e <=25.

*/

#include <iostream>
#include <string>

using namespace std;

#define MAX 10

struct Funcionario
{
    int idade;
    double salario;
};

struct ListaLinear
{
    Funcionario elementos[MAX];
    int tamanho;

    ListaLinear() : tamanho(0) {}

    bool inserir(const int &idade, const double &salario)
    {
        if (tamanho >= MAX)
            return false; // Lista cheia
        elementos[tamanho++] = {idade, salario};
        return true;
    }

    double mediaIdades()
    {
        if (tamanho == 0)
            return 0.0;
        int soma = 0;
        for (int i = 0; i < tamanho; ++i)
        {
            soma += elementos[i].idade;
        }
        return static_cast<double>(soma) / tamanho;
    }

    void aumentarSalarios()
    {
        for (int i = 0; i < tamanho; ++i)
        {
            if (elementos[i].salario <= 1500)
            {
                elementos[i].salario *= 1.05; // Aumento de 5%
                cout << "Novo salário do funcionário " << i + 1 << ": " << elementos[i].salario << endl;
            }
        }
    }

    int contarFuncionariosIdadeEntre18e25()
    {
        int count = 0;
        for (int i = 0; i < tamanho; ++i)
        {
            if (elementos[i].idade >= 18 && elementos[i].idade <= 25)
                count++;
        }
        return count;
    }
};

int main()
{
    ListaLinear lista;
    int idade;
    double salario;

    cout << "Insira a idade e o salário dos funcionários (digite -1 para idade para parar):" << endl;
    while (true)
    {
        cin >> idade;
        if (idade == -1)
            break;
        cin >> salario;
        if (!lista.inserir(idade, salario))
        {
            cout << "Lista cheia!" << endl;
            break;
        }
    }

    cout << "Média das idades: " << lista.mediaIdades() << endl;

    cout << "Aumentando salários dos funcionários que recebem <= 1500:" << endl;
    lista.aumentarSalarios();

    cout << "Quantidade de funcionários com idade entre 18 e 25: " << lista.contarFuncionariosIdadeEntre18e25() << endl;

    return 0;
}
