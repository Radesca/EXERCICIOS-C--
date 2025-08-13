/*
6) Um material radioativo perde metade de sua massa a cada 50 segundos.
   A partir da massa inicial de 4850g, construir um programa que determine o tempo necessário para que essa massa se torne menor do que 0.5g.
   Mostre a massa inicial, a massa final e o tempo.
*/

#include <iostream>
using namespace std;

int main()
{
    double massa = 4850;
    int tempo = 0;
    double massa_inicial = massa;
    while (massa >= 0.5)
    {
        massa /= 2;
        tempo += 50;
    }
    cout << "Massa inicial: " << massa_inicial << "g" << endl;
    cout << "Massa final: " << massa << "g" << endl;
    cout << "Tempo necessário: " << tempo << " segundos" << endl;
    return 0;
}
