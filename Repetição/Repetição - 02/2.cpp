/*
2) Construa um algoritmo que calcule e imprima o somatório dos 30 primeiros termos da série:
   S = 10/480 + 11/475 + 12/470 + 13/465 + ...
*/

#include <iostream>
using namespace std;

int main()
{
    double S = 0;
    int numerador = 10, denominador = 480;
    for (int i = 0; i < 30; i++)
    {
        S += (double)numerador / denominador;
        numerador++;
        denominador -= 5;
    }
    cout << "Somatório S = " << S << endl;
    return 0;
}
