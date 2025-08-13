/*
5) Escreva um algoritmo para ler a quantidade de meninas e a quantidade de meninos em uma sala de aula. Calcule e mostre a porcentagem de meninas e a porcentagem de meninos na sala.
*/

#include <iostream>
using namespace std;

int main()
{
    int meninas, meninos;
    cout << "Quantidade de meninas: ";
    cin >> meninas;
    cout << "Quantidade de meninos: ";
    cin >> meninos;

    int total = meninas + meninos;
    double perc_meninas = (double)meninas / total * 100.0;
    double perc_meninos = (double)meninos / total * 100.0;

    cout << "Porcentagem de meninas: " << perc_meninas << "%" << endl;
    cout << "Porcentagem de meninos: " << perc_meninos << "%" << endl;
    return 0;
}
