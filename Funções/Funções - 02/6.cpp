/*
6. Escreva um programa que leia um vetor de 10 elementos do tipo real. Calcule e mostre:
a) A soma entre os elementos >= 10;
b) A multiplicação entre os elementos > 0;
c) A raiz quadrada de cada elemento > 3.

#define t 5
float a[t];
float soma(float x){
 if (x >= 10){
   return x;
 }
 else {
   return 0;
 }
}
float mult(float y){
 if (y > 0){
   return y;
 }
 else {
   return 1;
 }
}
bool teste3(float z){
 if (z > 3){
   return true;
 }
 else {
   return false;
 }
}
void leitura(){
 float s = 0, m = 1;
 for(int i=0; i < t; i++){
   cout << "\nDigite o " << i + 1 << "o. elemento: ";
   cin >> a[i];
   s = s + soma(a[i]);
   m = m * mult(a[i]);
   if (teste3(a[i])){
     cout << "\nA raiz de " << a[i] << " e: " << sqrt(a[i]);
   }
   else {
     cout << "\nNao posso extrair a raiz. Num < 3.";
   }
 }
 cout << "\n\nA soma e: " << s;
 cout << "\n\nA multiplicacao e: " << m;
}
main(){
 leitura();
}
*/

#include <iostream>
#include <cmath>
using namespace std;

#define t 10
float a[t];

float soma(float x)
{
    return (x >= 10) ? x : 0;
}

float mult(float y)
{
    return (y > 0) ? y : 1;
}

bool teste3(float z)
{
    return (z > 3);
}

void leitura()
{
    float s = 0, m = 1;
    for (int i = 0; i < t; i++)
    {
        cout << "\nDigite o " << i + 1 << "o. elemento: ";
        cin >> a[i];
        s += soma(a[i]);
        m *= mult(a[i]);

        if (teste3(a[i]))
        {
            cout << "\nA raiz de " << a[i] << " e: " << sqrt(a[i]);
        }
        else
        {
            cout << "\nNao posso extrair a raiz. Num < 3.";
        }
    }
    cout << "\n\nA soma e: " << s;
    cout << "\n\nA multiplicacao e: " << m;
}

int main()
{
    leitura();
    return 0;
}

/*
TESTE DE MESA (exemplo de entrada)
Entrada: [ 2 , 16 , -4 , 5 , 10 , 1 , 20 , 0 , 9 , 4 ]

--- Passo a passo ---
i=0: 2 → soma=0, mult=1*1=1, raiz? não (>3? não) → "Nao posso extrair..."
i=1: 16 → soma=0+16=16, mult=1*16=16, raiz? sim → raiz=4.0
i=2: -4 → soma=16+0=16, mult=16*1=16, raiz? não
i=3: 5 → soma=16+0=16, mult=16*5=80, raiz? sim → raiz≈2.236
i=4: 10 → soma=16+10=26, mult=80*10=800, raiz? sim → raiz≈3.162
i=5: 1 → soma=26+0=26, mult=800*1=800, raiz? não
i=6: 20 → soma=26+20=46, mult=800*20=16000, raiz? sim → raiz≈4.472
i=7: 0 → soma=46+0=46, mult=16000*1=16000, raiz? não
i=8: 9 → soma=46+0=46, mult=16000*9=144000, raiz? sim → raiz=3.0
i=9: 4 → soma=46+0=46, mult=144000*4=576000, raiz? sim → raiz=2.0

--- Resultados ---
Soma dos elementos >=10 = 46
Multiplicação dos elementos >0 = 576000
Raízes exibidas para: 16, 5, 10, 20, 9, 4
*/
