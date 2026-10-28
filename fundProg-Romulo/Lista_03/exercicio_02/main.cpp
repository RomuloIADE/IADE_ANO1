#include <iostream>
#include <iomanip>
using namespace std;


/*
 *Escreva um algoritmo que leia o salário de um funcionário e aplique um aumento de 15%. Depois,
desconte 8% para impostos sobre o salário já aumentado. Apresente o salário inicial, o salário
após o aumento e o salário final, depois do desconto dos impostos.
Exemplo de execução
Salário inicial: 1200
Salário após o aumento: 1380.00 euros
Salário final, depois dos impostos: 1269.60 euros
*/

int main(){
    cout << fixed << setprecision(2);

    double salario, salarioAposAumento, salarioAposDesconto;

    cout << "Indique o valor do salário: ";
    cin >> salario;

    salarioAposAumento = salario + (salario * 0.15);
    salarioAposDesconto = salarioAposAumento - salarioAposAumento * 0.08;

    cout << "Salário incial: " << salario << endl;
    cout << "Salário apos o aumento: " << salarioAposAumento << endl;
    cout << "Salário final, depois dos impostos: " << salarioAposDesconto << endl;
}

