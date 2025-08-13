
/*
2. Elabore um algoritmo que leia o sexo de uma pessoa. Se o sexo digitado for “M” ou “F”, imprimir “Sexo válido”, caso contrário imprima “Sexo inválido!”.
*/

#include <iostream>
using namespace std;

int main()
{
    char sexo;
    cout << "Digite o sexo (M/F): ";
    cin >> sexo;
    if (sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f')
    {
        cout << "Sexo válido" << endl;
    }
    else
    {
        cout << "Sexo inválido!" << endl;
    }
    return 0;
}
