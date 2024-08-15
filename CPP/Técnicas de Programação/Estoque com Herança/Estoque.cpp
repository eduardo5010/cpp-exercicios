#include "Estoque.h"

Estoque::Estoque()
{
	ifstream listaNotebooksLer;				 // arquivo de leitura
	listaNotebooksLer.open("Notebooks.txt"); // abre arquivo

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

	if (listaNotebooksLer.is_open())
	{
		while (!listaNotebooksLer.eof())
		{ // enquanto n�o for fim de arquivo...

			listaNotebooksLer >> codigo;

			if (listaNotebooksLer.eof()) // esta solu��o n�o � muito elegante para c++
				break;

			getline(listaNotebooksLer, nome);
			getline(listaNotebooksLer, modelo);
			getline(listaNotebooksLer, marca);
			listaNotebooksLer >> quantidade;
			listaNotebooksLer >> preco;
			listaNotebooksLer >> comprimento;
			listaNotebooksLer >> largura;
			getline(listaNotebooksLer, processador);
			getline(listaNotebooksLer, memoria);
			Notebook notebook(codigo, nome, modelo, marca, preco, quantidade, comprimento, largura, processador, memoria); // cria um objeto livro com os dados lidos no arquivo
			notebooks.push_back(notebook);																				   // insere o objeto livro na lista
			listaNotebooksLer.ignore();
		}
		listaNotebooksLer.close(); // fecha o arquivo
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
	char op;
	cout << "Deseja inserir notebooks (s/n)?" << endl;
	cin >> op;
	while (op == 's')
	{
		cout << "\nDigite o codigo do notebook : ";
		cin >> codigo;
		cout << "\nDigite o nome do notebook : ";
		fflush(stdin); // limpa o buffer de entrada
		getline(cin, nome);
		cout << "\nDigite o modelo do notebook : ";
		fflush(stdin); // limpa o buffer de entrada
		getline(cin, modelo);
		cout << "\nDigite a marca do notebook : ";
		fflush(stdin); // limpa o buffer de entrada
		getline(cin, marca);
		cout << "\nDigite o preco do notebook : ";
		cin >> preco;
		cout << "\nDigite a quantidade do notebook : ";
		cin >> quantidade;
		cout << "\nDigite o comprimento do notebook : ";
		cin >> comprimento;
		cout << "\nDigite a largura do notebook : ";
		cin >> largura;
		cout << "\nDigite o processador do notebook : ";
		fflush(stdin); // limpa o buffer de entrada
		getline(cin, processador);
		cout << "\nDigite a memoria do notebook : ";
		fflush(stdin); // limpa o buffer de entrada
		getline(cin, memoria);
		Notebook notebook(codigo, nome, modelo, marca, preco, quantidade, comprimento, largura, processador, memoria);		   //*** l� do teclado os dados do livro
		notebooks.push_back(notebook); //*** insere os dados na lista de livro
		cout << endl
			 << "Inserir outro notebook (s/n) " << endl;
		cin >> op;
	};
}

Estoque::~Estoque()
{
	ofstream listaNotebooksGravar;				// arquivo de escrita
	listaNotebooksGravar.open("Notebooks.txt"); // abre arquivo

	if (listaNotebooksGravar.is_open())
	{
		for (unsigned i = 0; i < notebooks.size(); i++)
		{
			listaNotebooksGravar << notebooks[i].getCodigo() << endl;
			listaNotebooksGravar << notebooks[i].getNome() << endl;
			listaNotebooksGravar << notebooks[i].getModelo() << endl;
			listaNotebooksGravar << notebooks[i].getMarca() << endl;
			listaNotebooksGravar << notebooks[i].getPreco() << endl;
			listaNotebooksGravar << notebooks[i].getQuantidade() << endl;
			listaNotebooksGravar << notebooks[i].getComprimento() << endl;
			listaNotebooksGravar << notebooks[i].getLargura() << endl;
			listaNotebooksGravar << notebooks[i].getProcessador() << endl;
			listaNotebooksGravar << notebooks[i].getMemoria() << endl;
		}
		listaNotebooksGravar.close(); // fecha arquivo
	}
	else
	{
		cout << "N�o foi poss�vel gravar no arquivo" << endl;
	}
}