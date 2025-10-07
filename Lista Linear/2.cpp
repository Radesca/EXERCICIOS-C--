/*

2. Dada a estrutura abaixo, do tipo Lista Linear Sequencial, de inteiros, com tamanho
máximo de 10 posições. Calcule e mostre:
0 1 2 3 4 5 6 7 8 9
150 201 80 220 11
 ↑
 Final
a) A média entre os valores pares e maiores que 100;
b) O maior valor da Lista.
Algoritmo dois;
Var
 q, r, c, s, ma, aux: inteiro;
Início
 Se (final > -1)
 Então c = 0; s = 0; aux = 0; ma = a[0].num;
 Enquanto (aux <= final)
 Faça Se (a[i].num > 100)
 então q = a[i].num/2;
 r = a[i].num * 2 – q;
 Se (r = 0)
 então s = s + a[i].num;
 c = c + 1;
 Se (a[i].num > ma)
 então ma = a[i].num;
aux = aux + 1;
 imprima “A média entre os pares e > 100: “, s/c;
 imprima “O maior elemento: “, ma;
 Senão imprima “Lista vazia”;
Fim.

*/

#include <iostream>
#include <string>

using namespace std;

#define MAX 10

struct ListaLinearSequencial
{
    int elementos[MAX];
    int tamanho;

    ListaLinearSequencial() : tamanho(0) {}

    bool inserir(const int &valor)
    {
        if (tamanho >= MAX)
            return false; // Lista cheia
        elementos[tamanho++] = valor;
        return true;
    }

    double mediaParesMaioresQue100()
    {
        int soma = 0, count = 0;
        for (int i = 0; i < tamanho; ++i)
        {
            if (elementos[i] > 100 && elementos[i] % 2 == 0)
            {
                soma += elementos[i];
                count++;
            }
        }
        return count > 0 ? static_cast<double>(soma) / count : 0.0;
    }

    int maiorValor()
    {
        if (tamanho == 0)
            return -1; // Lista vazia
        int maior = elementos[0];
        for (int i = 1; i < tamanho; ++i)
        {
            if (elementos[i] > maior)
                maior = elementos[i];
        }
        return maior;
    }
};

int main()
{
    ListaLinearSequencial lista;
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

    double media = lista.mediaParesMaioresQue100();
    int maior = lista.maiorValor();

    if (lista.tamanho > 0)
    {
        cout << "Média dos valores pares maiores que 100: " << media << endl;
        cout << "Maior valor da lista: " << maior << endl;
    }
    else
    {
        cout << "Lista vazia!" << endl;
    }

    return 0;
}
