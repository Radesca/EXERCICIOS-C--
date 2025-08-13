
/*
1. Faça um algoritmo que leia o sexo e a idade de 3 pessoas. Calcule e mostre a quantidade de mulheres com idade maior que 20 anos. Se o algoritmo não encontrar nenhuma mulher com idade superior a 20 anos, mostrar a seguinte mensagem: “Não foram encontradas mulheres > de 20 anos”.
*/

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i <= 3; i++)
    {
        char sexo;
        int idade;
        cout << "Pessoa " << i << " - Sexo (M/F): ";
        cin >> sexo;
        cout << "Pessoa " << i << " - Idade: ";
        cin >> idade;
        if ((sexo == 'F' || sexo == 'f') && idade > 20)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Não foram encontradas mulheres > de 20 anos" << endl;
    }
    else
    {
        cout << "Quantidade de mulheres com idade > 20 anos: " << count << endl;
    }
    return 0;
}
