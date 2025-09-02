/*

2. Considere a estrutura com os seguintes membros: n1 do tipo inteiro, n2 do tipo real.
A estrutura está armazenada num vetor de tamanho 10. Suponha que as funções
iniciar(), inserir(), remover() e consultar() estejam prontas. Pede-se:
a) Escrever apenas a função imprimir1() que eleve ao cubo cada um dos
membros n2;
b) Escrever apenas a função imprimir2() que encontre e mostre a média
aritmética simples entre os valores de n2 da FILA;
c) Escrever apenas a função imprimir3() que encontre a quantidade de pares e de
ímpares de n1 na FILA;
d) Escrever apenas a função imprimir4() que converta todos os elementos da
FILA em valores binários, da seguinte forma:
i. Quando encontrar um valor positivo (>=0), converta-o para 1;
ii. Quando encontrar um valor negativo, converta-o para 0.
Mostre a FILA convertida para binário

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

// funções básicas
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

void consultar()
{
    if (inicio > fim)
    {
        cout << "Fila vazia!\n";
    }
    else
    {
        cout << "Proximo da fila -> n1: " << f[inicio].n1
             << " | n2: " << f[inicio].n2 << '\n';
    }
}

// ---------------------------
// a) imprimir1(): elevar n2 ao cubo
void imprimir1()
{
    if (fim < inicio)
    {
        cout << "Fila Vazia\n";
        return;
    }
    cout << "\nElevando n2 ao cubo:\n";
    for (int i = inicio, a = 1; i <= fim; i++, a++)
    {
        f[i].n2 = f[i].n2 * f[i].n2 * f[i].n2;
        cout << "Elemento (" << a << ") -> n1: " << f[i].n1
             << " | n2^3: " << f[i].n2 << '\n';
    }
}

// b) imprimir2(): média de n2
void imprimir2()
{
    if (fim < inicio)
    {
        cout << "Fila Vazia\n";
        return;
    }
    double soma = 0.0;
    int qtd = (fim - inicio + 1);
    for (int i = inicio; i <= fim; i++)
        soma += f[i].n2;
    double media = soma / qtd;
    cout << "\nMedia de n2: " << media << '\n';
}

// c) imprimir3(): pares e ímpares de n1
void imprimir3()
{
    if (fim < inicio)
    {
        cout << "Fila Vazia\n";
        return;
    }
    int pares = 0, impares = 0;
    for (int i = inicio; i <= fim; i++)
    {
        if (f[i].n1 % 2 == 0)
            pares++;
        else
            impares++;
    }
    cout << "\nn1 pares: " << pares << " | n1 impares: " << impares << '\n';
}

// d) imprimir4(): converter fila para binário (>=0 -> 1, <0 -> 0)
void imprimir4()
{
    if (fim < inicio)
    {
        cout << "Fila Vazia\n";
        return;
    }
    cout << "\nFILA convertida para binario:\n";
    for (int i = inicio, a = 1; i <= fim; i++, a++)
    {
        f[i].n1 = (f[i].n1 >= 0) ? 1 : 0;
        f[i].n2 = (f[i].n2 >= 0.0) ? 1.0 : 0.0;
        cout << "Elemento (" << a << ") -> n1: " << f[i].n1
             << " | n2: " << f[i].n2 << '\n';
    }
}

// ---------------------------
int main()
{
    iniciar();

    // insere alguns elementos de exemplo
    inserir(5, 8.1);
    inserir(-2, -3.5);
    inserir(10, 4.0);
    inserir(7, -1.2);

    consultar(); // mostra primeiro da fila
    imprimir1(); // eleva n2 ao cubo
    imprimir2(); // média de n2
    imprimir3(); // conta pares e ímpares de n1
    imprimir4(); // converte para binário

    return 0;
}
