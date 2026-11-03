#include <iostream>

using namespace std;


int main() {

    // bool
    // operadores relacionais < <= > >= != ==
/*
    bool ligado = true;

    if (ligado) {
        cout << "Ligado!" << endl;
    }
    else {
        cout << "Desligado!" << endl;
    }

    int numero;
    cout << "Informe um numero: ";
    cin >> numero;
    if (numero < 10) {
        cout << "Número menor que 10!" << endl;
    }
    else if (numero == 10) {
        cout << "O numero digitado foi o 10";
    }
    else {
        cout << "Número maior que 10!" << endl;
    }
*/
    // Operadores lógicos E OU

    bool credito, dinheiro;
    int idade = 18;
    // if (credito || dinheiro) "or" ou "||"
    credito = true;
    dinheiro = true;
    if ((credito or dinheiro) and (idade >=18)) {
        cout << "Compra autorizada!\n ";
    }
    else {
        cout << "Compra não autorizada! " << endl;
    }


    if (idade >= 18) {
        if (credito) {
            cout << "Compra autorizada!\n ";
        }
        else if (dinheiro) {
            cout << "Compra autorizada!\n ";
        }
    else {
        cout << "Compra não autorizada!\n";
    }
    }
/*
    int pin;

    cout << "Introduza o seu pin";
    cin >> pin;
    if (pin == 5128) {
        cout << "Pin correto";
    }
    else {
        cout << "Pin incorreto";
    }
    */
    return 0; // sinaliza o final do programa

}