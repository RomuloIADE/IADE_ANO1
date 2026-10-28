#include <iostream>
#include <iomanip>
using namespace std;


/*
O Pedrinho tem um mealheiro com muitas moedas e quer saber quantos euros conseguiu
poupar. Escreva um algoritmo que leia a quantidade de moedas de cada valor e apresente o
montante total poupado, em euros. Considere moedas de 1, 2, 5, 10, 20 e 50 cêntimos, bem
como moedas de 1 € e 2 €. Se não existir nenhuma moeda de determinado valor, a quantidade
correspondente será zero.
Exemplo de execução
Moedas de 1 cêntimo: 5
Moedas de 2 cêntimos: 3
Moedas de 5 cêntimos: 4
Moedas de 10 cêntimos: 6
Moedas de 20 cêntimos: 2
Moedas de 50 cêntimos: 3
Moedas de 1 euro: 4
Moedas de 2 euros: 1
Total poupado: 9.28 euros
*/

int main() {

    cout << fixed << setprecision(2);

    double  moedasUmCentimo,
            moedasDoisCentimos,
            moedasCincoCentimos,
            moedasDezCentimos,
            moedasVinteCentimos,
            moedasCinquentaCentimos,
            moedasUmEuro,
            moedasDoisEuros,
            totalPoupado;

    cout << "Moedas de 1 cêntimo: ";
    cin >> moedasUmCentimo;

    cout << "Moedas de 2 cêntimos: ";
    cin >> moedasDoisCentimos;

    cout << "Moedas de 5 cêntimos: ";
    cin >> moedasCincoCentimos;

    cout << "Moedas de 10 cêntimos: ";
    cin >> moedasDezCentimos;

    cout << "Moedas de 20 cêntimos: ";
    cin >> moedasVinteCentimos;

    cout << "Moedas de 50 cêntimos: ";
    cin >> moedasCinquentaCentimos;

    cout << "Moedas de 1 euro: ";
    cin >> moedasUmEuro;

    cout << "Moedas de 2 euros: ";
    cin >> moedasDoisEuros;

    totalPoupado =  (moedasUmCentimo * 0.01) + (moedasDoisCentimos * 0.02) +
                    (moedasCincoCentimos * 0.05) + (moedasDezCentimos * 0.1) +
                    (moedasVinteCentimos * 0.2) + (moedasCinquentaCentimos * 0.5) +
                    (moedasUmEuro * 1) + (moedasDoisEuros * 2);

    cout << "Total poupado: " << totalPoupado <<"€";
    return 0;
}
