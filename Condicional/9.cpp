
/*
9. Construa um algoritmo que resolva equações do 2º grau: ax2 + bx + c = 0. Se a for igual a zero imprima “Estes valores não formam uma equação do 2º grau”.
Fórmula para o Δ = b2 – 4 a c
Se Δ < 0 Imprima “Não existe raiz real”
Se Δ = 0 Imprima “Existe uma raiz real”. A fórmula é: x = -b / (2*a)
Se Δ > 0 Imprima “Existem duas raízes reais”. Utilize as seguintes fórmulas:
x1 = (-b + sqrt(Δ)) / (2*a)
x2 = (-b - sqrt(Δ)) / (2*a)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Digite os coeficientes a, b e c: ";
    cin >> a >> b >> c;
    if (a == 0)
    {
        cout << "Estes valores não formam uma equação do 2º grau" << endl;
        return 0;
    }
    double delta = b * b - 4 * a * c;
    cout << "Delta: " << delta << endl;
    if (delta < 0)
    {
        cout << "Não existe raiz real" << endl;
    }
    else if (delta == 0)
    {
        double x = -b / (2 * a);
        cout << "Existe uma raiz real: x = " << x << endl;
    }
    else
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Existem duas raízes reais: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    return 0;
}
