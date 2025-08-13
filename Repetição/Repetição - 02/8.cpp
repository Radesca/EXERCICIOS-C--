/*
8) Escreva um algoritmo que leia a idade e o peso de 15 pessoas.
   Calcule e mostre as médias dos pesos das pessoas da mesma faixa etária.
   As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a 30 anos e maiores de 31 anos.
*/

#include <iostream>
using namespace std;

int main()
{
    int idade;
    float peso;
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    float soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
    for (int i = 0; i < 15; i++)
    {
        cout << "Digite a idade da pessoa " << i + 1 << ": ";
        cin >> idade;
        cout << "Digite o peso da pessoa " << i + 1 << ": ";
        cin >> peso;
        if (idade >= 1 && idade <= 10)
        {
            soma1 += peso;
            cont1++;
        }
        else if (idade >= 11 && idade <= 20)
        {
            soma2 += peso;
            cont2++;
        }
        else if (idade >= 21 && idade <= 30)
        {
            soma3 += peso;
            cont3++;
        }
        else if (idade > 30)
        {
            soma4 += peso;
            cont4++;
        }
    }
    if (cont1 > 0)
        cout << "Média dos pesos (1 a 10 anos): " << soma1 / cont1 << endl;
    else
        cout << "Nenhuma pessoa na faixa 1 a 10 anos." << endl;
    if (cont2 > 0)
        cout << "Média dos pesos (11 a 20 anos): " << soma2 / cont2 << endl;
    else
        cout << "Nenhuma pessoa na faixa 11 a 20 anos." << endl;
    if (cont3 > 0)
        cout << "Média dos pesos (21 a 30 anos): " << soma3 / cont3 << endl;
    else
        cout << "Nenhuma pessoa na faixa 21 a 30 anos." << endl;
    if (cont4 > 0)
        cout << "Média dos pesos (> 30 anos): " << soma4 / cont4 << endl;
    else
        cout << "Nenhuma pessoa na faixa acima de 30 anos." << endl;
    return 0;
}
