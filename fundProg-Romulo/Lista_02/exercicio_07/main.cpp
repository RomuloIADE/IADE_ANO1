#include <iostream>
using namespace std;

int main() {

    double valor_total_compra, total_com_desconto;

    cout << "Qual foi o valor total da compra? " ;
    cin >> valor_total_compra;

    total_com_desconto = valor_total_compra - (valor_total_compra * 0.15);

    cout << "O valor final após o desconto é de: " << total_com_desconto;
    return 0;
}
// Fundamentos da Programacao - Exercicio 07