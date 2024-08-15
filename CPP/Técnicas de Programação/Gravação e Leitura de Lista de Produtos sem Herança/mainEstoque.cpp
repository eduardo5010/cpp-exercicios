#include <iostream>
#include <fstream> // para fun��es de arquivo: ofstream e ifstream
#include <conio.h> // para getch()
#include <cstring> // para strncpy()
#include <string>
#include <iomanip> //para o setprecision
#include <vector>

using namespace std;

#include "Estoque.cpp"
#include "Notebook.cpp"
#include "TV.cpp"

int main()
{
    Estoque estoque;
    int escolha;

    do
    {
        // Menu de funcionario
        cout << "--- ESTOQUE ---" << endl;
        cout << "1) ATUALIZAR PRODUTO" << endl;
        cout << "2) ADICIONAR PRODUTO" << endl;
        cout << "3) REMOVER PRODUTO" << endl;
        cout << "4) EXIBIR PRODUTO" << endl;
        cout << "5) VERIFICAR ESTOQUE" << endl;
        cout << "9) FECHAR SISTEMA" << endl;
        cout << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;
        cout << endl;

        switch (escolha)
        {
        case 1:
        {

            int escolhaAtualizar;
            do
            {
                cout << "--- ATUALIZAR PRODUTO ---" << endl;
                cout << "1) ATUALIZAR NOTEBOOK" << endl;
                cout << "2) ATUALIZAR TV" << endl;
                cout << "9) VOLTAR" << endl;
                cout << endl;
                cout << "Escolha uma opcao: ";
                cin >> escolhaAtualizar;
                cout << endl;
                switch (escolhaAtualizar)
                {
                case 1:
                {
                    estoque.atualizarNotebook();
                    break;
                }
                case 2:
                {
                    estoque.atualizarTV();
                    break;
                }
                case 9:
                {
                    break;
                }

                default:
                {
                    // Opcao invalida
                    cout << "Opcao invalida. Tente novamente." << endl;
                    cout << endl;
                    break;
                }
                }
            } while (escolhaAtualizar != 9);

            break;
        }
        case 2:
        {
            int escolhaAdicionar;
            do
            {
                cout << "--- ADICIONAR PRODUTO ---" << endl;
                cout << "1) ADICIONAR NOTEBOOK" << endl;
                cout << "2) ADICIONAR TV" << endl;
                cout << "9) VOLTAR" << endl;
                cout << endl;
                cout << "Escolha uma opcao: ";
                cin >> escolhaAdicionar;
                cout << endl;
                switch (escolhaAdicionar)
                {
                case 1:
                {
                    estoque.adicionarNotebook();
                    break;
                }
                case 2:
                {
                    estoque.adicionarTV();
                    break;
                }
                case 9:
                {
                    break;
                }

                default:
                {
                    // Opcao invalida
                    cout << "Opcao invalida. Tente novamente." << endl;
                    cout << endl;
                    break;
                }
                }
            } while (escolhaAdicionar != 9);

            break;
        }
        case 3:
        {
            int escolhaRemover;
            do
            {
                cout << "--- REMOVER PRODUTO ---" << endl;
                cout << "1) REMOVER NOTEBOOK" << endl;
                cout << "2) REMOVER TV" << endl;
                cout << "9) VOLTAR" << endl;
                cout << endl;
                cout << "Escolha uma opcao: ";
                cin >> escolhaRemover;
                cout << endl;
                switch (escolhaRemover)
                {
                case 1:
                {
                    estoque.removerNotebook();
                    break;
                }
                case 2:
                {
                    estoque.removerTV();
                    break;
                }
                case 9:
                {
                    break;
                }

                default:
                {
                    // Opcao invalida
                    cout << "Opcao invalida. Tente novamente." << endl;
                    cout << endl;
                    break;
                }
                }
            } while (escolhaRemover != 9);

            break;
        }
        case 4:
        {
            int escolhaExibir;
            do
            {
                cout << "--- EXIBIR PRODUTO ---" << endl;
                cout << "1) EXIBIR NOTEBOOK" << endl;
                cout << "2) EXIBIR TV" << endl;
                cout << "9) VOLTAR" << endl;
                cout << endl;
                cout << "Escolha uma opcao: ";
                cin >> escolhaExibir;
                cout << endl;
                switch (escolhaExibir)
                {
                case 1:
                {
                    estoque.exibirNotebook();
                    break;
                }
                case 2:
                {
                    estoque.exibirTV();
                    break;
                }
                case 9:
                {
                    break;
                }

                default:
                {
                    // Opcao invalida
                    cout << "Opcao invalida. Tente novamente." << endl;
                    cout << endl;
                    break;
                }
                }
            } while (escolhaExibir != 9);

            break;
        }
        case 5:
        {
            estoque.exibirListaNotebook();
            estoque.exibirListaTV();
            break;
        }
        case 9:
        {
            break;
        }
        default:
        {
            // Opcao invalida
            cout << "Opcao invalida. Tente novamente." << endl;
            cout << endl;
            break;
        }
        }
    } while (escolha != 9);

    return 0;
}