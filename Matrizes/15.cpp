/*
15. Leia o código-fonte abaixo e mostre, com o Teste de Mesa, os valores impressos pelo programa:

#define T 4
main(){
 int i, j, s, a[T][T]= { 8, 11, 0, 20,
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

// ---------- TESTE DE MESA ----------
// Matriz a[T][T]:
// Coluna 0 → [  8 , 12 , 18 ,  5 ]
// Coluna 1 → [ 11 , 14 ,  6 , 20 ]
// Coluna 2 → [  0 ,  9 , 10 ,  3 ]
// Coluna 3 → [ 20 , 30 , 40 ,  1 ]
//
// Para cada coluna (j), percorre todas as linhas (i) e soma somente valores > 10.

// j=0: s=0
//  i=0: 8  >10? não → s=0
//  i=1: 12 >10? sim → s=0+12=12
//  i=2: 18 >10? sim → s=12+18=30
//  i=3: 5  >10? não → s=30
//  imprime: O valor e: 30

// j=1: s=0
//  i=0: 11 >10? sim → s=0+11=11
//  i=1: 14 >10? sim → s=11+14=25
//  i=2: 6  >10? não → s=25
//  i=3: 20 >10? sim → s=25+20=45
//  imprime: O valor e: 45

// j=2: s=0
//  i=0: 0  >10? não → s=0
//  i=1: 9  >10? não → s=0
//  i=2: 10 >10? não (igual a 10, não conta) → s=0
//  i=3: 3  >10? não → s=0
//  imprime: O valor e: 0

// j=3: s=0
//  i=0: 20 >10? sim → s=0+20=20
//  i=1: 30 >10? sim → s=20+30=50
//  i=2: 40 >10? sim → s=50+40=90
//  i=3: 1  >10? não → s=90
//  imprime: O valor e: 90

// ---------- SAÍDA ESPERADA ----------
/*
O valor e: 30
O valor e: 45
O valor e: 0
O valor e: 90
*/
