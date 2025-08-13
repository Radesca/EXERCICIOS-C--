
/*
7) Faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
   a) A idade dessa pessoa;
   b) Quantos anos essa pessoa terá em 2030.
*/

#include <iostream>
using namespace std;

int main()
{
    int ano_nasc, ano_atual;
    cout << "Digite o ano de nascimento: ";
    cin >> ano_nasc;
    cout << "Digite o ano atual: ";
    cin >> ano_atual;
    cout << "Idade: " << ano_atual - ano_nasc << " anos" << endl;
    cout << "Idade em 2030: " << 2030 - ano_nasc << " anos" << endl;
    return 0;
}
