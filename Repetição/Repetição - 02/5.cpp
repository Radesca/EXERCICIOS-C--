/*
5) Fulano tem 1.50 m e cresce 2 cm por ano, enquanto Ciclano tem 1.10 m e cresce 3 cm por ano.
   Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Ciclano seja maior que Fulano.
*/

#include <iostream>
using namespace std;

int main()
{
    float fulano = 1.50;
    float ciclano = 1.10;
    int anos = 0;
    while (ciclano <= fulano)
    {
        fulano += 0.02;
        ciclano += 0.03;
        anos++;
    }
    cout << "Serão necessários " << anos << " anos para que Ciclano seja maior que Fulano." << endl;
    cout << "Altura final de Fulano: " << fulano << " m" << endl;
    cout << "Altura final de Ciclano: " << ciclano << " m" << endl;
    return 0;
}
