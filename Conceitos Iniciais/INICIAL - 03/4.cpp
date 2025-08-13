/*
4) Um carro faz 8,2 km por litro de combustível. Leia a distância até uma cidade, calcule e mostre a quantidade de combustível necessária para realizar uma viagem de ida e volta a esta cidade.
*/

#include <iostream>
using namespace std;

int main()
{
    double distancia, consumo = 8.2;
    cout << "Distância até a cidade (km): ";
    cin >> distancia;

    double total_distancia = distancia * 2;
    double litros_necessarios = total_distancia / consumo;

    cout << "Combustível necessário (litros): " << litros_necessarios << endl;
    return 0;
}
