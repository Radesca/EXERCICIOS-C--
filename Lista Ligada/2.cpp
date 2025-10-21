/*
2) Dada a estrutura abaixo, do tipo Lista Ligada, elabore um algoritmo que calcule e
   mostre a media dos valores > 50.

   Lista de exemplo: 40 -> 21 -> 67 -> 73 -> 84
*/

#include <iostream>

using namespace std;

struct Node
{
    int num;
    Node *prox;
    Node(int v) : num(v), prox(nullptr) {}
};

int main()
{
    // Construir a lista: 40 -> 21 -> 67 -> 73 -> 84
    Node *head = new Node(40);
    head->prox = new Node(21);
    head->prox->prox = new Node(67);
    head->prox->prox->prox = new Node(73);
    head->prox->prox->prox->prox = new Node(84);

    int soma = 0;
    int count = 0;

    // Percorre a lista e soma os valores maiores que 50, contando quantos sao
    for (Node *p = head; p != nullptr; p = p->prox)
    {
        if (p->num > 50)
        {
            soma += p->num;
            count++;
        }
    }

    if (count > 0)
    {
        double media = static_cast<double>(soma) / count;
        cout << "Media dos valores > 50: " << media << endl;
    }
    else
    {
        cout << "Nenhum valor maior que 50 na lista." << endl;
    }

    // Liberar memoria
    while (head)
    {
        Node *next = head->prox;
        delete head;
        head = next;
    }

    return 0;
}
