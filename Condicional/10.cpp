
/*
10. Faça um algoritmo que leia: número da conta do cliente, saldo, total de débitos e total de créditos. Em seguida, calcule e imprima o saldo atual do cliente. Utilize a seguinte fórmula: saldo atual = saldo - débito + crédito. Verifique se saldo atual é maior ou igual a zero e escreva a mensagem 'Saldo Positivo', senão escreva a mensagem 'Saldo Negativo'.
*/

#include <iostream>
using namespace std;

int main()
{
    int conta;
    double saldo, debito, credito;
    cout << "Número da conta: ";
    cin >> conta;
    cout << "Saldo: ";
    cin >> saldo;
    cout << "Total de débitos: ";
    cin >> debito;
    cout << "Total de créditos: ";
    cin >> credito;
    double saldo_atual = saldo - debito + credito;
    cout << "Saldo atual: " << saldo_atual << endl;
    if (saldo_atual >= 0)
    {
        cout << "Saldo Positivo" << endl;
    }
    else
    {
        cout << "Saldo Negativo" << endl;
    }
    return 0;
}
