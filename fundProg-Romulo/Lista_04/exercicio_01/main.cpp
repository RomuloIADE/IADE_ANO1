#include <iostream>
using namespace std;

/*
Implemente um programa que calcule o desconto para a Segurança Social de um trabalhador.
Dado o valor do salário, o programa deve devolver o valor do desconto correspondente.
O desconto é de 11% do salário, até ao limite máximo de 121 euros.
Assim, o programa deve devolver 11% do salário ou 121 euros, consoante o valor mais baixo.
*/

int main() {
    double desconto;
    double salario;
    double descontoFinal;
    cout << "Qual o valor de salario?" ;
    cin >> salario;
    desconto = salario * 0.11;
    if (desconto <= 121) {
        descontoFinal = desconto;
        cout << "O desconto para a segurança social é de: " << descontoFinal << endl;
   }
    else {
        (descontoFinal = 121);
        cout << "O desconto para a segurança social é de: " << descontoFinal << endl;
    }
    return 0;
    }