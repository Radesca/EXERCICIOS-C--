/*
4) Construa um algoritmo que calcule e imprima o seguinte somatório:
   S = 50/(2*1) + 49/(2*2) + 48/(2*3) + ... + 1/(2*50)
*/

#include <iostream>
using namespace std;

int main()
{
    double S = 0;
    int numerador = 50;
    for (int i = 1; i <= 50; i++)
    {
        S += (double)numerador / (2 * i);
        numerador--;
    }
    cout << "Somatório S = " << S << endl;
    return 0;
}
