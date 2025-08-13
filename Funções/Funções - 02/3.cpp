/*
3. Analise o programa abaixo e escreva Teste de Mesa que mostre os valores impressos:

#define t 3
int multiplica (int, int);
main(){
 int a, i, j, m[t][t] = {8, 3, -2,
 4, 5, 8,
 2, 6, 10};
 for (i = 0; i < t; i++){
   for (j = 0; j < t; j++){
     a = multiplica(m[i][j], i);
     cout << " " << a;
   }
 }
}
int multiplica (int b, int c){
 if ( b % 2 == 0){
   b = b * c;
 }
 return b;
}
*/

#include <iostream>
using namespace std;

#define t 3

int multiplica(int b, int c)
{
    if (b % 2 == 0)
    {
        b = b * c;
    }
    return b;
}

int main()
{
    int a, i, j;
    int m[t][t] = {
        {8, 3, -2},
        {4, 5, 8},
        {2, 6, 10}};

    /*
    TESTE DE MESA

    Função multiplica(b, c):
      - Se b é par (b % 2 == 0), então b = b * c.
      - Caso contrário, retorna b sem alteração.

    Percorrendo a matriz m:

    i=0:
      j=0 → b=8 (par)  → 8 * 0 = 0   → imprime 0
      j=1 → b=3 (ímpar)→ retorna 3   → imprime 3
      j=2 → b=-2 (par) → (-2) * 0 = 0 → imprime 0

    i=1:
      j=0 → b=4 (par)  → 4 * 1 = 4   → imprime 4
      j=1 → b=5 (ímpar)→ retorna 5   → imprime 5
      j=2 → b=8 (par)  → 8 * 1 = 8   → imprime 8

    i=2:
      j=0 → b=2 (par)  → 2 * 2 = 4   → imprime 4
      j=1 → b=6 (par)  → 6 * 2 = 12  → imprime 12
      j=2 → b=10 (par) → 10 * 2 = 20 → imprime 20

    SAÍDA ESPERADA:
    0 3 0 4 5 8 4 12 20
    */

    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
        {
            a = multiplica(m[i][j], i);
            cout << " " << a;
        }
    }

    return 0;
}
