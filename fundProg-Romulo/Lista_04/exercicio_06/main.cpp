#include <iostream>
using namespace std;

/*

Elabore um algoritmo que calcule o valor a pagar por um produto,
tendo em conta o preço normal indicado na etiqueta e a modalidade de pagamento selecionada.
Utilize os seguintes códigos para identificar a modalidade de pagamento e
efetuar o cálculo correspondente:


Codigo      Modalidade de Pagamento                     Cálculo
1           Pagamento a pronto, em numerário            Desconto de 10%
2           Pagamento a pronto, com cartão de débito    Preço normal indicado na etiqueta
3           Pagamento em duas prestações                Preço normal acrescido de 10% de juros
4           Pagamento em três prestações                Preço normal acrescido de 15% de juros

 */
int main() {

    int codigo;
    double precoEtiqueta = 255;
    cout << "O preço do artigo é: " << precoEtiqueta << endl;
    cout << "Escolha o método de pagamento [1, 2, 3 ou 4]: ";
    cin >> codigo;

    switch (codigo) {
        case 1: cout << "Você escolheu a modalidade: Pagamento a pronto, em numerário e vai pagar " << (precoEtiqueta * 0.9) << endl;
                break;
        case 2: cout << "Você escolheu a modalidade: Pagamento a pronto, com cartão de débito e vai pagar " << (precoEtiqueta) << endl;
                break;
        case 3: cout << "Você escolheu a modalidade: Pagamento em duas prestações e vai pagar " << (precoEtiqueta * 1.10) << endl;
            break;
        case 4: cout << "Você escolheu a modalidade: Pagamento em três prestações e vai pagar " << (precoEtiqueta * 1.15) << endl;
            break;
    default: cout << codigo << " Não é uma escolha válida." << endl;
    }

        return 0;
}
