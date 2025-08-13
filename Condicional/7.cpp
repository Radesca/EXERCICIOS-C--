
/*
7. A nota final de um estudante é calculada a partir de três notas atribuídas respectivamente: um trabalho de laboratório, uma avaliação semestral e um exame final. A média das três notas mencionadas obedece aos pesos a seguir:
Nota Peso
Trabalho de laboratório 2
Avaliação semestral 3
Exame final 5
Faça um algoritmo que leia as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela abaixo:
Média ponderada Conceito
8.0  10.0 A
7.0  8.0 B
6.0  7.0 C
5.0  6.0 D
0.0  5.0 E
*/

#include <iostream>
using namespace std;

int main()
{
    double lab, sem, exame;
    cout << "Digite as notas (laboratório, semestral, exame final): ";
    cin >> lab >> sem >> exame;
    double media = (lab * 2 + sem * 3 + exame * 5) / 10.0;
    cout << "Média ponderada: " << media << endl;
    char conceito;
    if (media >= 8.0 && media <= 10.0)
        conceito = 'A';
    else if (media >= 7.0 && media < 8.0)
        conceito = 'B';
    else if (media >= 6.0 && media < 7.0)
        conceito = 'C';
    else if (media >= 5.0 && media < 6.0)
        conceito = 'D';
    else
        conceito = 'E';
    cout << "Conceito: " << conceito << endl;
    return 0;
}
