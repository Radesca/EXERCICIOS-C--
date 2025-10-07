/*

2. Leia o código abaixo e responda:
a. Qual será o resultado da operação *p - *q? Escreva em “Resposta”.
b. Analise o if(p == &i) e assinale a saída correta.
main(){
 int i=3, j=5;
 int *p=&i, *q=&j;
 cout << "*p - *q = " << *p-*q; //Resposta:____________
 if(p == &i){
 cout <<"\nSao iguais";}// ( )
 else{
 cout << "\nSao diferentes";} ( )
 }

*/

#include <iostream>

using namespace std;

int main()
{
    int i = 3, j = 5;
    int *p = &i, *q = &j;
    cout << "*p - *q = " << *p - *q; // Resposta: -2 (pois 3 - 5 = -2)
    if (p == &i)
    {
        cout << "\nSao iguais"; // Saída: Sao iguais
    } // (X)
    else
    {
        cout << "\nSao diferentes";
    } // ( )
    return 0;
}