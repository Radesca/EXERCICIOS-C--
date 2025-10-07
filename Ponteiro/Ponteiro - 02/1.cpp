/*

1. Leia o código abaixo e assinale para cada IF qual será a saída do programa:
main(){
 int *p, *p1, x=10, y=20;
 p = &x;
 p1 = &y;
 if(p == p1){
 cout << "Ponteiros iguais\n";} ( )
 else{
 cout << "Ponteiros diferentes\n";} ( )
 if(*p > *p1){
 cout << "O conteúdo de p é maior que o conteúdo de p1\n";} ( )
 else{
 cout << "O conteúdo de p NÃO é maior que o conteúdo de p1\n";} ( )
 }


*/

#include <iostream>

using namespace std;

int main()
{
    int *p, *p1, x = 10, y = 20;
    p = &x;
    p1 = &y;
    if (p == p1)
    {
        cout << "Ponteiros iguais\n"; // Saída: Ponteiros diferentes
    }
    else
    {
        cout << "Ponteiros diferentes\n"; // Saída: Ponteiros diferentes
    }
    if (*p > *p1)
    {
        cout << "O conteúdo de p é maior que o conteúdo de p1\n"; // Saída: O conteúdo de p NÃO é maior que o conteúdo de p1
    }
    else
    {
        cout << "O conteúdo de p NÃO é maior que o conteúdo de p1\n"; // Saída: O conteúdo de p NÃO é maior que o conteúdo de p1
    }
    return 0;
}