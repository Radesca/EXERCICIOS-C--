/*
(4.a)
void f1(int a, int b){ // f1(………. , ………. )
 int aux;
 aux = a; //aux = ……….
 a = b; //a = ……….
 b = aux; //b = ……….
 cout << "\nDentro da Funcao: " << a << " e " << b; //Dentro da Funcao: ......... e ..........
}
main(){
 int x = 2;
 int y = 3;
 cout << "\nAntes: " << x << " e " << y; //Antes: .......... e ..........
 f1(x,y); //f1(......... , .........)
 cout << "\nDepois:" << x << " e " << y; //Depois: .......... e ..........
}

(4.b)
void soma(int n){
 n++;
 cout << "\nDentro da Funcao: x = " << n; //R:..................
}
main(){
 int x = 5;
 cout << "\nAntes da Funcao: x = " << x; //R:....................
 soma(x);
 cout << "\nDepois da Funcao: x = " << x; //R:...................
}
*/

// ---------- 4.a ----------
#include <iostream>
using namespace std;

void f1(int a, int b)
{ // f1( 2 , 3 )
    int aux;
    aux = a;                                           // aux = 2
    a = b;                                             // a = 3
    b = aux;                                           // b = 2
    cout << "\nDentro da Funcao: " << a << " e " << b; // Dentro da Funcao: 3 e 2
}

void soma(int n)
{
    n++;
    cout << "\nDentro da Funcao: x = " << n; // R: Dentro da Funcao: x = 6
}

int main()
{
    // ---- Parte 4.a ----
    int x = 2;
    int y = 3;

    // Teste de mesa:
    // Antes: x = 2, y = 3
    cout << "\nAntes: " << x << " e " << y; // Antes: 2 e 3
    f1(x, y);                               // f1( 2 , 3 )
    // Depois: x e y não mudam (passagem por valor)
    cout << "\nDepois:" << x << " e " << y; // Depois: 2 e 3

    // ---- Parte 4.b ----
    int z = 5;
    // Antes da função:
    cout << "\nAntes da Funcao: x = " << z; // R: Antes da Funcao: x = 5
    soma(z);                                // Dentro da Funcao: x = 6
    // Depois:
    cout << "\nDepois da Funcao: x = " << z; // R: Depois da Funcao: x = 5

    return 0;
}

/*
RESUMO DO TESTE DE MESA:

--- 4.a ---
Antes: 2 e 3
Dentro da Funcao: 3 e 2
Depois: 2 e 3

--- 4.b ---
Antes da Funcao: x = 5
Dentro da Funcao: x = 6
Depois da Funcao: x = 5
*/
