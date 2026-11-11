#include <iostream>
using namespace std;

/*
A Federação Portuguesa de Natação vai organizar provas de qualificação
para o próximo Campeonato do Mundo.
Desenvolva um algoritmo que receba a idade de um nadador e apresente
a respetiva categoria, de acordo com a tabela seguinte:

Categoria      Idade
Infantil A     5-7 anos
Infantil B     8-10 anos
Juvenil A      11-13 anos
Juvenil B      14-17 anos
Sénior         Maiores de 18 anos
*/

// Exemplo com "if"
int main() {

    int idade;
    string categoria;
    while (true) {
        cout << "Digite a idade do atleta: ";
        cin >> idade;

        if (idade >=5 && idade <= 7) {
            categoria = "Infantil A";
            cout << "Este atleta pertence à categoria " << categoria << endl;
        }
        else if (idade >=8 && idade <= 10) {
            categoria = "Infantil B";
            cout << "Este atleta pertence à categoria " << categoria << endl;
        }
        else if (idade >=11 && idade <= 13) {
            categoria = "Juvenil A";
            cout << "Este atleta pertence à categoria " << categoria << endl;
        }
        else if (idade >=14 && idade <= 17) {
            categoria = "Juvenil B";
            cout << "Este atleta pertence à categoria " << categoria << endl;
        }
        else if (idade >=18) {
            categoria = "Sénior";
            cout << "Este atleta pertence à categoria " << categoria << endl;
        }
        else {
            cout << "A idade introduzida não está definida" << endl;
        }
    }


    return 0;
}

// Exemplo com "switch"