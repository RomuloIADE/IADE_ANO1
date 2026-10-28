#include <iostream>
using namespace std;

int main() {

    double duracao_minutos, duracao_segundos;

    cout << "Qual a duração em minutos? ";
    cin >> duracao_minutos;

    duracao_segundos = duracao_minutos * 60;

    cout << "A duração em segundos é: "<< duracao_segundos <<"s";
    return 0;
}
