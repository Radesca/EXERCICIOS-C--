/*
2. Escreva um programa que, a partir do vetor m[15], verifique em quais posições existe espaço
em branco. Elabore o Teste de Mesa para o programa.
#define t 15
int verifica_vogal (char k){
 if (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u'){
 return 1;}
 else {
 return 0;}
}
main(){
 char m[t] = {'j', 'e', 'm', ' ', 'i', 'b', 'd', 'a', 'o', 'u', 'p', ' ', ' ', 'e', 'o'};
 int q = 0, i;
 for (i = 0; i < t; i = i+2){
 q = q + verifica_vogal(m[i]);
 if(m[i] == ' ')
 cout << "\n\nExiste um espaco em branco na posicao " << i+1 << "\n";
 }
 cout << "\n\nA quantidade de Vogais " << q;
}
*/

#include <iostream>
using namespace std;

#define t 15

int verifica_vogal(char k)
{
    return (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u') ? 1 : 0;
}

int main()
{
    char m[t] = {'j', 'e', 'm', ' ', 'i', 'b', 'd', 'a', 'o', 'u', 'p', ' ', ' ', 'e', 'o'};
    int q = 0;

    /*
    TESTE DE MESA (o laço percorre APENAS as posições pares: i = 0,2,4,6,8,10,12,14)

    Índice i | m[i] | verifica_vogal(m[i]) | q antes -> depois | m[i]==' ' ? | Impressão
    ---------|------|----------------------|-------------------|-------------|-------------------------------
       0     |  'j' |          0           |   0 -> 0          |    não      | -
       2     |  'm' |          0           |   0 -> 0          |    não      | -
       4     |  'i' |          1           |   0 -> 1          |    não      | -
       6     |  'd' |          0           |   1 -> 1          |    não      | -
       8     |  'o' |          1           |   1 -> 2          |    não      | -
      10     |  'p' |          0           |   2 -> 2          |    não      | -
      12     |  ' ' |          0           |   2 -> 2          |    SIM      | "Existe um espaco em branco na posicao 13"
      14     |  'o' |          1           |   2 -> 3          |    não      | -

    Ao final: q = 3

    OBS.: Embora o vetor tenha espaços em '3', '11' e '12' (índices 0-based: 3, 11, 12),
          o programa SÓ verifica as posições pares. Por isso, detecta apenas o espaço da posição 13 (1-based).
    */

    for (int i = 0; i < t; i += 2)
    {
        q += verifica_vogal(m[i]);
        if (m[i] == ' ')
        {
            cout << "\n\nExiste um espaco em branco na posicao " << i + 1 << "\n";
        }
    }

    cout << "\n\nA quantidade de Vogais " << q;

    // SAÍDA ESPERADA:
    // Existe um espaco em branco na posicao 13
    // A quantidade de Vogais 3

    return 0;
}
