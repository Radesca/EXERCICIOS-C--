/*
7) Supondo que a população de um país A seja da ordem de 90000 habitantes com uma taxa anual de crescimento de 3%
   e que a população de um país B seja aproximadamente de 200000 habitantes com taxa anual de 1.5% de crescimento.
   Construir um programa que calcule e mostre o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.
*/

#include <iostream>
using namespace std;

int main()
{
    int popA = 90000;
    int popB = 200000;
    int anos = 0;
    while (popA < popB)
    {
        popA += popA * 0.03;
        popB += popB * 0.015;
        anos++;
    }
    cout << "Serão necessários " << anos << " anos para que a população do país A ultrapasse ou iguale a do país B." << endl;
    cout << "População final de A: " << popA << endl;
    cout << "População final de B: " << popB << endl;
    return 0;
}
