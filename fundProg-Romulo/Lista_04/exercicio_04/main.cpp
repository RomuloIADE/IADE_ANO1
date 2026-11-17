#include <iostream>
using namespace std;

/*
Crie um programa que simule o funcionamento de uma caixa multibanco.
O utilizador deve indicar o montante que pretende levantar e o programa
deve apresentar a quantidade de notas a entregar.
Considere que a caixa multibanco dá prioridade às notas de maior valor e
que dispõe de notas de 100, 50, 20, 10 e 5 euros.
O programa deve apresentar apenas as notas efetivamente utilizadas.
Por exemplo, para um levantamento de 235 euros, o programa deve apresentar:
2 notas de 100 euros.
1 nota de 20 euros.
1 nota de 10 euros.
1 nota de 5 euros.
*/


int main() {
    
    int montante, restante;
    int notas100, notas50, notas20, notas10, notas5;

    cout << "Indique o montante que pretende levantar: ";
    cin >> montante;

    if (montante <= 0 || montante % 5 != 0) {
        cout << "Montante invalido!" << endl;
        return 0;
    }

    restante = montante;

    notas100 = restante / 100;
    restante = restante % 100;

    notas50 = restante / 50;
    restante = restante % 50;

    notas20 = restante / 20;
    restante = restante % 20;

    notas10 = restante / 10;
    restante = restante % 10;

    notas5 = restante / 5;

    cout << "\nNotas a entregar:\n";

    if (notas100 > 0)
        cout << notas100 << " nota(s) de 100 euros.\n";

    if (notas50 > 0)
        cout << notas50 << " nota(s) de 50 euros.\n";

    if (notas20 > 0)
        cout << notas20 << " nota(s) de 20 euros.\n";

    if (notas10 > 0)
        cout << notas10 << " nota(s) de 10 euros.\n";

    if (notas5 > 0)
        cout << notas5 << " nota(s) de 5 euros.\n";

    return 0;
}

