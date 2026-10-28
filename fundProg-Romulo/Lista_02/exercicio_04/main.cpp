#include <iostream>

using namespace std;

int main() {

    double preco_litro, montante_disponivel, quantidade_litros_abastecida;

    cout << "Qual é o preço do combustível por litro em euros? ";
    cin >> preco_litro;

    cout << "Qual o montante que tem disponível para abastecer? ";
    cin >> montante_disponivel;

    quantidade_litros_abastecida = montante_disponivel / preco_litro;

    cout << "Com o montante disponível poderá abastecer " << quantidade_litros_abastecida << " litros";

    return 0;
}