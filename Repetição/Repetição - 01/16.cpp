
/*
16) Escreva um algoritmo que leia o peso de várias pessoas, calcule e mostre:
    a) O novo peso se a pessoa engordar 15% sobre o peso digitado;
    b) O novo peso se a pessoa emagrecer 20% sobre o peso digitado.
    Finalize o algoritmo quando o usuário digitar peso = 0
*/

#include <iostream>
using namespace std;

int main()
{
    float peso;
    int contador = 1;
    while (true)
    {
        cout << "Digite o peso da pessoa " << contador << " (0 para sair): ";
        cin >> peso;
        if (peso == 0)
            break;
        cout << "Novo peso se engordar 15%: " << peso * 1.15 << " kg" << endl;
        cout << "Novo peso se emagrecer 20%: " << peso * 0.8 << " kg" << endl;
        contador++;
    }
    return 0;
}
