
/*
12) Escreva um algoritmo que calcule o volume de uma esfera em função do raio R. O raio deverá variar de 1 a 20 cm de 0.5 em 0.5 cm.
    V = (4/3) * π * R^3
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (double r = 1; r <= 20; r += 0.5)
    {
        double volume = (4.0 / 3.0) * M_PI * pow(r, 3);
        cout << "Raio: " << r << " cm - Volume: " << volume << " cm³" << endl;
    }
    return 0;
}
