/*

1. Rodrigo Mano Véio deseja criar uma bagaça que possa armazenar números reais.
Ele teve o insight de criar uma estrutura, com apenas um membro, para guardar os
valores. Na prática, ele quer guardar 100 elementos para encontrar:
a. O maior elemento do vetor;
b. A média entre todos os elementos do vetor;
c. A quantidade de elementos que pertençam ao intervalo >= 20 e <= 50.

*/

#include <iostream>

using namespace std;

struct Numero
{
    float valor;
};

int main()
{
    int N = 3;
    Numero numeros[N];

    float maior = -1;
    float soma = 0;
    int count = 0;

    // Leitura dos dados
    for (int i = 0; i < N; i++)
    {
        cout << "Digite um numero real: ";
        cin >> numeros[i].valor;

        // Maior elemento
        if (numeros[i].valor > maior)
        {
            maior = numeros[i].valor;
        }

        // Soma e contagem
        soma += numeros[i].valor;
        if (numeros[i].valor >= 20 && numeros[i].valor <= 50)
        {
            count++;
        }
    }

    // Resultados
    cout << "Maior elemento: " << maior << endl;
    cout << "Media dos elementos: " << soma / N << endl;
    cout << "Quantidade de elementos entre 20 e 50: " << count << endl;

    return 0;
}
