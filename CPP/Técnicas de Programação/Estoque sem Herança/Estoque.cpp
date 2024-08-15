#include "Estoque.h"

Estoque::Estoque()
{
	ifstream arquivo;			   // arquivo de leitura
	arquivo.open("Notebooks.txt"); // abre arquivo

	int codigo;
	string nome;
	string modelo;
	string marca;
	double preco;
	int quantidade;
	float comprimento;
	float largura;
	string processador;
	string memoria;
	if (arquivo.is_open())
	{
		while (!arquivo.eof())
		{ // enquanto n�o for fim de arquivo...

			arquivo >> codigo;

			if (arquivo.eof()) // esta solu��o n�o � muito elegante para c++
				break;

			getline(arquivo, nome);
			getline(arquivo, modelo);
			getline(arquivo, marca);
			arquivo >> preco;
			arquivo >> quantidade;
			arquivo >> comprimento;
			arquivo >> largura;
			getline(arquivo, processador);
			getline(arquivo, memoria);
			Notebook notebook(codigo, nome, modelo, marca, preco, quantidade, comprimento, largura, processador, memoria); // cria um objeto livro com os dados lidos no arquivo
			notebooks.push_back(notebook);																				   // insere o objeto livro na lista
			arquivo.ignore();
		}
		arquivo.close(); // fecha o arquivo
	}
	else
	{
		cout << "N�o foi poss�vel abrir o arquivo" << endl;
	}
}

void Estoque::imprimeLista() const
{
	cout << "Dados dos notebooks" << endl
		 << endl;
	for (unsigned i = 0; i < notebooks.size(); i++)
	{
		notebooks[i].imprime();
		cout << endl;
	}
}

void Estoque::leDadosLista()
{
	Notebook notebook;
	char op;
	cout << "Deseja inserir notebooks (s/n)?" << endl;
	cin >> op;
	while (op == 's')
	{
		notebook.novonome();		   //*** l� do teclado os dados do livro
		notebooks.push_back(notebook); //*** insere os dados na lista de livro
		cout << endl
			 << "Inserir outro notebook (s/n) " << endl;
		cin >> op;
	};
}

Estoque::~Estoque()
{
	ofstream arquivo;			   // arquivo de escrita
	arquivo.open("Notebooks.txt"); // abre arquivo

	if (arquivo.is_open())
	{
		for (unsigned i = 0; i < notebooks.size(); i++)
		{
			arquivo << notebooks[i].getCodigo() << endl;
			arquivo << notebooks[i].getNome() << endl;
			arquivo << notebooks[i].getModelo() << endl;
			arquivo << notebooks[i].getMarca() << endl;
			arquivo << notebooks[i].getPreco() << endl;
			arquivo << notebooks[i].getQuantidade() << endl;
			arquivo << notebooks[i].getComprimento() << endl;
			arquivo << notebooks[i].getLargura() << endl;
			arquivo << notebooks[i].getProcessador() << endl;
			arquivo << notebooks[i].getMemoria() << endl;
		}
		arquivo.close(); // fecha arquivo
	}
	else
	{
		cout << "N�o foi poss�vel gravar no arquivo" << endl;
	}
}