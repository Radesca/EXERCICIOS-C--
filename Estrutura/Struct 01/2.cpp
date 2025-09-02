/*

2. A escola Ensina Bem deseja armazenar os nomes e as notas dos seus 10
alunos. Para isso é preciso criar uma estrutura com os seguintes dados: nome do aluno, sua 1ª nota e a 2ª nota. Escreva um programa que leia os dados dos 10 alunos, num vetor, calcule e mostre:
a) “Aprovado”, se a média >=7.0;
b) “Exame”, se a média >=5 e <7;
c) “Reprovado”, em caso contrário.

*/

#include <iostream>

using namespace std;

struct Aluno
{
    string nome;
    float nota1;
    float nota2;
};

int main()
{
    Aluno alunos[10];
    float media;

    // Leitura dos dados
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> alunos[i].nome;
        cout << "Digite a 1ª nota de " << alunos[i].nome << ": ";
        cin >> alunos[i].nota1;
        cout << "Digite a 2ª nota de " << alunos[i].nome << ": ";
        cin >> alunos[i].nota2;
    }

    // Cálculo e exibição da situação de cada aluno
    for (int i = 0; i < 10; i++)
    {
        media = (alunos[i].nota1 + alunos[i].nota2) / 2;

        cout << "Situação de " << alunos[i].nome << ": ";
        if (media >= 7.0)
        {
            cout << "Aprovado";
        }
        else if (media >= 5.0 && media < 7.0)
        {
            cout << "Exame";
        }
        else
        {
            cout << "Reprovado";
        }
        cout << endl;
    }

    return 0;
}
