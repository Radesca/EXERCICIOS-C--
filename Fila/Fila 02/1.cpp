/*

1. Considere que exista uma FILA armazenada num vetor de struct com até 10 elementos.
   A FILA já está na memória e possui os seguintes membros: n1 (inteiro) e n2 (real).
   Para ilustrar, considere índices de 'inicio' até 'fim' formando a fila.

   Pede-se:
   a) Escrever a função imprimir1(): imprimir todos os elementos da FILA;
   b) Escrever a função imprimir2(): procurar por n1 >= 5 e n1 <= 10; quando encontrar,
      altere o valor do nó somando o índice i ao próprio n1 (isto é, f[i].n1 = f[i].n1 + i).
      Se não encontrar n1 que satisfaça essa condição, mostrar a mensagem:
      "Não encontrei N1 entre 5 e 10";
   c) Escrever a função imprimir3(): mostrar o maior elemento de N2.
*/

#include <iostream>
using namespace std;

#define t 10

struct dados
{
    int n1;
    double n2;
};

dados f[t];
int inicio, fim;

void iniciar()
{
    inicio = 0;
    fim = -1;
}

void inserir(int valor1, double valor2)
{
    if (fim < t - 1)
    {
        fim++;
        f[fim].n1 = valor1;
        f[fim].n2 = valor2;
    }
    else
    {
        cout << "Fila cheia!\n";
    }
}

void remover()
{
    if (inicio > fim)
    {
        cout << "Fila vazia!\n";
    }
    else
    {
        inicio++;
        if (inicio > fim)
            iniciar();
    }
}

// a) imprimir todos
void imprimir1()
{
    cout << "\nImpressao da Fila\n";
    if (fim < inicio)
    {
        cout << "Fila Vazia\n";
        return;
    }
    for (int i = inicio, a = 1; i <= fim; i++, a++)
    {
        cout << "Elemento (" << a << ") -> "
             << "n1: " << f[i].n1 << " | n2: " << f[i].n2 << '\n';
    }
}

// b) procurar n1 em [5,10]
void imprimir2()
{
    if (fim < inicio)
    {
        cout << "Fila Vazia\n";
        return;
    }
    bool achou = false;
    for (int i = inicio; i <= fim; i++)
    {
        if (f[i].n1 >= 5 && f[i].n1 <= 10)
        {
            f[i].n1 = f[i].n1 + i;
            cout << "Atualizado no indice " << i
                 << " -> n1: " << f[i].n1 << " | n2: " << f[i].n2 << '\n';
            achou = true;
            break; // só o primeiro que satisfaz
        }
    }
    if (!achou)
    {
        cout << "Não encontrei N1 entre 5 e 10\n";
    }
}

// c) maior N2
void imprimir3()
{
    if (fim < inicio)
    {
        cout << "Fila Vazia\n";
        return;
    }
    double maior = f[inicio].n2;
    for (int i = inicio + 1; i <= fim; i++)
    {
        if (f[i].n2 > maior)
            maior = f[i].n2;
    }
    cout << "Maior N2: " << maior << '\n';
}

int main()
{
    iniciar();

    // insere elementos de exemplo (da tabela do enunciado)
    inserir(5, 8.1);
    inserir(90, 10.0);
    inserir(4, -32.1);
    inserir(12, 28.0);
    inserir(-6, 14.2);

    imprimir1(); // mostra toda a fila
    imprimir2(); // altera o primeiro n1 entre 5 e 10
    imprimir3(); // mostra o maior n2

    return 0;
}
