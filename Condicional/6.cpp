
/*
6. Escreva um algoritmo que leia três notas de um aluno, calcule e mostre a média aritmética e a mensagem que segue na tabela abaixo:
Média Aritmética Mensagem
0.0 (inclusive) até 3.0 Reprovado
3.0 (inclusive) até 7.0 Exame
7.0 (inclusive) até 10.0 (inclusive) Aprovado
*/

#include <iostream>
using namespace std;

int main()
{
    double n1, n2, n3;
    cout << "Digite as três notas: ";
    cin >> n1 >> n2 >> n3;
    double media = (n1 + n2 + n3) / 3.0;
    cout << "Média: " << media << endl;
    if (media >= 0.0 && media < 3.0)
    {
        cout << "Reprovado" << endl;
    }
    else if (media >= 3.0 && media < 7.0)
    {
        cout << "Exame" << endl;
    }
    else if (media >= 7.0 && media <= 10.0)
    {
        cout << "Aprovado" << endl;
    }
    else
    {
        cout << "Média inválida" << endl;
    }
    return 0;
}
