/*
2. Considerando a estrutura do exercício anterior, uma alternativa para escrever a função
que imprime a FILA inteira pode ser:

void imprimir(){
 int i, a=1;
 cout << "\n\nImpressao da Fila\n";
 if(fim < inicio){
   cout << "\nFila Vazia";
 }
 else {
   i = inicio;
   while(i <= fim){
     cout << "\nElemento (" << a << "): " << f[i].n << " " << f[i].status;
     i++;
     a++;
   }
 }
}
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
// Função para imprimir a FILA inteira (versão while)
void imprimir()
{
    int i, a = 1;
    cout << "\n\nImpressao da Fila\n";
    if (fim < inicio)
    {
        cout << "\nFila Vazia";
    }
    else
    {
        i = inicio;
        while (i <= fim)
        {
            cout << "\nElemento (" << a << "): "
                 << f[i].n << " " << boolalpha << f[i].status;
            i++;
            a++;
        }
    }
}

//----------------
int main()
{
    iniciar();

    // Inserindo alguns elementos para testar
    inserir(10, true);
    inserir(15, false);
    inserir(5, false);
    inserir(9, true);
    inserir(4, true);

    imprimir(); // imprime todos os elementos

    remover();  // remove o primeiro
    imprimir(); // imprime novamente para ver a fila atualizada

    cout << "\n\nFim.\n";
    return 0;
}
