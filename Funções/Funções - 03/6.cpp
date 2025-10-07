/*

6) Escreva um algoritmo que leia o consumo de água e energia elétrica de 5 residências e
armazene em uma matriz. Depois, leia o valor do m³ da água e o valor do kWh, calcule
e mostre os valores devidos por cada residência.

*/

#include <iostream>

using namespace std;

// Função para realizar a leitura do consumo de água e energia elétrica das residências
void leitura(float V[5][2])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o consumo de água (m³) da residência " << i + 1 << ":\n";
        cin >> V[i][0];
        cout << "Digite o consumo de energia elétrica (kWh) da residência " << i + 1 << ":\n";
        cin >> V[i][1];
    }
}

// Função para calcular e imprimir os valores devidos por cada residência
void calcularValores(float V[5][2], float valorAgua, float valorEnergia)
{
    for (int i = 0; i < 5; i++)
    {
        float valorDevido = (V[i][0] * valorAgua) + (V[i][1] * valorEnergia);
        cout << "Valor devido pela residência " << i + 1 << ": R$ " << valorDevido << "\n";
    }
}

int main()
{
    float V[5][2];
    float valorAgua, valorEnergia;

    // Leitura do consumo
    leitura(V);

    // Leitura dos valores do m³ da água e do kWh
    cout << "Digite o valor do m³ da água: R$ ";
    cin >> valorAgua;
    cout << "Digite o valor do kWh da energia elétrica: R$ ";
    cin >> valorEnergia;

    // Cálculo e impressão dos valores devidos
    calcularValores(V, valorAgua, valorEnergia);

    return 0;
}