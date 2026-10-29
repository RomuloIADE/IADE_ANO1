#include <iostream>
#include <iomanip>
using namespace std;

/*
Depois de dois anos de namoro, um casal decidiu viver junto para reduzir as despesas e dividi-las
de forma equilibrada. Escreva um algoritmo que leia o salário mensal de cada pessoa e o valor
total das despesas. Calcule e apresente a percentagem das despesas que cada pessoa deve
pagar, bem como o respetivo valor. A divisão deve ser proporcional aos salários: quem ganha
mais paga uma parte maior das despesas.
Exemplo de execução
Salário da primeira pessoa: 1200
Salário da segunda pessoa: 1800
Total das despesas: 1500
A primeira pessoa deve pagar 40,00% das despesas: 600.00
A segunda pessoa deve pagar 60,00% das despesas: 900.00
*/

int main() {

    cout << fixed << setprecision(2);

    double  salarioPrimeiraPessoa, salarioSegundaPessoa, totalSalarios, valorTotalDespesas,
            percentagemPrimeiraPessoa, percentagemSegundaPessoa, valorPagarPrimeiraPessoa,
            valorPagarSegundaPessoa;


    cout << "Indique o salário da primeira pessoa: " ;
    cin >> salarioPrimeiraPessoa;

    cout << "Indique o salário da segunda pessoa: " ;
    cin >> salarioSegundaPessoa;

    cout << "Indique o valor total de despesas: " ;
    cin >> valorTotalDespesas;

    totalSalarios = salarioPrimeiraPessoa + salarioSegundaPessoa;
    percentagemPrimeiraPessoa = salarioPrimeiraPessoa / totalSalarios;
    percentagemSegundaPessoa = salarioSegundaPessoa / totalSalarios;

    // Aqui poderia também fixar o valor da percentagem numa variável à parte para não usar o * 100,
    // mas como é um programa relativamente pequeno, resolvi fazer assim.

    valorPagarPrimeiraPessoa = valorTotalDespesas * percentagemPrimeiraPessoa;
    cout << "A primeira pessoa deve pagar "<< percentagemPrimeiraPessoa * 100 << "%" " das despesas: " << valorPagarPrimeiraPessoa << endl;

    valorPagarSegundaPessoa = valorTotalDespesas * percentagemSegundaPessoa;
    cout << "A segunda pessoa deve pagar "<< percentagemSegundaPessoa * 100 << "%" " das despesas: " << valorPagarSegundaPessoa << endl;

    return 0;
}
