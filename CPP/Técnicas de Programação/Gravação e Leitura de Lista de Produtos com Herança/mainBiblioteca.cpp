#include <iostream>
#include <fstream> // para fun��es de arquivo: ofstream e ifstream
#include <conio.h> // para getch()
#include <cstring> // para strncpy()
#include <string>
#include <iomanip> //para o setprecision
#include <vector>

using namespace std;

#include "Biblioteca.cpp"
#include "Livro.cpp"

int main()
{
    Biblioteca biblioteca;
    int escolha;

    do
    {
        // Menu principal
        cout << "--- BIBLIOTECA ---" << endl;
        cout << "1) GRAVAR LISTA DE LIVROS" << endl;
        cout << "2) LER LISTA DE LIVROS" << endl;
        cout << "9) FECHAR SISTEMA" << endl;
        cout << endl;
        cout << "Escolha uma opção: ";
        cin >> escolha;
        cout << endl;

        switch (escolha)
        {
        case 1:
        {
            biblioteca.gravarListaLivros();
            break;
        }
        case 2:
        {
            biblioteca.lerListaLivros();
            break;
        }
        case 9:
        {
            break;
        }
        default:
        {
            // Opção inválida
            cout << "Opção inválida. Tente novamente." << endl;
            cout << endl;
            break;
        }
        }
        cout << endl;

    } while (escolha != 9);

    return 0;
}