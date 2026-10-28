#include <iostream>
#include <iomanip>
using namespace std;

/*
O restaurante a quilo Bem-Bom cobra 21,00 € por quilograma de comida. Escreva um algoritmo
que leia o peso da comida servida ao cliente, em gramas, e apresente o valor a pagar. A balança
desconta automaticamente o peso do prato; por isso, deve ser considerado apenas o peso da
comida.
Exemplo de execução
Peso da comida (em gramas): 750
Valor a pagar: 15.75 euros
 */

int main() {

    double precoQuilo = 21;
    double comidaServida, valoraPagar;

    cout << "Indique o peso da comida servida ao cliente em gramas: ";
    cin >> comidaServida;

    valoraPagar = precoQuilo * (comidaServida/1000);
    cout << "O valor a pagar é de " << fixed << setprecision(2) << valoraPagar <<"€";

    return 0;

}

// commit test