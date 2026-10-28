#include <iostream>
using namespace std;

int main() {

    double altura_centimetros, altura_metros;

    cout << "Qual é a sua altura em cm? " ;
    cin >> altura_centimetros;

    altura_metros = altura_centimetros / 100.0;
    cout << "A sua altura em metros é de " << altura_metros;

    return 0;
}
