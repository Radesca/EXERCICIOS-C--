/*

6) Digite o programa abaixo e mostre a saída de cada cout desse programa:
main(){
 int i = 10;
 int *p;
 p = &i;
 *p = 5;
 cout << "\n i = "<< i; //Resposta:___________
 cout << "\n *p = " << *p; //Resposta:_______
 cout << "\n p = " << p; //Resposta:_________
 getch();
 }

*/

#include <iostream>

using namespace std;

int main()
{
    int i = 10;
    int *p;
    p = &i;
    *p = 5;
    cout << "\n i = " << i;   // Resposta: i = 5
    cout << "\n *p = " << *p; // Resposta: *p = 5
    cout << "\n p = " << p;   // Resposta: p = (endereço de memória de i, varia a cada execução)
    return 0;
}
