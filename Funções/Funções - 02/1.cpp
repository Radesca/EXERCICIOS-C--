/*
1. Elabore o Teste de Mesa, os valores impressos pelo programa:
#define T 4
main(){
 int i, j, s, a[T][T]= {8, 11, 0, 20,
 12, 14, 9, 30,
 18, 6, 10, 40,
 5, 20, 3, 1};
 for (j = 0; j < T; j++){
   s = 0;
   for (i = 0; i < T; i++){
     if(a[i][j] > 10){
       s = s + a[i][j];
     }
   }
   cout << "\nO valor e: " << s;
 }
}
*/

// Resolução com Teste de Mesa:

#include <iostream>
#define T 4
using namespace std;

int main()
{
    int i, j, s;
    int a[T][T] = {
        {8, 11, 0, 20},
        {12, 14, 9, 30},
        {18, 6, 10, 40},
        {5, 20, 3, 1}};

    // Teste de Mesa:
    // j=0 → valores na coluna 0: 8, 12, 18, 5 → >10: 12 + 18 = 30
    // j=1 → valores na coluna 1: 11, 14, 6, 20 → >10: 11 + 14 + 20 = 45
    // j=2 → valores na coluna 2: 0, 9, 10, 3 → >10: nenhum → 0
    // j=3 → valores na coluna 3: 20, 30, 40, 1 → >10: 20 + 30 + 40 = 90
    // Saída esperada:
    // O valor e: 30
    // O valor e: 45
    // O valor e: 0
    // O valor e: 90

    for (j = 0; j < T; j++)
    {
        s = 0;
        for (i = 0; i < T; i++)
        {
            if (a[i][j] > 10)
            {
                s = s + a[i][j];
            }
        }
        cout << "\nO valor e: " << s;
    }

    return 0;
}
