
/*
4) Daniela começou a fazer controle alimentar e a sua Nutricionista disse que durante o tratamento ela pode engordar 15% sobre seu peso ou emagrecer 20%.
    Daniela pesa 52 kg. A partir do peso de Daniela, calcule o novo peso:
    a) Caso ela engorde 15% sobre o peso;
    b) Caso ela emagreça 20% sobre o peso.
*/
#include <iostream>
using namespace std;

int main()
{
    float peso = 52.0;
    float engordar = peso * 1.15;
    float emagrecer = peso * 0.8;
    cout << "Peso se engordar 15%: " << engordar << " kg" << endl;
    cout << "Peso se emagrecer 20%: " << emagrecer << " kg" << endl;
    return 0;
}
