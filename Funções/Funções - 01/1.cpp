/*

1) Calcular e mostrar a soma e a média entre os elementos do vetor A.

void leitura()
{
    float a[6] = {4, 6, 10, 1, 0, 0}, s = 0;
    int i;
    for (i = 0; i < 6; i++)
    {
        s = s + a[i];
    }
    cout << "\nA soma do vetor: " << s;
    cout << "\nA media do vetor: " << s / 6;
}
main()
{
    leitura();
}

*/

#include <iostream>

using namespace std;

void leitura()
{
    float a[6] = {4, 6, 10, 1, 0, 0}, s = 0;
    int i;
    for (i = 0; i < 6; i++)
    {
        s = s + a[i];
    }
    cout << "\nA soma do vetor: " << s;
    cout << "\nA media do vetor: " << s / 6;
}

int main()
{
    leitura();
    return 0;
}