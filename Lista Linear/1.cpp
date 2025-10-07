/*

1. Dada a estrutura abaixo, do tipo Lista Linear, com tamanho máximo de 08 posições:
0 1 2 3 4 5 6 7
Software Hardware Redes Criptografia Internet
 ↑
 Fim
Pede-se as seguintes operações:
a. Inserir um novo nó, no início da lista, com valor igual a “Linux”;
b. Remover o nó anterior ao nó “Internet”;
c. Remover o nó que está no fim da lista.
Desenhe as novas representações gráficas das operações acima. As operações são
acumulativas.

*/

#include <iostream>
#include <string>

using namespace std;

#define MAX 8

struct ListaLinear
{
    string elementos[MAX];
    int tamanho;

    ListaLinear() : tamanho(0) {}

    bool inserirInicio(const string &valor)
    {
        if (tamanho >= MAX)
            return false; // Lista cheia
        for (int i = tamanho; i > 0; --i)
        {
            elementos[i] = elementos[i - 1];
        }
        elementos[0] = valor;
        tamanho++;
        return true;
    }

    bool removerAnterior(const string &valor)
    {
        for (int i = 1; i < tamanho; ++i)
        {
            if (elementos[i] == valor)
            {
                for (int j = i - 1; j < tamanho - 1; ++j)
                {
                    elementos[j] = elementos[j + 1];
                }
                tamanho--;
                return true;
            }
        }
        return false; // Valor não encontrado ou não há anterior
    }

    bool removerFim()
    {
        if (tamanho == 0)
            return false; // Lista vazia
        tamanho--;
        return true;
    }

    void imprimir() const
    {
        for (int i = 0; i < tamanho; ++i)
        {
            cout << elementos[i] << " ";
        }
        cout << endl;
    }
};
