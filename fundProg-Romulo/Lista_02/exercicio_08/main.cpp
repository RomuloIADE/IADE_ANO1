#include <iomanip>
#include <iostream>

using namespace std;


int main() {
    int preco_tshirts = 10;
    int preco_calcas = 45;
    int preco_cintos = 15;
    int quantidade_tshirts, quantidade_calcas, quantidade_cintos;
    double total_compras_sem_desconto, desconto_dez_porcento, total_compras_com_desconto;

    cout << "Qual a quantidade de T-Shirts compradas? ";
    cin >> quantidade_tshirts;

    cout << "Qual a quantidade de Calças compradas? ";
    cin >> quantidade_calcas;


    cout << "Qual a quantidade de Cintos comprados? ";
    cin >> quantidade_cintos;

    total_compras_sem_desconto = (quantidade_tshirts * preco_tshirts) + (quantidade_calcas * preco_calcas) + (quantidade_cintos * preco_cintos);
    desconto_dez_porcento = total_compras_sem_desconto * 0.10;
    total_compras_com_desconto = total_compras_sem_desconto - desconto_dez_porcento;

    // fixar o número de casas decimais
    cout << fixed << setprecision(2);

    cout << "O valor total sem desconto é de: " << total_compras_sem_desconto << endl;
    cout << "O valor do desconto é de: " << desconto_dez_porcento << endl;
    cout << "O valor total a pagar é de: " << total_compras_com_desconto << endl;

    return 0;
}