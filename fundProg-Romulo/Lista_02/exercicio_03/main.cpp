#include <iostream>

using namespace std;

int main() {

    double quantidade_pao, quantidade_broa, vendas_pao, vendas_broa, total_vendas;
    double preco_broa = 1.5;
    double preco_pao = 0.14;

    cout << "Quantas broas foram vendidas? ";
    cin >> quantidade_broa;

    cout << "Quantos pães foram vendidos? ";
    cin >> quantidade_pao;

    vendas_broa = preco_broa * quantidade_broa;
    vendas_pao = preco_pao * quantidade_pao;
    total_vendas = vendas_broa + vendas_pao;

    cout << "O valor total de vendas em euros foi de: " << total_vendas;

    return 0;
}
