#include <iostream>
using namespace std;

/*
Dados a altura e o sexo de uma pessoa, construa um algoritmo que calcule o seu peso ideal,
de acordo com as seguintes fórmulas:
Para homens: (72,7 * altura) - 58
Para mulheres: (62,1 * altura) - 44,7
*/

int main() {

    float altura;
    char sexo;
    float pesoIdeal;

    cout<<"Digite a sua altura em metros: " << endl;
    cin>>altura;
    cout<<"Digite o seu sexo [M:Masculino, F:Feminino]:  " << endl;
    cin>>sexo;

    if (sexo == 'M' or sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
        cout << "O seu peso ideal é " << pesoIdeal << endl;
    }
    else if (sexo == 'F' or sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
        cout << "O seu peso ideal é " << pesoIdeal << endl;

    }
    else {
        cout << "O valor inserido não está definido!";
    }

    return 0;
}
