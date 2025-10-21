
/*
1) A estrutura abaixo é uma representacao grafica de Lista Ligada.

   Enunciado:
   A lista e uma estrutura com 'num' (inteiro) e 'prox' (ponteiro para o proximo no).
   Escreva um algoritmo que calcule e mostre:
     a) A soma entre os elementos da lista;
     b) A quantidade de elementos negativos;
     c) Procure por elementos positivos (>= 0). Quando encontrar, multiplique o valor por 3,
        alterando o conteudo do no e mostrando o novo valor.

   Neste arquivo usamos a lista de teste: 12 -> -6 -> 51 -> 18
*/

#include <iostream>

using namespace std;

// Definicao do no (Node) da lista ligada
// - num: armazena o valor inteiro do no
// - prox: ponteiro para o proximo no na lista (nullptr se for o ultimo)
struct Node
{
    int num;
    Node *prox;
    Node(int v) : num(v), prox(nullptr) {}
};

int main()
{
    // --- Construir a lista de exemplo ---
    // Criamos manualmente 4 nos e encadeamos: 12 -> -6 -> 51 -> 18
    Node *head = new Node(12);             // primeiro no com valor 12
    head->prox = new Node(-6);             // segundo no com valor -6
    head->prox->prox = new Node(51);       // terceiro no com valor 51
    head->prox->prox->prox = new Node(18); // quarto no com valor 18

    // Variaveis para resultados
    int soma = 0;          // acumulador para a soma dos elementos
    int qtd_negativos = 0; // contador de elementos negativos

    // --- Passo A e B: percorre a lista e calcula soma e quantidade de negativos ---
    // Percorremos com um ponteiro auxiliar 'p' que anda de no em no ate nullptr
    for (Node *p = head; p != nullptr; p = p->prox)
    {
        soma += p->num; // adiciona o valor do no ao acumulador
        if (p->num < 0)
        { // se o valor for negativo, incrementa o contador
            qtd_negativos++;
        }
    }

    // Mostra os resultados de A e B
    cout << "Soma: " << soma << endl;
    cout << "Quantidade de negativos: " << qtd_negativos << endl;

    // --- Passo C: multiplica por 3 os elementos >= 0 e mostra o novo valor ---
    // Aqui alteramos o conteudo dos nos diretamente (operacao em-place)
    for (Node *p = head; p != nullptr; p = p->prox)
    {
        if (p->num >= 0)
        {
            // multiplica o valor do no por 3 e atualiza o campo num
            p->num = p->num * 3;
            // imprime o novo valor do no apos a alteracao
            cout << "Valor alterado: " << p->num << endl;
        }
    }

    // --- Liberacao de memoria ---
    // Como usamos 'new' para alocar os nos, devemos deletar para evitar vazamento
    while (head)
    {
        Node *next = head->prox; // guarda o proximo no
        delete head;             // libera o no atual
        head = next;             // avanca para o proximo
    }

    return 0;
}
