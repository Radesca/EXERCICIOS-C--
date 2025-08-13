/*
1) Escreva um algoritmo que leia as idades de uma mãe e de sua filha e o ano atual.
    Calcule e mostre o ano em que a filha terá a idade atual de sua mãe.
*/
#include <iostream>
using namespace std;

int main()
{
    int idade_mae, idade_filha, ano_atual;
    cout << "Idade da mãe: ";
    cin >> idade_mae;
    cout << "Idade da filha: ";
    cin >> idade_filha;
    cout << "Ano atual: ";
    cin >> ano_atual;

    int diferenca = idade_mae - idade_filha;
    int ano_futura = ano_atual + diferenca;

    cout << "Ano em que a filha terá a idade atual da mãe: " << ano_futura << endl;
    return 0;
}
