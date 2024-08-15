#include "Biblioteca.h"

Biblioteca::Biblioteca()
{
	ifstream arquivo;				 // arquivo de leitura
	arquivo.open("listaLivros.txt"); // abre arquivo

	string tituloLivro, nomeAutor;
	int valorNumreg;
	double valorPreco;
	if (arquivo.is_open())
	{
		while (!arquivo.eof())
		{ // enquanto n�o for fim de arquivo...

			getline(arquivo, tituloLivro);

			if (arquivo.eof()) // esta solu��o n�o � muito elegante para c++
				break;

			getline(arquivo, nomeAutor);
			arquivo >> valorNumreg;
			arquivo >> valorPreco;
			Livro liaux(tituloLivro, nomeAutor, valorNumreg, valorPreco); // cria um objeto livro com os dados lidos no arquivo
			li.push_back(liaux);										  // insere o objeto livro na lista
			arquivo.ignore();
		}
		arquivo.close(); // fecha o arquivo
	}
	else
	{
		cout << "N�o foi poss�vel abrir o arquivo" << endl;
	}
}

void Biblioteca::imprimeLista() const
{
	cout << "Dados dos livros" << endl
		 << endl;
	for (unsigned i = 0; i < li.size(); i++)
	{
		li[i].imprime();
		cout << endl;
	}
}

void Biblioteca::leDadosLista()
{
	Livro liaux;
	char op;
	cout << "Deseja inserir livros (s/n)?" << endl;
	cin >> op;
	while (op == 's')
	{
		liaux.novonome();	 //*** l� do teclado os dados do livro
		li.push_back(liaux); //*** insere os dados na lista de livro
		cout << endl
			 << "Inserir outro livro (s/n) " << endl;
		cin >> op;
	};
}

Biblioteca::~Biblioteca()
{
	ofstream arquivo;				 // arquivo de escrita
	arquivo.open("listaLivros.txt"); // abre arquivo

	if (arquivo.is_open())
	{
		for (unsigned i = 0; i < li.size(); i++)
		{
			arquivo << li[i].getTitulo() << endl;
			arquivo << li[i].getAutor() << endl;
			arquivo << li[i].getNumReg() << endl;
			arquivo << li[i].getPreco() << endl;
		}
		arquivo.close(); // fecha arquivo
	}
	else
	{
		cout << "N�o foi poss�vel gravar no arquivo" << endl;
	}
}