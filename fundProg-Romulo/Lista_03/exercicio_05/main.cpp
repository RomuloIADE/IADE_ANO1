#include <iostream>
#include <iomanip>
using namespace std;

/*
Escreva um algoritmo que leia o valor do salário mínimo e o salário mensal de um funcionário.
Calcule e apresente quantos salários mínimos correspondem ao salário desse funcionário.
Exemplo de execução
Valor do salário mínimo: 820
Salário do funcionário: 1640
O salário do funcionário corresponde a 2.00 salários mínimos.
*/
int main() {

    cout << fixed << setprecision(2);

    double salarioMinimo, salarioMensal, salarioCorrespondente;

    cout << "Qual é o valor do salário mínimo? ";
    cin >> salarioMinimo;

    cout << "Qual é o valor do salário mensal do funcionário? ";
    cin >> salarioMensal;

    salarioCorrespondente = salarioMensal / salarioMinimo;

    cout << "O salário do funcionário corresponde a " << salarioCorrespondente << " salários mínimos.";


    return 0;
}
