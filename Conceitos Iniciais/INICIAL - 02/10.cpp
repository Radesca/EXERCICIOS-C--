
/*
10) O Haras Mangalarga pretende trocar todas as ferraduras de seus cavalos. Escreva um algoritmo que leia o número de cavalos que o Haras possui. Calcule e mostre a quantidade de ferraduras necessárias para equipar todos os cavalos do haras.
*/

#include <iostream>
using namespace std;

int main()
{
    int cavalos;
    cout << "Digite o número de cavalos: ";
    cin >> cavalos;
    cout << "Quantidade de ferraduras necessárias: " << cavalos * 4 << endl;
    return 0;
}
