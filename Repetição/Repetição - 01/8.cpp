
/*
8) Escreva um algoritmo que leia duas notas de 10 alunos. Calcule e mostre:
   a) A média aritmética das duas notas de cada aluno;
   b) A mensagem que está na tabela abaixo:
      Média Aritmética Mensagem
      Até 3.0 Reprovado
      Entre 3.0 e 7.0 Exame
      Acima de 7.0 Aprovado
   c) O total de alunos aprovado;
   d) O total de alunos reprovados;
   e) O total de alunos de exame.
*/

#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2, media;
    int aprovados = 0, reprovados = 0, exame = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite a primeira nota do aluno " << i + 1 << ": ";
        cin >> nota1;
        cout << "Digite a segunda nota do aluno " << i + 1 << ": ";
        cin >> nota2;
        media = (nota1 + nota2) / 2;
        cout << "Média do aluno " << i + 1 << ": " << media << " - ";
        if (media <= 3.0)
        {
            cout << "Reprovado" << endl;
            reprovados++;
        }
        else if (media > 3.0 && media <= 7.0)
        {
            cout << "Exame" << endl;
            exame++;
        }
        else
        {
            cout << "Aprovado" << endl;
            aprovados++;
        }
    }
    cout << "Total de alunos aprovados: " << aprovados << endl;
    cout << "Total de alunos reprovados: " << reprovados << endl;
    cout << "Total de alunos de exame: " << exame << endl;
    return 0;
}
