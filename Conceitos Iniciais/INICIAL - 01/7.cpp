
/*
7) Fabiane tem R$600,00 e deseja comprar dólares com esse valor.
    Sabe-se que a cotação do dólar americano está em R$5,23.
    Quantos dólares Fabiane conseguirá comprar com R$600,00?
*/
#include <iostream>
using namespace std;

int main()
{
    float reais = 600.0, cotacao = 5.23;
    float dolares = reais / cotacao;
    cout << "Fabiane conseguirá comprar " << dolares << " dólares." << endl;
    return 0;
}
