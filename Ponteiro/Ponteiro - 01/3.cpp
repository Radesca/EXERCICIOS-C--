/*

3)Digite o programa abaixo e mostre a saída de cada cout desse programa:
main(){
 int x=10;
 int *p;
 p = &x;
 cout << "X = " << x; //Resposta: .................................
 cout << "\n&x = " << &x;//Resposta: ... ....................................
 getch();
}

*/

#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *p;
    p = &x;
    cout << "X = " << x;     // Resposta: X = 10
    cout << "\n&x = " << &x; // Resposta: &x = (endereço de memória de x, varia a cada execução)
    return 0;
}
