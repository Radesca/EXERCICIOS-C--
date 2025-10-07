/*

3. Escreva os valores que serão impressos nas duas instruções cout:
main(){
 int a = 1234;
 int *pa;
 pa = &a;
 cout << "\nO valor de: pa = &a \202 ===> " << pa; Resposta:______________
 cout << "\nO valor de: *pa \202 ===> " << *pa; Resposta:_______________
}

*/

#include <iostream>

using namespace std;

int main()
{
    int a = 1234;
    int *pa;
    pa = &a;
    cout << "\nO valor de: pa = &a \202 ===> " << pa; // Resposta: Endereço de memória da variável a
    cout << "\nO valor de: *pa \202 ===> " << *pa;    // Resposta: 1234 (valor da variável a)
    return 0;
}
