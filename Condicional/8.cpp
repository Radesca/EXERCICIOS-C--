
/*
8. Faça um algoritmo que leia um valor do tipo inteiro e verifique se esse número é par ou ímpar.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Digite um número inteiro: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "O número é par." << endl;
    }
    else
    {
        cout << "O número é ímpar." << endl;
    }
    return 0;
}
