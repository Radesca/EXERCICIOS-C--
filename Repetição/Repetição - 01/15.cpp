
/*
15) Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m², deve-se usar 18w de potência. Faça um algoritmo que leia as duas dimensões de um cômodo (em metros), calcule e mostre:
    a) A área do cômodo (em m²);
    b) A potência de iluminação que deverá ser utilizada.
    Finalize o algoritmo quando a primeira dimensão for igual a 0.
*/

#include <iostream>
using namespace std;

int main()
{
    float dim1, dim2, area, potencia;
    int contador = 1;
    while (true)
    {
        cout << "Digite a primeira dimensão do cômodo " << contador << " (0 para sair): ";
        cin >> dim1;
        if (dim1 == 0)
            break;
        cout << "Digite a segunda dimensão do cômodo: ";
        cin >> dim2;
        area = dim1 * dim2;
        potencia = area * 18;
        cout << "Área do cômodo: " << area << " m²" << endl;
        cout << "Potência de iluminação necessária: " << potencia << " w" << endl;
        contador++;
    }
    return 0;
}
