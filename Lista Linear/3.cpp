/*

3. Dada a estrutura abaixo, do tipo Lista Linear, de inteiros, com tamanho máximo de 10
posições:
0 1 2 3 4 5 6 7 8 9
10 45 18 -4 49 12
 ↑
 Final
a. A quantidade de valores ímpares;
b. Quando encontrar um valor divisível por 3, altere o conteúdo do nó multiplicandoo por 2. Mostre o nó a cada alteração;
c. A média entre os valores da Lista.

*/

#include <iostream>
#include <string>

using namespace std;

#define MAX 10

struct ListaLinear
{
    int elementos[MAX];
    int tamanho;

    ListaLinear() : tamanho(0) {}

    bool inserir(const int &valor)
    {
        if (tamanho >= MAX)
            return false; // Lista cheia
        elementos[tamanho++] = valor;
        return true;
    }

    int contarImpares()
    {
        int count = 0;
        for (int i = 0; i < tamanho; ++i)
        {
            if (elementos[i] % 2 != 0)
                count++;
        }
        return count;
    }

    void alterarDivisiveisPor3()
    {
        for (int i = 0; i < tamanho; ++i)
        {
            if (elementos[i] % 3 == 0)
            {
                elementos[i] *= 2;
                cout << "Alterado: " << elementos[i] << endl;
            }
        }
    }

    double media()
    {
        if (tamanho == 0)
            return 0.0;
        int soma = 0;
        for (int i = 0; i < tamanho; ++i)
        {
            soma += elementos[i];
        }
        return static_cast<double>(soma) / tamanho;
    }
};

int main()
{
    ListaLinear lista;
    int valor;

    cout << "Insira elementos na lista (digite -1 para parar):" << endl;
    while (true)
    {
        cin >> valor;
        if (valor == -1)
            break;
        if (!lista.inserir(valor))
        {
            cout << "Lista cheia!" << endl;
            break;
        }
    }

    int quantidadeImpares = lista.contarImpares();
    cout << "Quantidade de valores ímpares: " << quantidadeImpares << endl;

    lista.alterarDivisiveisPor3();

    double media = lista.media();
    if (media != -1)
    {
        cout << "Média dos valores da lista: " << media << endl;
    }

    return 0;
}
