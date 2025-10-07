/*

2) Leia a sequência de instruções abaixo:
int i = 10;
int *pti;
pti = &i;
Escreva V ou F:
a) pti armazena o endereço de i (___)
b) *pti é igual a 10 (___)
c) Ao executar *pti = 20; i passará a ter o valor 20 (___)
d) Ao alterar o valor de i, *pti será modificado (___)
e) pti é igual a 10 (___)

*/

#include <iostream>

using namespace std;

int main()
{
    int i = 10;
    int *pti = &i;

    // a) pti armazena o endereco de i -> V
    cout << "a) pti armazena o endereco de i (V)" << endl;

    // b) *pti e igual a 10 -> V
    cout << "b) *pti e igual a 10 (" << (*pti == 10 ? "V" : "F") << ")" << endl;

    // c) Ao executar *pti = 20; i passara a ter o valor 20 -> demonstracao
    *pti = 20;
    cout << "c) Ao executar *pti = 20; i passara a ter o valor 20 (" << (i == 20 ? "V" : "F") << ")" << endl;

    // d) Ao alterar o valor de i, *pti sera modificado -> V
    i = 30;
    cout << "d) Ao alterar o valor de i, *pti sera modificado (" << (*pti == i ? "V" : "F") << ")" << endl;

    // e) pti e igual a 10 -> F. Comparar ponteiro com inteiro e invalido
    cout << "e) pti e igual a 10 (F) - comparar ponteiro com inteiro e invalido" << endl;

    return 0;
}
