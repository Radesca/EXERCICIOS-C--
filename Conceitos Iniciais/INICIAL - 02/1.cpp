
/*
1) Construa um algoritmo que leia 4 números reais e mostre o somatório entre eles.
*/

#include <iostream>
using namespace std;

int main()
{
    float num, soma = 0;
    for (int i = 1; i <= 4; i++)
    {
        cout << "Digite o " << i << "º número: ";
        cin >> num;
        soma += num;
    }
    cout << "Somatório: " << soma << endl;
    return 0;
}
