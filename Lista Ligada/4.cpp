/*
4) A partir da Lista Encadeada escreva um algoritmo que:
  a) Mostre qual é a quantidade de valores pares presentes na Lista;
  b) Mostre qual é o menor elemento da Lista;
  c) Mostre a quantidade de elementos divisíveis por 5.

Cada nó possui um elemento do tipo inteiro.

Lista de exemplo:
  -3 -> 13 -> 145 -> 50 -> 17 -> -8 -> NULL
*/

#include <iostream>
using namespace std;

// Defina aqui a estrutura do nó da lista ligada

struct ell
{
    int num;
    ell *prox;
};
// ponteiro global para o início da lista
// (na sala o professor chamou de "il")
ell *il = NULL;

void processa()
{
    if (il != NULL)
    { // se a lista não estiver vazia
        int qtd_pares = 0, menor, qtd_div5 = 0;
        ell *im = il; // ponteiro auxiliar para percorrer

        // inicializa menor com o valor do primeiro nó
        menor = im->num;

        while (im != NULL)
        {
            // Verifica se o número é par
            if (im->num % 2 == 0)
                qtd_pares++;

            // Verifica se o número é o menor até agora
            if (im->num < menor)
                menor = im->num;

            // Verifica se o número é divisível por 5
            if (im->num % 5 == 0)
                qtd_div5++;

            im = im->prox; // avança para o próximo
        }

        cout << "Quantidade de valores pares: " << qtd_pares << endl;
        cout << "Menor elemento: " << menor << endl;
        cout << "Quantidade de elementos divisíveis por 5: " << qtd_div5 << endl;
    }
    else
    {
        cout << "A lista está vazia." << endl;
    }
}

int main()
{
    // aqui em aula o professor provavelmente já criou a lista
    // e ligou os nós em il -> prox -> prox...
    // então basta chamar a função:
    processa();
    return 0;
}
