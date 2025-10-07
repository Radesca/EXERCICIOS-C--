/*

Escreva um algoritmo que leia as duas notas semestrais de 10 alunos e armazene-as
em uma matriz 10x2. A seguir, calcule a média dos 10 alunos e armazene em um vetor
de 10 posições. Imprima as notas, as médias e a situação de cada aluno: “Aprovado”
para médias >= 7.0 ou “Reprovado” para médias < 7.0.

*/

#include <iostream>

using namespace std;

// Função para realizar a leitura das notas dos alunos
void leitura(float V[10][2])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Digite a nota " << j + 1 << " do aluno " << i + 1 << ":\n";
            cin >> V[i][j];
        }
    }
}

// Função para calcular a média das notas de cada aluno.
void calcularMedia(float V[10][2], float M[10])
{
    for (int i = 0; i < 10; i++)
    {
        M[i] = (V[i][0] + V[i][1]) / 2;
    }
}

// Função para imprimir os resultados
void imprimirResultados(float V[10][2], float M[10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Aluno " << i + 1 << ":\n";
        cout << "Nota 1: " << V[i][0] << "\n";
        cout << "Nota 2: " << V[i][1] << "\n";
        cout << "Média: " << M[i] << "\n";
        cout << "Situação: " << (M[i] >= 7.0 ? "Aprovado" : "Reprovado") << "\n";
        cout << "-------------------------\n";
    }
}

int main()
{
    float V[10][2], M[10];

    // Leitura das notas
    leitura(V);

    // Cálculo das médias
    calcularMedia(V, M);

    // Impressão dos resultados
    imprimirResultados(V, M);

    return 0;
}
