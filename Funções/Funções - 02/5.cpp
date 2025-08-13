/*
5. Escreva um programa que leia um vetor de 8 elementos inteiros. Calcule e mostre:
a) O maior elemento;
b) O menor elemento;
c) Pegue o último elemento do vetor e multiplique todos os elementos por ele. Mostre a multiplicação.

#define t 8
float a[t];
void leitura(){
 for(int i = 0; i < t; i++){
   cout << "\nDigite o " << i + 1 << "o. elemento: ";
   cin >> a[i];
 }
}
float maior(){
 float ma = a[0];
 for(int i = 1; i < t; i++){
   if(a[i] > ma){
     ma = a[i];
   }
 }
 return ma;
}
float menor(){
 float me = a[0];
 for(int i = 1; i < t; i++){
   if(a[i] < me){
     me = a[i];
   }
 }
 return me;
}
void ultimo(){
 for(int i = 0; i < t; i++){
   cout << "\nO elem multiplicado por " << a[7] << " = " a[i]*a[7];
 }
}
main(){
 leitura();
 cout << "\nO maior " << maior();
 cout << "\nO menor " << menor();
 ultimo();
}
*/

#include <iostream>
using namespace std;

#define t 8
float a[t];

void leitura()
{
    for (int i = 0; i < t; i++)
    {
        cout << "\nDigite o " << i + 1 << "o. elemento: ";
        cin >> a[i];
    }
}

float maior()
{
    float ma = a[0];
    for (int i = 1; i < t; i++)
    {
        if (a[i] > ma)
        {
            ma = a[i];
        }
    }
    return ma;
}

float menor()
{
    float me = a[0];
    for (int i = 1; i < t; i++)
    {
        if (a[i] < me)
        {
            me = a[i];
        }
    }
    return me;
}

void ultimo()
{
    for (int i = 0; i < t; i++)
    {
        cout << "\nO elem multiplicado por " << a[7] << " = " << a[i] * a[7];
    }
}

int main()
{
    leitura();
    cout << "\nO maior " << maior();
    cout << "\nO menor " << menor();
    ultimo();
    return 0;
}

/*
TESTE DE MESA (exemplo de entrada)
Entrada do vetor a:
[ 4 , 7 , -2 , 10 , 5 , 0 , 8 , 3 ]

1) MAIOR:
   Começa ma = 4
   7 > 4 → ma = 7
   -2 > 7? não
   10 > 7 → ma = 10
   5 > 10? não
   0 > 10? não
   8 > 10? não
   3 > 10? não
   → Maior = 10

2) MENOR:
   Começa me = 4
   7 < 4? não
   -2 < 4 → me = -2
   10 < -2? não
   5 < -2? não
   0 < -2? não
   8 < -2? não
   3 < -2? não
   → Menor = -2

3) MULTIPLICAÇÃO PELO ÚLTIMO ELEMENTO (a[7] = 3):
   a[0] * 3 = 12
   a[1] * 3 = 21
   a[2] * 3 = -6
   a[3] * 3 = 30
   a[4] * 3 = 15
   a[5] * 3 = 0
   a[6] * 3 = 24
   a[7] * 3 = 9

SAÍDA ESPERADA:
O maior 10
O menor -2
O elem multiplicado por 3 = 12
O elem multiplicado por 3 = 21
O elem multiplicado por 3 = -6
O elem multiplicado por 3 = 30
O elem multiplicado por 3 = 15
O elem multiplicado por 3 = 0
O elem multiplicado por 3 = 24
O elem multiplicado por 3 = 9
*/
