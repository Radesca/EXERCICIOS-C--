/*
11. Faça um algoritmo em que o usuário precise digitar o valor do raio. A seguir calcule e mostre:
a) O comprimento de uma esfera, sabe-se que: C = 2 π R;
b) A área de uma esfera, sabe-se que: A = π R²;
c) O volume de uma esfera, sabe-se que: V = 3 / 4 π R³.
π = 3.14159
Não permita que o usuário digite R = 0. Se isso ocorrer, mostre a mensagem “Raio não pode ser 0” e finalize o algoritmo.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double r;
    cout << "Digite o valor do raio: ";
    cin >> r;
    if (r == 0)
    {
        cout << "Raio não pode ser 0" << endl;
        return 0;
    }
    double comprimento = 2 * PI * r;
    double area = PI * r * r;
    double volume = (3.0 / 4.0) * PI * pow(r, 3);
    cout << "Comprimento: " << comprimento << endl;
    cout << "Área: " << area << endl;
    cout << "Volume: " << volume << endl;
    return 0;
}
