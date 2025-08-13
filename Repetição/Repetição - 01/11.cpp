
/*
11) Faça um algoritmo que imprima o valor do somatório ∑=200_1 1/y
*/

#include <iostream>
using namespace std;

int main()
{
    double S = 0;
    for (int y = 1; y <= 200; y++)
    {
        S += 1.0 / y;
    }
    cout << "Somatório S = " << S << endl;
    return 0;
}
