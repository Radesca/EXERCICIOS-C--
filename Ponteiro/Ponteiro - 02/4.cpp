/*

4. Leia o código-fonte abaixo e escreva nas linhas pontilhadas a saída do programa.
main (){
 int *ponteiro, vetor[4] = {5, 10, 20, 30};
 ponteiro = &vetor[0];
 ponteiro+= 2;
 cout << "Valor apontado: " << *ponteiro; Resposta:……..……................…..
 ponteiro++;
 cout << "\nValor apontado: " << ponteiro; Resposta:.......................................
}

*/

#include <iostream>

using namespace std;

int main()
{
    int *ponteiro, vetor[4] = {5, 10, 20, 30};
    ponteiro = &vetor[0];
    ponteiro += 2;
    cout << "Valor apontado: " << *ponteiro; // Resposta: 20
    ponteiro++;
    cout << "\nValor apontado: " << ponteiro; // Resposta: Endereço de memória do elemento vetor[3]
    return 0;
}