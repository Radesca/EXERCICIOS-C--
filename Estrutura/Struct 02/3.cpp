/*

3. Escreva um programa que gere a seguinte estrutura: N1 real e N2 inteiro. Guarde a
estrutura num vetor de 10 elementos e, a seguir, calcule e mostre:
a. A raiz quadrada de cada elemento de N1. Não se esqueça de que N1
precisa ser >= 0;
b. A soma entre todos os N2;
c. Multiplique cada elemento de N1 pelo elemento N2 que está
armazenado na última posição do vetor.

*/

#include <iostream>
#include <cmath>

using namespace std;

struct Element
{
    float N1;
    int N2;
};

int main()
{
    Element vetor[10];
    float somaN1 = 0;
    int somaN2 = 0;

    // Leitura dos elementos
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o valor de N1 (real) para o elemento " << i + 1 << ": ";
        cin >> vetor[i].N1;
        cout << "Digite o valor de N2 (inteiro) para o elemento " << i + 1 << ": ";
        cin >> vetor[i].N2;
    }

    // Cálculos
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i].N1 >= 0)
        {
            cout << "Raiz quadrada de N1[" << i << "]: " << sqrt(vetor[i].N1) << endl;
        }
        else
        {
            cout << "N1[" << i << "] é negativo, não é possível calcular a raiz quadrada." << endl;
        }
        somaN2 += vetor[i].N2;
    }

    cout << "Soma de todos os N2: " << somaN2 << endl;

    for (int i = 0; i < 10; i++)
    {
        vetor[i].N1 *= vetor[9].N2;
    }

    return 0;
}