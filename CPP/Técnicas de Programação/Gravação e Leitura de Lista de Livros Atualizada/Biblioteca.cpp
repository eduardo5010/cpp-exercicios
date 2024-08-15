#include "Biblioteca.h"

void Biblioteca::gravarListaLivros()
{
    ofstream arquivo;
    arquivo.open("listaLivros.txt", ios::binary);
    //	ofstream arquivo("credito.dat", ios::binary);

    Livro livro;
    do
    {
        char titulo[30];
        char autor[30];
        int numreg;
        float preco;
        cout << "\nDigite Titulo : ";
        fflush(stdin); // limpa o buffer de entrada
        cin.getline(titulo, 30);
        cout << "\nDigite Autor : ";
        fflush(stdin); // limpa o buffer de entrada
        cin.getline(autor, 30);
        cout << "\nDigite o Numero do Registro : ";
        cin >> numreg;
        cout << "\nDigite o Preco : ";
        cin >> preco;
        livro.setTitulo(titulo);
        livro.setAutor(autor);
        livro.setNumReg(numreg);
        livro.setPreco(preco);
        livros.push_back(livro); // insere livro na lista
        cout << endl
             << "Inserir outro livro (s/n) " << endl;
    } while (getch() == 's');

    if (!arquivo)
    {
        cout << "N�o foi poss�vel abrir o arquivo" << endl;
    }
    for (unsigned i = 0; i < livros.size(); i++)
    {
        arquivo.write(reinterpret_cast<const char *>(&livros[i]), sizeof(Livro)); // grava no arquivo
    }

    arquivo.close(); // fecha arquivo
}

void Biblioteca::lerListaLivros()
{
    livros.clear();

    ifstream arquivo;
    arquivo.open("listaLivros.txt", ios::in); // abre arquivo para leitura
                                         //	ifstream arquivo("credito.txt",ios::in);
    if (!arquivo)
    {
        cout << "N�o foi poss�vel abrir o arquivo" << endl;
    }

    Livro livro;
    arquivo.read(reinterpret_cast<char *>(&livro), sizeof(Livro)); // l� do arquivo

    while (arquivo && !arquivo.eof())
    { // enquanto n�o for fim de arquivo...
        livros.push_back(livro);
        arquivo.read(reinterpret_cast<char *>(&livro), sizeof(Livro)); // l� do arquivo
    }

    // escreve os elementos da lista de livros
    cout << endl
         << "Dados dos livros" << endl;
    for (unsigned i = 0; i < livros.size(); i++)
    {
        cout << endl;
        cout << "Titulo : " << livros[i].getTitulo() << endl;
        cout << "Autor : " << livros[i].getAutor() << endl;
        cout << "Numero do Registro : " << livros[i].getNumReg() << endl;
        cout << "Preco : " << fixed << setprecision(2) << livros[i].getPreco() << endl;
        cout << endl;
    }

    arquivo.close();
}