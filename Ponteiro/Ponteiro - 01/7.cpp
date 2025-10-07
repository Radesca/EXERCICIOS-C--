/*

7) Digite o programa abaixo e mostre a saída de cada cout desse programa:
main(){
Um ponteiro só pode receber o endereço de uma variável do mesmo tipo do ponteiro
int *p, *p1, x = 10;
float y = 20;
p = &x;
cout << "\n*p = " << *p; // Qual será a saída? Resposta: ______
p1 = p;                  // Estes dois ponteiros são inteiros, assim esta atribuição e válida.
cout << "*p1 = " << *p1; // Qual sera a saida? Resposta: ______
p = &y;                  // ERRADO, pois p é um ponteiro INT e y é uma variável FLOAT.
getch();
}

*/

#include <iostream>

using namespace std;

int main()
{
    int *p, *p1, x = 10;
    float y = 20;
    p = &x;
    cout << "\n*p = " << *p;   // Resposta: *p = 10
    p1 = p;                    // Estes dois ponteiros são inteiros, assim esta atribuição é válida.
    cout << "\n*p1 = " << *p1; // Resposta: *p1 = 10
    // p = &y;                // ERRADO, pois p é um ponteiro INT e y é uma variável FLOAT. (Comentado para evitar erro de compilação)
    return 0;
}
