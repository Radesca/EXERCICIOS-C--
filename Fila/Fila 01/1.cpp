/*
1. Leia o programa abaixo. Considere a estrutura com os seguintes membros: n do tipo
inteiro e s do tipo booleano. A estrutura está armazenada num vetor de tamanho 10 e
as funções iniciar(), inserir() e remover() estão prontas. Pede-se:
a) Escrever a função consultar() que mostre o próximo a ser atendido. Imprima o
valor de cada um dos dois membros da estrutura;
b) Escrever a função imprimir1() que mostre todos os elementos da FILA;
c) Escrever a função imprimir2() que mostre apenas os elementos da FILA que
possuam s como true;
d) Escrever a função imprimir3() que mostre apenas os elementos de n par presentes
na FILA.
*/

#include <iostream>
using namespace std;

#define t 10

struct dados
{
    int n;
    bool status;
};

dados f[t];
int inicio, fim;

//----------------
void iniciar()
{
    inicio = 0;
    fim = -1;
}

//----------------
void inserir(int valor, bool s)
{
    if (fim < t - 1)
    {
        fim++;
        f[fim].n = valor;
        f[fim].status = s;
    }
    else
    {
        cout << "\nFila Cheia";
    }
}

//----------------
void remover()
{
    if (inicio > fim)
    {
        cout << "\nFila Vazia";
    }
    else
    {
        inicio++;
        if (inicio > fim)
        {
            iniciar();
        }
    }
}

//----------------
// a) consultar(): mostra o próximo a ser atendido
void consultar()
{
    if (inicio > fim)
    {
        cout << "\nFila Vazia";
    }
    else
    {
        cout << boolalpha;
        cout << "\nProximo da Fila -> n: " << f[inicio].n
             << " | status: " << f[inicio].status;
    }
}

//----------------
// b) imprimir1(): mostra todos os elementos da FILA
void imprimir1()
{
    if (inicio > fim)
    {
        cout << "\nFila Vazia";
    }
    else
    {
        cout << boolalpha;
        cout << "\nFILA (todos os elementos):";
        for (int i = inicio; i <= fim; i++)
        {
            cout << "\n[" << i << "] n: " << f[i].n
                 << " | status: " << f[i].status;
        }
    }
}

//----------------
// c) imprimir2(): mostra apenas os elementos com status == true
void imprimir2()
{
    if (inicio > fim)
    {
        cout << "\nFila Vazia";
    }
    else
    {
        cout << boolalpha;
        cout << "\nFILA (status == true):";
        bool achou = false;
        for (int i = inicio; i <= fim; i++)
        {
            if (f[i].status)
            {
                achou = true;
                cout << "\n[" << i << "] n: " << f[i].n
                     << " | status: " << f[i].status;
            }
        }
        if (!achou)
        {
            cout << "\n(Nenhum elemento com status == true)";
        }
    }
}

//----------------
// d) imprimir3(): mostra apenas os elementos de n par
void imprimir3()
{
    if (inicio > fim)
    {
        cout << "\nFila Vazia";
    }
    else
    {
        cout << boolalpha;
        cout << "\nFILA (n pares):";
        bool achou = false;
        for (int i = inicio; i <= fim; i++)
        {
            if (f[i].n % 2 == 0)
            {
                achou = true;
                cout << "\n[" << i << "] n: " << f[i].n
                     << " | status: " << f[i].status;
            }
        }
        if (!achou)
        {
            cout << "\n(Nenhum elemento com n par)";
        }
    }
}

//----------------
int main()
{
    iniciar();

    // Inserções de exemplo
    inserir(10, true);
    inserir(15, false);
    inserir(5, false);
    inserir(9, true);
    inserir(4, true);
    inserir(20, true);
    inserir(50, true);

    consultar();
    imprimir1();
    imprimir2();
    imprimir3();

    remover();
    consultar();

    cout << "\n\nFim.\n";
    return 0;
}
