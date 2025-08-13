
/*
2) Beatriz nasceu no ano de 2002. Deseja-se saber:
    a) A idade de Beatriz;
    b) Quantos anos Beatriz terá em 2030.
*/
#include <iostream>
using namespace std;

int main()
{
    int ano_nasc = 2002;
    int ano_atual = 2025;
    int idade = ano_atual - ano_nasc;
    int idade_2030 = 2030 - ano_nasc;
    cout << "Idade de Beatriz em " << ano_atual << ": " << idade << " anos." << endl;
    cout << "Idade de Beatriz em 2030: " << idade_2030 << " anos." << endl;
    return 0;
}
