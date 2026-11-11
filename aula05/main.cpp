#include <iostream>
using namespace std;

// switch, case, default     (int, long, char, enumerate)
//          NÃO SE PODE USAR (bool, string, float, double)

int main()
{
    int opcao = 5;

    switch (opcao)
    {
        //lista de valores possíveis para a variável opção
        case 1:
            cout << "Entrou na opção 1!" << endl;
            break;
        case 2:
            cout << "Entrou na opção 2!" << endl;
            break;
        case 3:
            cout << "Entrou na opço 3!" << endl;
            break;

        default: cout << "Não entrou em nenhuma das opções";
    }


    return 0;
}
