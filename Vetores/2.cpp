/*

Algoritmo que leia um vetor de 10 elementos reais e mostre:

· A raiz quadrada de cada elemento: sqrt (número);
· O cubo de cada elemento: pow (base, expoente)

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float V[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o elemento V[" << i << "]: ";
        cin >> V[i];
    }

    cout << "Raiz quadrada dos elementos: ";
    for (int i = 0; i < 10; i++)
    {
        cout << sqrt(V[i]) << " ";
    }
    cout << endl;

    cout << "Cubo dos elementos: ";
    for (int i = 0; i < 10; i++)
    {
        cout << pow(V[i], 3) << " ";
    }
    cout << endl;

    return 0;
}