#include <iostream>
using namespace std;

/*
Um comerciante comprou um produto e pretende vendê-lo com uma margem de lucro
que varia consoante o preço de compra. Deve aplicar as seguintes margens:

• 45% de lucro, se o preço de compra for inferior a 20 euros.
• 35% de lucro, se o preço de compra for igual ou inferior a 50 euros.
• 25% de lucro, se o preço de compra for superior a 50 euros.

Leia o preço de compra do produto e apresente o respetivo preço de venda.
 */

int main() {
    double compra;
    double venda;
    cout << "Qual é o valor da compra? ";
    cin >> compra;
    if (compra < 20) {
        venda = compra + (compra * 0.45);
        cout << "O valor da venda é de: " << venda << endl;
    }
    else if (compra >= 20 and compra <= 50)
    {
        venda = compra + (compra * 0.35);
        cout << "O valor da venda é de: " << venda << endl;
    }
    else
    {
        venda = compra + (compra * 0.25);
        cout << "O valor da venda é de: " << venda << endl;
    }
    return 0;
}
