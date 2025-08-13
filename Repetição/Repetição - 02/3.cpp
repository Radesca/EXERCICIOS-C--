/*
3) Faça um algoritmo que calcule e imprima o seguinte somatório S:
   S = 1/(37*38) + 2/(36*37) + 3/(35*36) + ... + 37/(1*2)
*/

#include <iostream>
using namespace std;

int main()
{
    double S = 0;
    int numerador = 1;
    int d1 = 37, d2 = 38;
    for (int i = 0; i < 37; i++)
    {
        S += (double)numerador / (d1 * d2);
        numerador++;
        d1--;
        d2--;
    }
    cout << "Somatório S = " << S << endl;
    return 0;
}
