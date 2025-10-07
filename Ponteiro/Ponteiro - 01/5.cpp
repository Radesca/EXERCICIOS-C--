/*

5) Digite o programa abaixo e mostre a saída de cada cout desse programa:
1 main(){
2 int x=10;
3 int *p;
4 p = &x;
5 cout << "X = " << x; // Resposta: ................................
6 *p = 12;
7 cout << "\n*P = " << *p;// Resposta: ...................................
8 cout << "\nX = " << x; // Resposta: .......................................
9 getch();
10}
Observações para este programa:
(a)O * permite acessar o valor para o qual o ponteiro está apontando.
(b)O ponteiro p permite que eu modifique o valor de outra variável de forma indireta.
(c)A partir da linha 6, *p=12, não mencionamos a variável X e, mesmo assim, conseguimos alterar seu
valor de 10 para 12.

*/

#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *p;
    p = &x;
    cout << "X = " << x; // Resposta: X = 10
    *p = 12;
    cout << "\n*P = " << *p; // Resposta: *P = 12
    cout << "\nX = " << x;   // Resposta: X = 12
    return 0;
}
