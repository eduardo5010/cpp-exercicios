#include <iostream>
#include <fstream> // para fun��es de arquivo: ofstream e ifstream
#include <conio.h> // para getch()
#include <cstring> // para strncpy()
#include <string>
#include <iomanip> //para o setprecision
#include <vector>

using namespace std;

#include "Produto.cpp"
#include "CarrinhoDeCompras.cpp"
#include "Notebook.cpp"
#include "TV.cpp"
#include "Estoque.cpp"
#include "Empresa.cpp"

main()
{

    setlocale(LC_ALL, "Portuguese");

    // Instanciando objeto
    Estoque estoque;
    CarrinhoDeCompras compras;

    // Declarando variável
    int escolha;

    do
    {
        // Menu principal
        cout << "--- LOJA DE ELETRONICOS ---" << endl;
        cout << "1) FUNCIONARIO" << endl;
        cout << "2) COMPRAR PRODUTO" << endl;
        cout << "3) VERIFICAR ESTOQUE" << endl;
        cout << "4) CARRINHO DE COMPRAS" << endl;
        cout << "9) FECHAR O SISTEMA" << endl;
        cout << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;
        cout << endl;

        switch (escolha)
        {
        case 1:
        {
            int escolhaFuncionario;
            do
            {
                // Menu de funcionario
                cout << "--- FUNCIONARIO ---" << endl;
                cout << "1) ATUALIZAR PRODUTO" << endl;
                cout << "2) ADICIONAR PRODUTO" << endl;
                cout << "3) REMOVER PRODUTO" << endl;
                cout << "4) EXIBIR PRODUTO" << endl;
                cout << "5) VERIFICAR ESTOQUE" << endl;
                cout << "9) VOLTAR" << endl;
                cout << endl;
                cout << "Escolha uma opcao: ";
                cin >> escolhaFuncionario;
                cout << endl;

                switch (escolhaFuncionario)
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
                        cout << "Escolha uma Opcao: ";
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
                        cout << "Escolha uma Opcao: ";
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
                        cout << "Escolha uma Opcao: ";
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
                        cout << "Escolha uma Opcao: ";
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
            } while (escolhaFuncionario != 9);

            break;
        }
        case 2:
        {
            estoque.comprarProduto();
            break;
        }
        case 3:
        {
            estoque.exibirListaNotebook();
            estoque.exibirListaTV();
            break;
        }
        case 4:
            int escolhaCarrinho;
            do
            {
                // Carrinho de compras
                cout << "--- CARRINHO DE COMPRAS ---" << endl;
                cout << "1) ADICIONAR ITEM NO CARRINHO" << endl;
                cout << "2) RETIRAR ITEM DO CARRINHO" << endl;
                cout << "3) ATUALIZAR QUANTIDADE" << endl;
                cout << "4) VER DETALHES DO CARRINHO" << endl;
                cout << "5) PROSSEGUIR COMPRA" << endl;
                cout << "6) CRIAR NOVO CARRINHO" << endl;
                cout << "9) VOLTAR" << endl;
                cout << endl;
                cout << "Escolha uma Opcao: ";
                cin >> escolhaCarrinho;
                cout << endl;
                switch (escolhaCarrinho)
                {
                case 1:
                {
                    int escolhaAdicionarCarrinho;
                    do
                    {
                        cout << "--- ADICIONAR ITEM NO CARRINHO ---" << endl;
                        cout << "1) ADICIONAR NOTEBOOK NO CARRINHO" << endl;
                        cout << "2) ADICIONAR TV NO CARRINHO" << endl;
                        cout << "9) VOLTAR" << endl;
                        cout << endl;
                        cout << "Escolha uma Opcao: ";
                        cin >> escolhaAdicionarCarrinho;
                        cout << endl;
                        switch (escolhaAdicionarCarrinho)
                        {
                        case 1:
                        {
                            estoque.adicionarNotebookCarrinho();
                            break;
                        }
                        case 2:
                        {
                            estoque.adicionarTVCarrinho();
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
                    } while (escolhaAdicionarCarrinho != 9);

                    break;
                }
                case 2:
                {
                    int escolhaAdicionarCarrinho;
                    do
                    {
                        cout << "--- REMOVER ITEM DO CARRINHO ---" << endl;
                        cout << "1) REMOVER NOTEBOOK DO CARRINHO" << endl;
                        cout << "2) REMOVER TV DO CARRINHO" << endl;
                        cout << "9) VOLTAR" << endl;
                        cout << endl;
                        cout << "Escolha uma Opcao: ";
                        cin >> escolhaAdicionarCarrinho;
                        cout << endl;
                        switch (escolhaAdicionarCarrinho)
                        {
                        case 1:
                        {
                            estoque.retirarNotebookCarrinho();
                            break;
                        }
                        case 2:
                        {
                            estoque.retirarTVCarrinho();
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
                    } while (escolhaAdicionarCarrinho != 9);

                    break;
                }
                case 3:
                {
                    int escolhaAtualizarCarrinho;
                    do
                    {
                        cout << "--- ATUALIZAR QUANTIDADE DE ITEM NO CARRINHO ---" << endl;
                        cout << "1) ATUALIZAR QUANTIDADE DO NOTEBOOK NO CARRINHO" << endl;
                        cout << "2) ATUALIZAR QUANTIDADE DA TV NO CARRINHO" << endl;
                        cout << "9) VOLTAR" << endl;
                        cout << endl;
                        cout << "Escolha uma Opcao: ";
                        cin >> escolhaAtualizarCarrinho;
                        cout << endl;
                        switch (escolhaAtualizarCarrinho)
                        {
                        case 1:
                        {
                            estoque.atualizarQuantidadeNotebookCarrinho();
                            break;
                        }
                        case 2:
                        {
                            estoque.atualizarQuantidadeTVCarrinho();
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
                    } while (escolhaAtualizarCarrinho != 9);

                    break;
                }
                case 4:
                {
                    compras.verDetalhesCarrinho();
                    break;
                }
                case 5:
                {
                    compras.finalizarPedido();
                    break;
                }
                case 6:
                {
                    compras.novoCarrinho();
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
            } while (escolhaCarrinho != 9);

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
        cout << endl;

    } while (escolha != 9);

    return 0;
}