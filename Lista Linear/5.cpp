/*

5. O vetor A é uma estrutura com dois membros: N1, do tipo inteiro e N2, do tipo real. O
vetor armazena uma lista linear sequencial, conforme o conteúdo abaixo:
0 1 2 3 4 5 6 7 8 9
N1=25
N2=1.5
45
2.3
18
10.0
22
15.6
30
1.9
20
20.4

 ↑
 Final
Escreva um algoritmo que calcule e mostre:
a. O menor elemento de N1;
b. Adicione 1 aos elementos N1 >= 20. Subtraia 1 aos elementos N2 <=5.
Imprima as alterações realizadas;
c. Peça ao usuário que digite um valor para N1 e outro valor para N2. Em
seguida, insira um novo nó no final da lista.
Para elaborar os algoritmos desta lista, utilize o seguinte esquema:
Algoritmo nome_algoritmo;
Var
 i: inteiro;
Início
 Se final > -1
 Então i = 0;
 Enquanto (i <= final)
 Faça instr1;
 instr2;
 instrN;
 i = i + 1;
 Senão imprima “Lista vazia”;
Fim.

*/

#include <iostream>
#include <string>

using namespace std;
#define MAX 10

struct No
{
    int N1;
    double N2;
};

struct ListaLinear
{
    No elementos[MAX];
    int tamanho;

    ListaLinear() : tamanho(0) {}

    bool inserir(const int &n1, const double &n2)
    {
        if (tamanho >= MAX)
            return false; // Lista cheia
        elementos[tamanho++] = {n1, n2};
        return true;
    }

    int menorN1()
    {
        if (tamanho == 0)
            return -1; // Lista vazia
        int menor = elementos[0].N1;
        for (int i = 1; i < tamanho; ++i)
        {
            if (elementos[i].N1 < menor)
                menor = elementos[i].N1;
        }
        return menor;
    }

    void ajustarElementos()
    {
        for (int i = 0; i < tamanho; ++i)
        {
            if (elementos[i].N1 >= 20)
            {
                elementos[i].N1 += 1;
                cout << "N1 ajustado no índice " << i << ": " << elementos[i].N1 << endl;
            }
            if (elementos[i].N2 <= 5)
            {
                elementos[i].N2 -= 1;
                cout << "N2 ajustado no índice " << i << ": " << elementos[i].N2 << endl;
            }
        }
    }
};

int main()
{
    ListaLinear lista;
    int n1;
    double n2;

    // Inserindo elementos iniciais
    lista.inserir(25, 1.5);
    lista.inserir(45, 2.3);
    lista.inserir(18, 10.0);
    lista.inserir(22, 15.6);
    lista.inserir(30, 1.9);
    lista.inserir(20, 20.4);

    cout << "Menor elemento de N1: " << lista.menorN1() << endl;

    cout << "Ajustando elementos..." << endl;
    lista.ajustarElementos();

    cout << "Insira um novo valor para N1: ";
    cin >> n1;
    cout << "Insira um novo valor para N2: ";
    cin >> n2;

    if (lista.inserir(n1, n2))
        cout << "Novo nó inserido com sucesso." << endl;
    else
        cout << "Falha ao inserir novo nó. Lista cheia." << endl;

    return 0;
}
