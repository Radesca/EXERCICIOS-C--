/*

2. Escreva um programa que crie uma estrutura com três membros: num1 (inteiro),
num2 (inteiro) e status (booleano). Armazene a estrutura num vetor de 5 elementos.
Escreva um programa que leia apenas num1 e num2. A seguir, armazene true em
status se (num1 + num2) > = 5; caso contrário, armazene false. Mostre a soma (num1
+ num2) e o status.

*/

#include <iostream>

using namespace std;

struct Data
{
    int num1;
    int num2;
    bool status;
};

int main()
{
    Data arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o valor de num1: ";
        cin >> arr[i].num1;
        cout << "Digite o valor de num2: ";
        cin >> arr[i].num2;

        int soma = arr[i].num1 + arr[i].num2;
        arr[i].status = (soma >= 5);

        cout << "Soma: " << soma << ", Status: " << (arr[i].status ? "true" : "false") << endl;
    }

    return 0;
}
