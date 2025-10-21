/*
 3) A partir da estrutura abaixo escreva um algoritmo que calcule e mostre:
     a) O maior elemento;
     b) A média entre os elementos >= 10 e <= 50;
     c) O menor elemento.

 Estrutura (lista ligada):
    -3 -> 130 -> 45 -> 18 -> 49 -> 80 -> NULL

 Observação: mantenha a lista e percorra para calcular os valores pedidos.
*/

#include <iostream>
using namespace std;

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
        int maior, menor, soma = 0, c = 0;
        ell *im = il; // ponteiro auxiliar para percorrer

        // inicializa maior e menor com o valor do primeiro nó
        maior = im->num;
        menor = im->num;

        while (im != NULL)
        {
            if (im->num > maior)
                maior = im->num;

            if (im->num < menor)
                menor = im->num;

            if (im->num >= 10 && im->num <= 50)
            {
                soma += im->num;
                c++;
            }

            im = im->prox; // avança para o próximo
        }

        cout << "Maior elemento: " << maior << endl;
        cout << "Menor elemento: " << menor << endl;

        if (c > 0)
            cout << "Media dos elementos entre 10 e 50: " << (soma / c) << endl;
        else
            cout << "Nao ha elementos entre 10 e 50." << endl;
    }
    else
    {
        cout << "Lista vazia." << endl;
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
