/*
12. Escreva um algoritmo que leia um número real e, a seguir, calcule e mostre:
a) O número multiplicado por 10;
b) O número dividido por um valor a ser digitado pelo usuário. Se o valor digitado for igual a 0, mostre mensagem “Valor não pode ser nulo” e finalize o algoritmo.
c) A raiz quadrada do número digitado. Se o valor digitado for negativo, mostre mensagem “Valor não pode ser negativo” e finalize o algoritmo. Para o cálculo da raiz quadrada, utilize a função sqrt(num)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num, divisor;
    cout << "Digite um número real: ";
    cin >> num;
    cout << "Multiplicado por 10: " << num * 10 << endl;

    cout << "Digite um valor para dividir: ";
    cin >> divisor;
    if (divisor == 0)
    {
        cout << "Valor não pode ser nulo" << endl;
        return 0;
    }
    cout << "Divisão: " << num / divisor << endl;

    if (num < 0)
    {
        cout << "Valor não pode ser negativo" << endl;
        return 0;
    }
    cout << "Raiz quadrada: " << sqrt(num) << endl;
    return 0;
}
