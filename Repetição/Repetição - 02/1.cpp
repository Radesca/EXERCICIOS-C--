/*
1) Faça um algoritmo que calcule e imprima o seguinte somatório para os 100 primeiros termos da série:
   S = 1/5 + 2/8 + 3/11 + ...
*/

#include <iostream>
using namespace std;

int main()
{
    double S = 0;
    int numerador = 1, denominador = 5;
    for (int i = 0; i < 100; i++)
    {
        S += (double)numerador / denominador;
        numerador++;
        denominador += 3;
    }
    cout << "Somatório S = " << S << endl;
    return 0;
}
