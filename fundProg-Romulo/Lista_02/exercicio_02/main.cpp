#include <iostream>

using namespace std;

int main() {

    int total_cavalos, total_ferraduras;

    cout << "Qual é o número total de cavalos? ";
    cin >> total_cavalos;

    total_ferraduras = total_cavalos * 4;

    cout << "O total de ferraduras necessárias é: " << total_ferraduras << endl;

    return 0;
}
