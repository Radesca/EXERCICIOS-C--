
/*
6) Faça um algoritmo que leia dois números maiores que zero, A e B. Calcule e mostre a exponenciação entre A e B: A^B.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A, B;
    cout << "Digite o valor de A (>0): ";
    cin >> A;
    cout << "Digite o valor de B (>0): ";
    cin >> B;
    cout << "A^B = " << pow(A, B) << endl;
    return 0;
}
