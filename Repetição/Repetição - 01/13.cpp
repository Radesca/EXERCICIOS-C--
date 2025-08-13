
/*
13) Faça um algoritmo que calcule e imprima o valor do número π, utilizando a seguinte série:
    π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - ...
    Para garantir o número 3.1415 execute a rotina, pelo menos, 5000 vezes.
*/

#include <iostream>
using namespace std;

int main()
{
    double pi = 0;
    int sinal = 1;
    for (int i = 1, termo = 1; i <= 5000; i++, termo += 2)
    {
        pi += sinal * (4.0 / termo);
        sinal *= -1;
    }
    cout << "Valor aproximado de pi: " << pi << endl;
    return 0;
}
