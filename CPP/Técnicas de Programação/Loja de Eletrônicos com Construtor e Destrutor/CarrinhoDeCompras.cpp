#include "CarrinhoDeCompras.h"
#include "Estoque.h"

void CarrinhoDeCompras::adicionarItemCarrinho(int codigo, string nome, string modelo, string marca, double preco, int quantidade)
{
	carregarCarrinho();
	Produto produto;
	produto.setCodigo(codigo);
	produto.setNome(nome);
	produto.setModelo(modelo);
	produto.setMarca(marca);
	produto.setPreco(preco);
	produto.setQuantidade(quantidade);
	produtos.push_back(produto);

	ofstream carrinhoGravar;
	carrinhoGravar.open("Carrinho.txt", ios::binary);
	//	ofstream arquivo("credito.dat", ios::binary);
	if (!carrinhoGravar)
	{
		cout << "Nao foi possivel abrir o arquivo" << endl;
	}
	for (unsigned i = 0; i < produtos.size(); i++)
	{
		carrinhoGravar.write(reinterpret_cast<const char *>(&produtos[i]), sizeof(Produto)); // grava no arquivo
	}

	carrinhoGravar.close(); // fecha arquivo

	cout << "Produto adicionado no carrinho." << endl;
	cout << endl;
}
void CarrinhoDeCompras::removerItemCarrinho(int codigo)
{
	carregarCarrinho();
	bool encontrado;

	for (int i = 0; i < produtos.size(); i++)
	{
		if (produtos[i].getCodigo() == codigo)
		{
			encontrado = true;
			produtos.erase(produtos.begin() + i);
		}
	}
	if (!encontrado)
	{
		cout << "Produto nao esta no carrrinho." << endl;
		cout << endl;
	}
	else
	{
		ofstream carrinhoGravar;
		carrinhoGravar.open("Carrinho.txt", ios::binary);
		//	ofstream arquivo("credito.dat", ios::binary);
		if (!carrinhoGravar)
		{
			cout << "Nao foi possivel abrir o arquivo" << endl;
		}
		for (unsigned i = 0; i < produtos.size(); i++)
		{
			carrinhoGravar.write(reinterpret_cast<const char *>(&produtos[i]), sizeof(Produto)); // grava no arquivo
		}

		carrinhoGravar.close(); // fecha arquivo

		cout << "Produto removido do carrinho." << endl;
		cout << endl;
	}
}
void CarrinhoDeCompras::atualizarQuantidadeItemCarrinho(int codigo, int quantidade)
{
	carregarCarrinho();
	bool encontrado;
	if (produtos.empty())
		for (int i = 0; i < produtos.size(); i++)
		{
			if (produtos[i].getCodigo() == codigo)
			{
				encontrado = true;
				produtos[i].setQuantidade(quantidade);
			}
		}
	if (!encontrado)
	{
		cout << "Produto nao esta no carrrinho." << endl;
		cout << endl;
	}
	else
	{
		ofstream carrinhoGravar;
		carrinhoGravar.open("Carrinho.txt", ios::binary);
		//	ofstream arquivo("credito.dat", ios::binary);
		if (!carrinhoGravar)
		{
			cout << "Nao foi possivel abrir o arquivo" << endl;
		}
		for (unsigned i = 0; i < produtos.size(); i++)
		{
			carrinhoGravar.write(reinterpret_cast<const char *>(&produtos[i]), sizeof(Produto)); // grava no arquivo
		}

		carrinhoGravar.close(); // fecha arquivo

		cout << "Quantidade do produto atualizada." << endl;
	}
}
void CarrinhoDeCompras::verDetalhesCarrinho()
{
	produtos.clear();

	cout << "--- PRODUTOS ADICIONADOS NO CARRINHO ---" << endl;
	cout << endl;

	ifstream carrinhoLer;
	carrinhoLer.open("Carrinho.txt", ios::in); // abre arquivo para leitura
											   //	ifstream arquivo("credito.txt",ios::in);
	if (!carrinhoLer)
	{
		cout << "O carrinho esta vazio." << endl;
		cout << endl;
	}
	else
	{
		Produto produto;
		carrinhoLer.read(reinterpret_cast<char *>(&produto), sizeof(Produto)); // l� do arquivo

		while (carrinhoLer && !carrinhoLer.eof())
		{ // enquanto n�o for fim de arquivo...
			produtos.push_back(produto);
			carrinhoLer.read(reinterpret_cast<char *>(&produto), sizeof(Produto)); // l� do arquivo
		}

		carrinhoLer.close();

		if (produtos.empty())
		{
			cout << "O carrinho esta vazio." << endl;
			cout << endl;
		}
		else
		{
			// escreve os elementos do carrinho
			for (unsigned i = 0; i < produtos.size(); i++)
			{
				cout << endl;
				cout << "Codigo : " << produtos[i].getCodigo() << endl;
				cout << "Nome : " << produtos[i].getNome() << endl;
				cout << "Modelo : " << produtos[i].getModelo() << endl;
				cout << "Marca : " << produtos[i].getMarca() << endl;
				cout << "Preco : " << fixed << setprecision(2) << produtos[i].getPreco() << endl;
				cout << "Quantidade : " << produtos[i].getQuantidade() << endl;
				cout << endl;
			}
		}
	}
}
void CarrinhoDeCompras::finalizarPedido()
{
	carregarCarrinho();
	char escolha;
	double precoFinal = 0;
	if (produtos.empty())
	{
		cout << "O carrinho esta vazio." << endl;
		cout << endl;
	}
	else
	{
		for (unsigned i = 0; i < produtos.size(); i++)
		{
			int precoProduto;
			precoProduto = produtos[i].getPreco() * produtos[i].getQuantidade();
			precoFinal += precoProduto;
		}
	}

	cout << "TOTAL DO VALOR DOS PRODUTOS: ";
	cout << "Total: " << precoFinal / 2 << endl;
	cout << endl;
	cout << "FINALIZAR PEDIDO? (s/n): ";
	cin >> escolha;
	cout << endl;
	if (escolha == 's')
	{
		for (unsigned i = 0; i < produtos.size(); i++)
		{
			Estoque estoque;
			estoque.finalizarCompra(produtos[i].getCodigo(), produtos[i].getQuantidade() / 2);
		}
		cout << "Compra realizada com sucesso." << endl;
		cout << endl;

		produtos.clear();

		ofstream carrinhoGravar;
		carrinhoGravar.open("Carrinho.txt", ios::binary);
		//	ofstream arquivo("credito.dat", ios::binary);
		if (!carrinhoGravar)
		{
			cout << "Nao foi possivel abrir o arquivo" << endl;
		}
		for (unsigned i = 0; i < produtos.size(); i++)
		{
			carrinhoGravar.write(reinterpret_cast<const char *>(&produtos[i]), sizeof(Produto)); // grava no arquivo
		}

		carrinhoGravar.close(); // fecha arquivo
	}
}
void CarrinhoDeCompras::novoCarrinho()
{
	carregarCarrinho();
	char escolha;
	cout << "Tem certeza que deseja criar um novo carrinho (carrinho atual sera excluido) (s/n): ";
	cin >> escolha;
	cout << endl;
	if (escolha == 's')
	{
		produtos.clear();

		ofstream carrinhoGravar;
		carrinhoGravar.open("Carrinho.txt", ios::binary);
		//	ofstream arquivo("credito.dat", ios::binary);
		if (!carrinhoGravar)
		{
			cout << "Nao foi possivel abrir o arquivo" << endl;
		}
		for (unsigned i = 0; i < produtos.size(); i++)
		{
			carrinhoGravar.write(reinterpret_cast<const char *>(&produtos[i]), sizeof(Produto)); // grava no arquivo
		}

		carrinhoGravar.close(); // fecha arquivo

		cout << "Novo carrinho criado." << endl;
		cout << endl;
	}
}

void CarrinhoDeCompras::carregarCarrinho()
{
	ifstream carrinhoLer;
	carrinhoLer.open("Carrinho.txt", ios::in); // abre arquivo para leitura
											   //	ifstream arquivo("credito.txt",ios::in);
	if (!carrinhoLer)
	{
		cout << "O carrinho esta vazio." << endl;
		cout << endl;
	}
	else
	{
		Produto produto;
		carrinhoLer.read(reinterpret_cast<char *>(&produto), sizeof(Produto)); // l� do arquivo

		while (carrinhoLer && !carrinhoLer.eof())
		{ // enquanto n�o for fim de arquivo...
			produtos.push_back(produto);
			carrinhoLer.read(reinterpret_cast<char *>(&produto), sizeof(Produto)); // l� do arquivo
		}

		carrinhoLer.close();

		if (produtos.empty())
		{
			cout << "O carrinho esta vazio." << endl;
			cout << endl;
		}
	}
}

bool CarrinhoDeCompras::carrinhoVazio()
{
	carregarCarrinho();
	if (produtos.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}