
/*
5) Construa um algoritmo que leia 3 notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.
   Fórmula: m = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3)
*/

#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3, p1, p2, p3;
    cout << "Digite a nota 1: ";
    cin >> n1;
    cout << "Digite o peso 1: ";
    cin >> p1;
    cout << "Digite a nota 2: ";
    cin >> n2;
    cout << "Digite o peso 2: ";
    cin >> p2;
    cout << "Digite a nota 3: ";
    cin >> n3;
    cout << "Digite o peso 3: ";
    cin >> p3;
    float media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
    cout << "Média ponderada: " << media << endl;
    return 0;
}
