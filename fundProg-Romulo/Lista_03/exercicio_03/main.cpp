#include <iostream>
# include<iomanip>
using namespace std;


/*
A fábrica de sumos Sumo Meu vende os seus produtos em três formatos: garrafas de 33 cl,
garrafas de 75 cl e garrafas de 1,3 litros. Escreva um algoritmo que leia o número de garrafas de
cada formato compradas por um cliente e calcule a quantidade total de sumo comprada, em litros.
Exemplo de execução
Número de garrafas de 33 cl: 4
Número de garrafas de 75 cl: 2
Número de garrafas de 1,3 litros: 3
Quantidade total comprada: 6.72 litros
*/
int main() {

    cout << fixed << setprecision(2);

    double garrafasPequenas, garrafasMedias, garrafasGrandes;
    double totalLitros;

    cout << "Número de garrafas de 33 cl: ";
    cin >> garrafasPequenas;

    cout << "Número de garrafas de 75 cl: ";
    cin >> garrafasMedias;

    cout << "Número de garrafas de 1,3 litros: ";
    cin >> garrafasGrandes;

    totalLitros = (garrafasPequenas * 0.33) + (garrafasMedias * 0.75) + (garrafasGrandes * 1.3);
    cout << "Quantidade total comprada: " << totalLitros <<" litros";

    return 0;
}
