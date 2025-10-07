/*

4) Digite o programa abaixo e mostre a saída de cada cout desse programa:
main(){
 int x=10;
 int *p;
 p = &x;
 cout << "X = " << x; //Resposta: .................................
 cout << "\nP = " << p;//Resposta: .................................
 cout << "\n*P = " << *p;//Resposta: .................................…
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
    cout << "\nP = " << p;   // Resposta: P = (endereço de memória de x, varia a cada execução)
    cout << "\n*P = " << *p; // Resposta: *P = 10
    return 0;
}
