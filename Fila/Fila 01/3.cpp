/*
3. Considere a estrutura com os seguintes membros: n1 do tipo inteiro, n2 do tipo real.
A estrutura está armazenada num vetor de tamanho 10. Suponha que as funções iniciar(),
inserir(), remover() e consultar() estejam prontas. Pede-se:
a) Escrever apenas a função imprimir1() que some todos os membros n1 e, em
seguida some todos os membros n2. Ao final mostre os valores das duas somas;
b) Escrever apenas a função imprimir2() que encontre e mostre o maior valor de n1
da FILA;
c) Escrever apenas a função imprimir3() que descubra em qual posição da FILA está
armazenado o menor valor de n2;
d) Escrever apenas a função imprimir4() que mostre todos os elementos da FILA.
*/

#include <iostream>
using namespace std;

#define t 10

struct dados
{
    int n1;
    float n2;
};

dados fila[t];
int inicio, fim;

//----------------
// funções básicas
void iniciar()
{
    inicio = 0;
    fim = -1;
}

void inserir(int v1, float v2)
{
    if (fim < t - 1)
    {
        fim++;
        fila[fim].n1 = v1;
        fila[fim].n2 = v2;
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

void consultar()
{
    if (inicio > fim)
    {
        cout << "Fila vazia!\n";
    }
    else
    {
        cout << "Primeiro da fila -> n1: " << fila[inicio].n1
             << " | n2: " << fila[inicio].n2 << '\n';
    }
}

//----------------
// a) soma n1 e soma n2
void imprimir1()
{
    int soma_n1 = 0;
    float soma_n2 = 0;

    for (int i = inicio; i <= fim; i++)
    {
        soma_n1 += fila[i].n1;
        soma_n2 += fila[i].n2;
    }

    cout << "Soma de n1: " << soma_n1 << endl;
    cout << "Soma de n2: " << soma_n2 << endl;
}

// b) maior n1
void imprimir2()
{
    if (inicio > fim)
    {
        cout << "Fila vazia!\n";
        return;
    }

    int maior_n1 = fila[inicio].n1;
    for (int i = inicio + 1; i <= fim; i++)
    {
        if (fila[i].n1 > maior_n1)
        {
            maior_n1 = fila[i].n1;
        }
    }

    cout << "Maior valor de n1: " << maior_n1 << endl;
}

// c) posição do menor n2
void imprimir3()
{
    if (inicio > fim)
    {
        cout << "Fila vazia!\n";
        return;
    }

    int pos_menor_n2 = inicio;
    for (int i = inicio + 1; i <= fim; i++)
    {
        if (fila[i].n2 < fila[pos_menor_n2].n2)
        {
            pos_menor_n2 = i;
        }
    }

    cout << "Posição do menor valor de n2: " << pos_menor_n2 << endl;
}

// d) mostrar todos os elementos
void imprimir4()
{
    if (inicio > fim)
    {
        cout << "Fila vazia!\n";
        return;
    }

    cout << "Elementos da FILA:" << endl;
    for (int i = inicio; i <= fim; i++)
    {
        cout << "Elemento " << i
             << ": n1 = " << fila[i].n1
             << ", n2 = " << fila[i].n2 << endl;
    }
}

//----------------
int main()
{
    iniciar();

    // adicionando elementos de exemplo
    inserir(10, 5.5);
    inserir(7, -2.3);
    inserir(20, 8.9);
    inserir(3, 1.1);
    inserir(15, -7.0);

    consultar();
    imprimir1();
    imprimir2();
    imprimir3();
    imprimir4();

    return 0;
}
