#include <iostream>
#include <string>

using namespace std;

int main() {

    double comprimento, largura, area;
    cout << "Introduza o comprimento em metros: ";
    cin >> comprimento;

    cout << "Introduza a largura em metros: ";
    cin >> largura;

    area = comprimento * largura;

    cout <<"A área do terreno é de: " << area << " metros quadrados" << endl;

    return 0;
}
