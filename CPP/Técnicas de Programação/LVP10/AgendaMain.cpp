#include <iostream>

using namespace std;

#include "Agenda.h"

int menu()
{
    int opcao;
    cout << "------ MENU ------" << endl;
    cout << "1. Cadastrar pessoa" << endl;
    cout << "2. Gravar como texto" << endl;
    cout << "3. Ler como texto" << endl;
    cout << "4. Gravar como objeto" << endl;
    cout << "5. Ler como objeto" << endl;
    cout << "6. Listar pessoas" << endl;
    cout << "0. Sair" << endl;
    cout << "Escolha uma opção: ";
    cin >> opcao;
    if (opcao > 6 || opcao < 0)
    {
        cout << "Opção inválida." << endl;
        return menu();
    }
    return opcao;
}

int main()
{
    Agenda agenda;
    int opcao;
    do
    {
        opcao = menu();

        switch (opcao)
        {
        case 1:
            agenda.cadastrarPessoa();
            break;
        case 2:
            agenda.gravarComoTexto();
            break;
        case 3:
            agenda.lerComoTexto();
            break;
        case 4:
            agenda.gravarComoObjeto();
            break;
        case 5:
            agenda.lerComoObjeto();
            break;
        case 6:
            agenda.listarPessoas();
            break;
        case 0:
            cout << "Finalizando programa." << endl;
            break;
        }
    } while (opcao != 0);

    return 0;
}