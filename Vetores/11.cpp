/*

11) Dado um vetor B com 30 valores reais, fazer um algoritmo que calcule o seguinte
somatório:
S = (b0 – b29 )3
 + (b1 – b28 )3
 + (b2 – b27)
3
 + ... + (b14 – b15)
3

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float B[30];
    float S = 0;

    // Leitura do vetor B
    cout << "Digite 30 elementos reais para o vetor B:" << endl;
    for (int i = 0; i < 30; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> B[i];
    }

    // Cálculo do somatório
    for (int i = 0; i < 15; i++)
    {
        S += pow(B[i] - B[29 - i], 3);
    }

    // Exibição do resultado
    cout << "O valor do somatório S é: " << S << endl;

    return 0;
}