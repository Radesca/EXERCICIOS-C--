/*

15) Escreva um algoritmo que leia o vetor A, do tipo inteiro, com 10 elementos. A
partir do vetor lido gere o vetor B de, 5 elementos, com a última metade do vetor A.
Gere também o vetor C com a primeira metade do vetor A. Imprima os vetores B e C.

*/

#include <iostream>
using namespace std;

int main()
{
  int A[10], B[5], C[5];

  // Leitura do vetor A
  cout << "Digite 10 elementos inteiros para o vetor A:" << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << "Elemento " << i + 1 << ": ";
    cin >> A[i];
  }

  // Geração do vetor B (última metade de A)
  for (int i = 0; i < 5; i++)
  {
    B[i] = A[i + 5];
  }

  // Geração do vetor C (primeira metade de A)
  for (int i = 0; i < 5; i++)
  {
    C[i] = A[i];
  }

  // Impressão dos vetores B e C
  cout << "Vetor B (última metade de A): ";
  for (int i = 0; i < 5; i++)
  {
    cout << B[i] << " ";
  }
  cout << endl;

  cout << "Vetor C (primeira metade de A): ";
  for (int i = 0; i < 5; i++)
  {
    cout << C[i] << " ";
  }
  cout << endl;

  return 0;
}
