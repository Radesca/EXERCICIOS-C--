/*

1) Escreva os valores que serão impressos nas duas instruções cout:
main(){
 int i=3, j=5;
 int *p = &i;
 cout << p << endl; Resposta:……........................................
 cout << *p * 2 + j; Resposta:……….........….....…………………..
 getch();}

*/

#include <iostream>

using namespace std;

int main()
{
    int i = 3, j = 5;
    int *p = &i;
    cout << p << endl;  // Resposta: Endereço de memória da variável i
    cout << *p * 2 + j; // Resposta: 11 (pois *p é 3, então 3*2 + 5 = 11)
    return 0;
}
