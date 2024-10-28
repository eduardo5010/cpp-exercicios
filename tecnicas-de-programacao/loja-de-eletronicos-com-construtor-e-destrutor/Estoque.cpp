#include "Estoque.h"
#include "CarrinhoDeCompras.h"

Estoque::Estoque()
{
    ifstream listaNotebooksLer;
    listaNotebooksLer.open("Notebooks.txt", ios::in); // abre arquivo para leitura
                                                      // ifstream arquivo("credito.txt",ios::in);
    if (!listaNotebooksLer)
    {
        cout << "Nao foi possivel abrir o arquivo." << endl;
        cout << endl;
    }
    else
    {
        Notebook notebook;
        listaNotebooksLer.read(reinterpret_cast<char *>(&notebook), sizeof(Notebook)); // l� do arquivo

        while (listaNotebooksLer && !listaNotebooksLer.eof())
        { // enquanto n�o for fim de arquivo...
            notebooks.push_back(notebook);
            
            listaNotebooksLer.read(reinterpret_cast<char *>(&notebook), sizeof(Notebook)); // l� do arquivo
        }

        listaNotebooksLer.close();
    }

    ifstream listaTVsLer;
    listaTVsLer.open("TVs.txt", ios::in); // abre arquivo para leitura
                                          //	ifstream arquivo("credito.txt",ios::in);
    if (!listaTVsLer)
    {
        cout << "Nao foi possivel abrir o arquivo." << endl;
        cout << endl;
    }
    else
    {
        TV tv;
        listaTVsLer.read(reinterpret_cast<char *>(&tv), sizeof(TV)); // l� do arquivo

        while (listaTVsLer && !listaTVsLer.eof())
        { // enquanto n�o for fim de arquivo...
            tvs.push_back(tv);
            listaTVsLer.read(reinterpret_cast<char *>(&tv), sizeof(TV)); // l� do arquivo
        }

        listaTVsLer.close();
    }
}

void Estoque::atualizarNotebook()
{
    int codigo;
    bool encontrado;

    if (notebooks.empty())
    {
        cout << "Nenhum notebook cadastrado." << endl;
        cout << endl;
    }
    else
    {
        cout << "--- ATUALIZAR NOTEBOOK ---" << endl;
        cout << "Digite o codigo do notebook (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de notebooks
            for (int i = 0; i < notebooks.size(); i++)
            {
                if (notebooks[i].getCodigo() == codigo) // Se encontrar o notebook
                {
                    encontrado = true;
                    int escolha;
                    cout << "O que deseja atualizar?" << endl;
                    cout << "1) Nome" << endl;
                    cout << "2) Modelo" << endl;
                    cout << "3) Marca" << endl;
                    cout << "4) Preco" << endl;
                    cout << "5) Quantidade" << endl;
                    cout << "6) Comprimento" << endl;
                    cout << "7) Largura" << endl;
                    cout << "8) Processador" << endl;
                    cout << "9) Memoria" << endl;
                    cout << "0) VOLTAR" << endl;
                    cout << endl;
                    cout << "Escolha uma opcao: ";
                    cin >> escolha;
                    cout << endl;

                    switch (escolha)
                    {
                    case 1:
                    {
                        char nome[30];
                        cout << "Digite o novo nome: ";
                        fflush(stdin);
                        cin.getline(nome, 30);      // Recebendo novo nome
                        notebooks[i].setNome(nome); // Atualizando nome
                        break;
                    }
                    case 2:
                    {
                        char modelo[30];
                        cout << "Digite o novo modelo: ";
                        fflush(stdin);
                        cin.getline(modelo, 30);        // Recebendo novo modelo
                        notebooks[i].setModelo(modelo); // Atualizando modelo
                        break;
                    }
                    case 3:
                    {
                        char marca[30];
                        cout << "Digite a nova marca: ";
                        fflush(stdin);
                        cin.getline(marca, 30);       // Recebendo nova marca
                        notebooks[i].setMarca(marca); // Atualizando marca
                        break;
                    }
                    case 4:
                    {
                        double preco;
                        cout << "Digite o novo preco: ";
                        cin >> preco;                 // Recebendo novo preco
                        notebooks[i].setPreco(preco); // Atualizando preco
                        break;
                    }
                    case 5:
                    {
                        int quantidade;
                        cout << "Digite a nova quantidade: ";
                        cin >> quantidade;                      // Recebendo nova quantidade
                        notebooks[i].setQuantidade(quantidade); // Atualizando quantidade
                        break;
                    }
                    case 6:
                    {
                        float comprimento;
                        cout << "Digite o novo comprimento: ";
                        cin >> comprimento;                       // Recebendo novo comprimento
                        notebooks[i].setComprimento(comprimento); // Atualizando comprimento
                        break;
                    }
                    case 7:
                    {
                        float largura;
                        cout << "Digite a nova largura: ";
                        cin >> largura;                   // Recebendo nova largura
                        notebooks[i].setLargura(largura); // Atualizando largura
                        break;
                    }
                    case 8:
                    {
                        char processador[30];
                        cout << "Digite o novo processador: ";
                        fflush(stdin);
                        cin.getline(processador, 30);             // Recebendo novo processador
                        notebooks[i].setProcessador(processador); // Atualizando processador
                        break;
                    }
                    case 9:
                    {
                        char memoria[30];
                        cout << "Digite a nova memoria: ";
                        fflush(stdin);
                        cin.getline(memoria, 30);         // Recebendo nova memoria
                        notebooks[i].setMemoria(memoria); // Atualizando memoria
                        break;
                    }
                    case 0:
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

                    break;
                }
            }
            if (!encontrado) // Se nao encontrar o notebook
            {
                cout << "Notebook nao encontrado." << endl;
                cout << endl;
            }
            else
            {
//                Estoque estoque;
//                estoque.~Estoque(); ****** N�o � necess�rio

                cout << "Notebook atualizado com sucesso." << endl;
                cout << endl;
            }
        }
    }
}
void Estoque::atualizarTV()
{
    int codigo;
    bool encontrado;

    if (tvs.empty())
    {
        cout << "Nenhuma TV cadastrada." << endl;
        cout << endl;
    }
    else
    {
        cout << "--- ATUALIZAR TV ---" << endl;
        cout << "Digite o codigo da TV (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de TVs
            for (int i = 0; i < tvs.size(); i++)
            {
                if (tvs[i].getCodigo() == codigo) // Se encontrar a TV
                {
                    encontrado = true;
                    int escolha;
                    cout << "O que deseja atualizar?" << endl;
                    cout << "1) Nome" << endl;
                    cout << "2) Modelo" << endl;
                    cout << "3) Marca" << endl;
                    cout << "4) Preco" << endl;
                    cout << "5) Quantidade" << endl;
                    cout << "6) Comprimento" << endl;
                    cout << "7) Largura" << endl;
                    cout << "8) Tela" << endl;
                    cout << "9) Tecnologia" << endl;
                    cout << "0) VOLTAR" << endl;
                    cout << endl;
                    cout << "Escolha uma opcao: ";
                    cin >> escolha;
                    cout << endl;

                    switch (escolha)
                    {
                    case 1:
                    {
                        char nome[30];
                        cout << "Digite o novo nome: ";
                        fflush(stdin);
                        cin.getline(nome, 30); // Recebendo novo nome
                        tvs[i].setNome(nome);  // Atualizando nome
                        break;
                    }
                    case 2:
                    {
                        char modelo[30];
                        cout << "Digite o novo modelo: ";
                        fflush(stdin);
                        cin.getline(modelo, 30);  // Recebendo novo modelo
                        tvs[i].setModelo(modelo); // Atualizando modelo
                        break;
                    }
                    case 3:
                    {
                        char marca[30];
                        cout << "Digite a nova marca: ";
                        fflush(stdin);
                        cin.getline(marca, 30); // Recebendo nova marca
                        tvs[i].setMarca(marca); // Atualizando marca
                        break;
                    }
                    case 4:
                    {
                        double preco;
                        cout << "Digite o novo preco: ";
                        cin >> preco;           // Recebendo novo preco
                        tvs[i].setPreco(preco); // Atualizando preco
                        break;
                    }
                    case 5:
                    {
                        int quantidade;
                        cout << "Digite a nova quantidade: ";
                        cin >> quantidade;                // Recebendo nova quantidade
                        tvs[i].setQuantidade(quantidade); // Atualizando quantidade
                        break;
                    }
                    case 6:
                    {
                        float comprimento;
                        cout << "Digite o novo comprimento: ";
                        cin >> comprimento;                 // Recebendo novo comprimento
                        tvs[i].setComprimento(comprimento); // Atualizando comprimento
                        break;
                    }
                    case 7:
                    {
                        float largura;
                        cout << "Digite a nova largura: ";
                        cin >> largura;             // Recebendo nova largura
                        tvs[i].setLargura(largura); // Atualizando largura
                        break;
                    }
                    case 8:
                    {
                        char tela[30];
                        cout << "Digite a nova tela: ";
                        fflush(stdin);
                        cin.getline(tela, 30); // Recebendo nova tela
                        tvs[i].setTela(tela);  // Atualizando tela
                        break;
                    }
                    case 9:
                    {
                        char tecnologia[30];
                        cout << "Digite a nova tecnologia: ";
                        fflush(stdin);
                        cin.getline(tecnologia, 30);      // Recebendo nova tecnologia
                        tvs[i].setTecnologia(tecnologia); // Atualizando tecnologia
                        break;
                    }
                    case 0:
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

                    break;
                }
            }
            if (!encontrado) // Se nao encontrar o notebook
            {
                cout << "TV nao encontrada." << endl;
                cout << endl;
            }
            else
            {
 //               Estoque estoque;
 //               estoque.~Estoque(); ****** N�o � necess�rio

                cout << "TV atualizada com sucesso." << endl;
                cout << endl;
            }
        }
    }
}
void Estoque::adicionarNotebook()
{
    Notebook notebook;

    int codigo = notebook.getCodigoGlobal() + 1;
    notebook.setCodigoGlobal(codigo);
    notebook.setCodigo(codigo);

    char nome[30];
    char modelo[30];
    char marca[30];
    float preco;
    int quantidade;
    float comprimento;
    float largura;
    char processador[30];
    char memoria[30];

    cout << "--- ADICIONAR NOTEBOOK ---" << endl;
    cout << "\nDigite o nome do notebook: ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(nome, 30);
    cout << "\nDigite o modelo do notebook: ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(modelo, 30);
    cout << "\nDigite a marca do notebook: ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(marca, 30);
    cout << "\nDigite o preco do notebook: ";
    cin >> preco;
    cout << "\nDigite a quantidade do notebook: ";
    cin >> quantidade;
    cout << "\nDigite o comprimento do notebook: ";
    cin >> comprimento;
    cout << "\nDigite a largura do notebook: ";
    cin >> largura;
    cout << "\nDigite o processador do notebook: ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(processador, 30);
    cout << "\nDigite a memoria do notebook: ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(memoria, 30);
    cout << endl;

    notebook.setCodigo(codigo);
    notebook.setNome(nome);
    notebook.setModelo(modelo);
    notebook.setMarca(marca);
    notebook.setPreco(preco);
    notebook.setQuantidade(quantidade);
    notebook.setComprimento(comprimento);
    notebook.setLargura(largura);
    notebook.setProcessador(processador);
    notebook.setMemoria(memoria);

    notebooks.push_back(notebook); // insere notebook na lista

  //  Estoque estoque;  ??????????
 //   estoque.~Estoque(); ****** N�o � necess�rio

    cout << "Notebook adicionado com sucesso." << endl;
    cout << endl;
}

void Estoque::adicionarTV()
{
    TV tv;

    int codigo = tv.getCodigoGlobal() + 1;
    tv.setCodigoGlobal(codigo);
    tv.setCodigo(codigo);

    char nome[30];
    char modelo[30];
    char marca[30];
    float preco;
    int quantidade;
    float comprimento;
    float largura;
    char tela[30];
    char tecnologia[30];

    cout << "--- ADICIONAR TV ---" << endl;
    cout << "\nDigite o nome da TV: ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(nome, 30);
    cout << "\nDigite o modelo da TV: ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(modelo, 30);
    cout << "\nDigite a marca da TV: ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(marca, 30);
    cout << "\nDigite o preco da TV: ";
    cin >> preco;
    cout << "\nDigite a quantidade da TV: ";
    cin >> quantidade;
    cout << "\nDigite o comprimento da TV: ";
    cin >> comprimento;
    cout << "\nDigite a largura da TV: ";
    cin >> largura;
    cout << "\nDigite a tela da TV: ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(tela, 30);
    cout << "\nDigite a tecnologia da TV: ";
    fflush(stdin); // limpa o buffer de entrada
    cin.getline(tecnologia, 30);
    cout << endl;

    tv.setCodigo(codigo);
    tv.setNome(nome);
    tv.setModelo(modelo);
    tv.setMarca(marca);
    tv.setPreco(preco);
    tv.setQuantidade(quantidade);
    tv.setComprimento(comprimento);
    tv.setLargura(largura);
    tv.setTela(tela);
    tv.setTecnologia(tecnologia);

    tvs.push_back(tv); // insere tv na lista

  //  Estoque estoque;   ??????????
 //   estoque.~Estoque(); ****** N�o � necess�rio

    cout << "TV adicionada com sucesso." << endl;
    cout << endl;
}

void Estoque::removerNotebook()
{
    int codigo;
    bool encontrado;

    if (notebooks.empty())
    {
        cout << "Nenhum notebook cadastrado." << endl;
        cout << endl;
    }
    else
    {
        cout << "--- REMOVER NOTEBOOK ---" << endl;
        cout << "Digite o codigo do notebook (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de notebooks
            for (int i = 0; i < notebooks.size(); i++)
            {
                if (notebooks[i].getCodigo() == codigo) // Se encontrar o notebook
                {
                    encontrado = true;
                    notebooks.erase(notebooks.begin() + i);

                    break;
                }
            }
            if (!encontrado) // Se nao encontrar o notebook
            {
                cout << "Notebook nao encontrado." << endl;
                cout << endl;
            }
            else
            {
 //               Estoque estoque;
 //               estoque.~Estoque(); ****** N�o � necess�rio

                cout << "Notebook removido com sucesso." << endl;
                cout << endl;
            }
        }
    }
}
void Estoque::removerTV()
{
    int codigo;
    bool encontrado;

    if (tvs.empty())
    {
        cout << "Nenhuma TV cadastrada." << endl;
        cout << endl;
    }
    else
    {
        cout << "--- REMOVER TV ---" << endl;
        cout << "Digite o codigo da TV (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de TVs
            for (int i = 0; i < tvs.size(); i++)
            {
                if (tvs[i].getCodigo() == codigo) // Se encontrar a TV
                {
                    encontrado = true;
                    tvs.erase(tvs.begin() + i);

                    break;
                }
            }
            if (!encontrado) // Se nao encontrar a TV
            {
                cout << "TV nao encontrada." << endl;
                cout << endl;
            }
            else
            {
  //              Estoque estoque;
  //              estoque.~Estoque();  ****** N�o � necess�rio

                cout << "TV removida com sucesso." << endl;
                cout << endl;
            }
        }
    }
}
void Estoque::exibirNotebook()
{
    int codigo;
    bool encontrado;

    if (notebooks.empty())
    {
        cout << "Nenhum notebook cadastrado." << endl;
        cout << endl;
    }
    else
    {
        cout << "--- EXIBIR NOTEBOOK ---" << endl;
        cout << "Digite o codigo do notebook (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de notebooks
            for (int i = 0; i < notebooks.size(); i++)
            {
                if (notebooks[i].getCodigo() == codigo) // Se encontrar o notebook
                {
                    encontrado = true;
                    cout << "--- NOTEBOOK ENCONTRADO ---" << endl;
                    cout << "Codigo: " << notebooks[i].getCodigo() << endl;
                    cout << "Nome: " << notebooks[i].getNome() << endl;
                    cout << "Modelo: " << notebooks[i].getModelo() << endl;
                    cout << "Marca: " << notebooks[i].getMarca() << endl;
                    cout << "Preco: " << fixed << setprecision(2) << notebooks[i].getPreco() << endl;
                    cout << "Quantidade: " << notebooks[i].getQuantidade() << endl;
                    cout << "Comprimento: " << notebooks[i].getComprimento() << endl;
                    cout << "Largura: " << notebooks[i].getLargura() << endl;
                    cout << "Processador: " << notebooks[i].getProcessador() << endl;
                    cout << "Memoria: " << notebooks[i].getMemoria() << endl;
                    cout << endl;

                    break;
                }
            }
            if (!encontrado) // Se nao encontrar o notebook
            {
                cout << "Notebook nao encontrado." << endl;
                cout << endl;
            }
        }
    }
}
void Estoque::exibirTV()
{
    int codigo;
    bool encontrado;

    if (tvs.empty())
    {
        cout << "Nenhuma TV cadastrada." << endl;
        cout << endl;
    }
    else
    {
        cout << "--- EXIBIR TV ---" << endl;
        cout << "Digite o codigo da TV (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de TVs
            for (int i = 0; i < tvs.size(); i++)
            {
                if (tvs[i].getCodigo() == codigo) // Se encontrar a TV
                {
                    encontrado = true;
                    cout << "--- TV ENCONTRADA ---" << endl;
                    cout << "Codigo: " << tvs[i].getCodigo() << endl;
                    cout << "Nome: " << tvs[i].getNome() << endl;
                    cout << "Modelo: " << tvs[i].getModelo() << endl;
                    cout << "Marca: " << tvs[i].getMarca() << endl;
                    cout << "Preco: " << fixed << setprecision(2) << tvs[i].getPreco() << endl;
                    cout << "Quantidade: " << tvs[i].getQuantidade() << endl;
                    cout << "Comprimento: " << tvs[i].getComprimento() << endl;
                    cout << "Largura: " << tvs[i].getLargura() << endl;
                    cout << "Tela: " << tvs[i].getTela() << endl;
                    cout << "Tecnologia: " << tvs[i].getTecnologia() << endl;
                    cout << endl;

                    break;
                }
            }
            if (!encontrado) // Se nao encontrar a TV
            {
                cout << "TV nao encontrada." << endl;
                cout << endl;
            }
        }
    }
}
void Estoque::exibirListaNotebook()
{
    cout << "--- LISTA DE NOTEBOOKS ---" << endl;
    cout << endl;

    if (notebooks.empty())
    {
        cout << "Nenhum notebook cadastrado." << endl;
        cout << endl;
    }
    else
    {
        // escreve os elementos da lista de notebooks
        for (unsigned i = 0; i < notebooks.size(); i++)
        {
            cout << endl;
            cout << "Codigo: " << notebooks[i].getCodigo() << endl;
            cout << "Nome: " << notebooks[i].getNome() << endl;
            cout << "Modelo: " << notebooks[i].getModelo() << endl;
            cout << "Marca: " << notebooks[i].getMarca() << endl;
            cout << "Preco: " << fixed << setprecision(2) << notebooks[i].getPreco() << endl;
            cout << "Quantidade: " << notebooks[i].getQuantidade() << endl;
            cout << "Comprimento: " << fixed << setprecision(1) << notebooks[i].getComprimento() << endl;
            cout << "Largura: " << fixed << setprecision(1) << notebooks[i].getLargura() << endl;
            cout << "Processador: " << notebooks[i].getProcessador() << endl;
            cout << "Memoria: " << notebooks[i].getMemoria() << endl;
            cout << endl;
        }
    }
}

void Estoque::exibirListaTV()
{
    cout << "--- LISTA DE TVS ---" << endl;
    cout << endl;

    if (tvs.empty())
    {
        cout << "Nenhuma TV cadastrada." << endl;
        cout << endl;
    }
    else
    {
        // escreve os elementos da lista de tvs
        for (unsigned i = 0; i < tvs.size(); i++)
        {
            cout << endl;
            cout << "Codigo: " << tvs[i].getCodigo() << endl;
            cout << "Nome: " << tvs[i].getNome() << endl;
            cout << "Modelo: " << tvs[i].getModelo() << endl;
            cout << "Marca: " << tvs[i].getMarca() << endl;
            cout << "Preco: " << fixed << setprecision(2) << tvs[i].getPreco() << endl;
            cout << "Quantidade: " << tvs[i].getQuantidade() << endl;
            cout << "Comprimento: " << fixed << setprecision(1) << tvs[i].getComprimento() << endl;
            cout << "Largura: " << fixed << setprecision(1) << tvs[i].getLargura() << endl;
            cout << "Tela: " << tvs[i].getTela() << endl;
            cout << "Tecnologia: " << tvs[i].getTecnologia() << endl;
            cout << endl;
        }
    }
}
void Estoque::adicionarNotebookCarrinho()
{
    int codigo;
    int quantidade;
    int quantidadeEstoque;
    bool encontrado;
    if (notebooks.empty())
    {
        cout << "Nenhum notebook cadastrado." << endl;
        cout << endl;
    }
    else
    {
        // Exibir notebook
        cout << "--- ADICIONAR NOTEBOOK NO CARRINHO ---" << endl;
        cout << "Digite o codigo do notebook (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de notebooks
            for (int i = 0; i < notebooks.size(); i++)
            {
                if (notebooks[i].getCodigo() == codigo)
                {
                    char escolha;
                    encontrado = true;
                    cout << "NOTEBOOK ENCONTRADO:" << endl;
                    cout << "Codigo: " << notebooks[i].getCodigo() << endl;
                    cout << "Nome: " << notebooks[i].getNome() << endl;
                    cout << "Modelo: " << notebooks[i].getModelo() << endl;
                    cout << "Marca: " << notebooks[i].getMarca() << endl;
                    cout << "Preco: " << fixed << setprecision(2) << notebooks[i].getPreco() << endl;
                    cout << "Quantidade: " << notebooks[i].getQuantidade() << endl;
                    cout << "Comprimento: " << notebooks[i].getComprimento() << endl;
                    cout << "Largura: " << notebooks[i].getLargura() << endl;
                    cout << "Processador: " << notebooks[i].getProcessador() << endl;
                    cout << "Memoria: " << notebooks[i].getMemoria() << endl;
                    cout << endl;
                    cout << "ADICIONAR AO CARRINHO? (s/n): ";
                    cin >> escolha;
                    cout << endl;
                    if (escolha == 's')
                    {
                        cout << "Digite a quantidade desejada (" << notebooks[i].getQuantidade() << " disp): ";
                        cin >> quantidade;
                        cout << endl;
                        if (quantidade > notebooks[i].getQuantidade())
                        {
                            cout << "Quantidade nao pode ser acima da disponivel." << endl;
                            cout << endl;
                        }
                        else if (quantidade < 1)
                        {
                            cout << "Quantidade deve ser de pelo menos 1 unidade" << endl;
                            cout << endl;
                        }
                        else
                        {
                            // quantidadeEstoque = notebooks[i].getQuantidade() - quantidade;
                            // notebooks[i].setQuantidade(quantidadeEstoque);
                            CarrinhoDeCompras carrinho;
                            carrinho.adicionarItemCarrinho(notebooks[i].getCodigo(), notebooks[i].getNome(), notebooks[i].getModelo(), notebooks[i].getMarca(), notebooks[i].getPreco(), quantidade);
                        }
                    }
                }
                break;
            }
            if (!encontrado) // Se nao encontrar o notebook
            {
                cout << "Notebook nao encontrado." << endl;
            }
        }
    }
}
void Estoque::adicionarTVCarrinho()
{
    int codigo;
    int quantidade;
    int quantidadeEstoque;
    bool encontrado;
    if (notebooks.empty())
    {
        cout << "Nenhuma TV cadastrada." << endl;
        cout << endl;
    }
    else
    {
        cout << "--- ADICIONAR TV NO CARRINHO ---" << endl;
        cout << "Digite o codigo da TV (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de notebooks
            for (int i = 0; i < tvs.size(); i++)
            {
                if (tvs[i].getCodigo() == codigo)
                {
                    char escolha;
                    encontrado = true;
                    cout << "TV ENCONTRADA:" << endl;
                    cout << "Codigo: " << tvs[i].getCodigo() << endl;
                    cout << "Nome: " << tvs[i].getNome() << endl;
                    cout << "Modelo: " << tvs[i].getModelo() << endl;
                    cout << "Marca: " << tvs[i].getMarca() << endl;
                    cout << "Preco: " << fixed << setprecision(2) << tvs[i].getPreco() << endl;
                    cout << "Quantidade: " << tvs[i].getQuantidade() << endl;
                    cout << "Comprimento: " << tvs[i].getComprimento() << endl;
                    cout << "Largura: " << tvs[i].getLargura() << endl;
                    cout << "Tela: " << tvs[i].getTela() << endl;
                    cout << "Tecnologia: " << tvs[i].getTecnologia() << endl;
                    cout << endl;
                    cout << "ADICIONAR AO CARRINHO? (s/n): ";
                    cin >> escolha;
                    cout << endl;
                    if (escolha == 's')
                    {
                        cout << "Digite a quantidade desejada (" << tvs[i].getQuantidade() << " disp): ";
                        cin >> quantidade;
                        cout << endl;
                        if (quantidade > tvs[i].getQuantidade())
                        {
                            cout << "Quantidade nao pode ser acima da disponivel." << endl;
                            cout << endl;
                        }
                        else if (quantidade < 1)
                        {
                            cout << "Quantidade deve ser de pelo menos 1 unidade" << endl;
                            cout << endl;
                        }
                        else
                        {
                            // quantidadeEstoque = tvs[i].getQuantidade() - quantidade;
                            // tvs[i].setQuantidade(quantidadeEstoque);
                            CarrinhoDeCompras carrinho;
                            carrinho.adicionarItemCarrinho(tvs[i].getCodigo(), tvs[i].getNome(), tvs[i].getModelo(), tvs[i].getMarca(), tvs[i].getPreco(), quantidade);
                        }
                    }
                }
                break;
            }
            if (!encontrado) // Se nao encontrar a TV
            {
                cout << "TV nao encontrada." << endl;
            }
        }
    }
}
void Estoque::retirarNotebookCarrinho()
{
    CarrinhoDeCompras carrinho;
    int codigo;
    bool encontrado;
    if (carrinho.carrinhoVazio())
    {
        cout << "O carrinho esta vazio." << endl;
        cout << endl;
    }
    else if (notebooks.empty())
    {
        cout << "Nenhum notebook cadastro." << endl;
        cout << endl;
    }
    else
    {
        cout << "--- RETIRAR NOTEBOOK DO CARRINHO ---" << endl;
        cout << "Digite o codigo do notebook (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de notebooks
            for (int i = 0; i < notebooks.size(); i++)
            {
                if (notebooks[i].getCodigo() == codigo)
                {
                    char escolha;
                    encontrado = true;
                    cout << "TV ENCONTRADA:" << endl;
                    cout << "Codigo: " << notebooks[i].getCodigo() << endl;
                    cout << "Nome: " << notebooks[i].getNome() << endl;
                    cout << "Modelo: " << notebooks[i].getModelo() << endl;
                    cout << "Marca: " << notebooks[i].getMarca() << endl;
                    cout << "Preco: " << fixed << setprecision(2) << notebooks[i].getPreco() << endl;
                    cout << "Quantidade: " << notebooks[i].getQuantidade() << endl;
                    cout << "Comprimento: " << notebooks[i].getComprimento() << endl;
                    cout << "Largura: " << notebooks[i].getLargura() << endl;
                    cout << "Processador: " << notebooks[i].getProcessador() << endl;
                    cout << "Memoria: " << notebooks[i].getMemoria() << endl;
                    cout << endl;
                    cout << "RETIRAR DO CARRINHO? (s/n): ";
                    cin >> escolha;
                    cout << endl;
                    if (escolha == 's')
                    {
                        carrinho.removerItemCarrinho(tvs[i].getCodigo());
                    }
                }
                break;
            }
            if (!encontrado) // Se nao encontrar a TV
            {
                cout << "TV nao encontrada." << endl;
            }
        }
    }
}
void Estoque::retirarTVCarrinho()
{
    CarrinhoDeCompras carrinho;
    int codigo;
    bool encontrado;
    if (carrinho.carrinhoVazio())
    {
        cout << "O carrinho esta vazio." << endl;
        cout << endl;
    }
    else if (notebooks.empty())
    {
        cout << "Nenhuma TV cadastrada." << endl;
        cout << endl;
    }
    else
    {
        cout << "--- RETIRAR TV DO CARRINHO ---" << endl;
        cout << "Digite o codigo da TV (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de notebooks
            for (int i = 0; i < tvs.size(); i++)
            {
                if (tvs[i].getCodigo() == codigo)
                {
                    char escolha;
                    encontrado = true;
                    cout << "TV ENCONTRADA:" << endl;
                    cout << "Codigo: " << tvs[i].getCodigo() << endl;
                    cout << "Nome: " << tvs[i].getNome() << endl;
                    cout << "Modelo: " << tvs[i].getModelo() << endl;
                    cout << "Marca: " << tvs[i].getMarca() << endl;
                    cout << "Preco: " << fixed << setprecision(2) << tvs[i].getPreco() << endl;
                    cout << "Quantidade: " << tvs[i].getQuantidade() << endl;
                    cout << "Comprimento: " << tvs[i].getComprimento() << endl;
                    cout << "Largura: " << tvs[i].getLargura() << endl;
                    cout << "Tela: " << tvs[i].getTela() << endl;
                    cout << "Tecnologia: " << tvs[i].getTecnologia() << endl;
                    cout << endl;
                    cout << "RETIRAR DO CARRINHO? (s/n): ";
                    cin >> escolha;
                    cout << endl;
                    if (escolha == 's')
                    {
                        carrinho.removerItemCarrinho(tvs[i].getCodigo());
                    }
                }
                break;
            }
            if (!encontrado) // Se nao encontrar a TV
            {
                cout << "TV nao encontrada." << endl;
            }
        }
    }
}
void Estoque::atualizarQuantidadeNotebookCarrinho()
{
    CarrinhoDeCompras carrinho;
    int codigo;
    int quantidade;
    bool encontrado;
    if (carrinho.carrinhoVazio())
    {
        cout << "O carrinho esta vazio." << endl;
        cout << endl;
    }
    else if (notebooks.empty())
    {
        cout << "Nenhum notebook cadastrado." << endl;
        cout << endl;
    }
    else
    {
        cout << "--- ATUALIZAR QUANTIDADE DO NOTEBOOK NO CARRINHO ---" << endl;
        cout << "Digite o codigo do notebook (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de notebooks
            for (int i = 0; i < notebooks.size(); i++)
            {
                if (notebooks[i].getCodigo() == codigo)
                {
                    char escolha;
                    encontrado = true;
                    cout << "NOTEBOOK ENCONTRADO:" << endl;
                    cout << "Codigo: " << notebooks[i].getCodigo() << endl;
                    cout << "Nome: " << notebooks[i].getNome() << endl;
                    cout << "Modelo: " << notebooks[i].getModelo() << endl;
                    cout << "Marca: " << notebooks[i].getMarca() << endl;
                    cout << "Preco: " << fixed << setprecision(2) << notebooks[i].getPreco() << endl;
                    cout << "Quantidade: " << notebooks[i].getQuantidade() << endl;
                    cout << "Comprimento: " << notebooks[i].getComprimento() << endl;
                    cout << "Largura: " << notebooks[i].getLargura() << endl;
                    cout << "Processador: " << notebooks[i].getProcessador() << endl;
                    cout << "Memoria: " << notebooks[i].getMemoria() << endl;
                    cout << endl;
                    cout << "ATUALIZAR QUANTIDADE? (s/n): ";
                    cin >> escolha;
                    cout << endl;
                    if (escolha == 's')
                    {
                        cout << "Digite a nova quantidade (" << notebooks[i].getQuantidade() << " disp): " << endl;
                        cin >> quantidade;
                        cout << endl;
                        if (quantidade > notebooks[i].getQuantidade())
                        {
                            cout << "Quantidade nao pode ser acima da disponivel." << endl;
                            cout << endl;
                        }
                        else if (quantidade < 1)
                        {
                            cout << "Quantidade deve ser de pelo menos 1 unidade" << endl;
                            cout << endl;
                        }
                        else
                        {
                            CarrinhoDeCompras carrinho;
                            carrinho.atualizarQuantidadeItemCarrinho(notebooks[i].getCodigo(), quantidade);
                        }
                    }
                }
                break;
            }
            if (!encontrado) // Se nao encontrar o notebook
            {
                cout << "Notebook nao encontrado." << endl;
            }
        }
    }
}
void Estoque::atualizarQuantidadeTVCarrinho()
{
    CarrinhoDeCompras carrinho;
    int codigo;
    int quantidade;
    bool encontrado;
    if (carrinho.carrinhoVazio())
    {
        cout << "O carrinho esta vazio." << endl;
        cout << endl;
    }
    else if (tvs.empty())
    {
        cout << "Nenhuma TV cadastrada." << endl;
        cout << endl;
    }
    else
    {
        cout << "--- ATUALIZAR QUANTIDADE DA TV NO CARRINHO ---" << endl;
        cout << "Digite o codigo da TV (digite 0 para cancelar): ";
        cin >> codigo;
        cout << endl;
        if (codigo != 0)
        {
            // Comparando os dados inseridos com os dados da lista de notebooks
            for (int i = 0; i < tvs.size(); i++)
            {
                if (tvs[i].getCodigo() == codigo)
                {
                    char escolha;
                    encontrado = true;
                    cout << "TV ENCONTRADA:" << endl;
                    cout << "Codigo: " << tvs[i].getCodigo() << endl;
                    cout << "Nome: " << tvs[i].getNome() << endl;
                    cout << "Modelo: " << tvs[i].getModelo() << endl;
                    cout << "Marca: " << tvs[i].getMarca() << endl;
                    cout << "Preco: " << fixed << setprecision(2) << tvs[i].getPreco() << endl;
                    cout << "Quantidade: " << tvs[i].getQuantidade() << endl;
                    cout << "Comprimento: " << tvs[i].getComprimento() << endl;
                    cout << "Largura: " << tvs[i].getLargura() << endl;
                    cout << "Tela: " << tvs[i].getTela() << endl;
                    cout << "Tecnologia: " << tvs[i].getTecnologia() << endl;
                    cout << endl;
                    cout << "ATUALIZAR QUANTIDADE? (s/n): ";
                    cin >> escolha;
                    cout << endl;
                    if (escolha == 's')
                    {
                        cout << "Digite a nova quantidade (" << tvs[i].getQuantidade() << " disp): " << endl;
                        cin >> quantidade;
                        cout << endl;
                        if (quantidade > tvs[i].getQuantidade())
                        {
                            cout << "Quantidade nao pode ser acima da disponivel." << endl;
                            cout << endl;
                        }
                        else if (quantidade < 1)
                        {
                            cout << "Quantidade deve ser de pelo menos 1 unidade" << endl;
                            cout << endl;
                        }
                        else
                        {
                            CarrinhoDeCompras carrinho;
                            carrinho.atualizarQuantidadeItemCarrinho(tvs[i].getCodigo(), quantidade);
                        }
                    }
                }
                break;
            }
            if (!encontrado) // Se nao encontrar a TV
            {
                cout << "TV nao encontrada." << endl;
            }
        }
    }
}
void Estoque::comprarProduto()
{
    int escolha;
    int codigo;
    int quantidade;
    int quantidadeEstoque;
    bool encontrado;
    do
    {
        cout << "--- COMPRAR PRODUTO ---" << endl;
        cout << "1) COMPRAR NOTEBOOK" << endl;
        cout << "2) COMPRAR TV" << endl;
        cout << "9) VOLTAR" << endl;
        cout << endl;
        cout << "Escolha uma Opcao: ";
        cin >> escolha;
        cout << endl;
        switch (escolha)
        {
        case 1:
        {
            if (notebooks.empty())
            {
                cout << "Nenhum notebook cadastrado." << endl;
                cout << endl;
            }
            else
            {
                cout << "--- COMPRAR NOTEBOOK ---" << endl;
                cout << "Digite o codigo do notebook (digite 0 para cancelar): ";
                cin >> codigo;
                cout << endl;
                if (codigo != 0)
                {
                    // Comparando os dados inseridos com os dados da lista de notebooks
                    for (int i = 0; i < notebooks.size(); i++)
                    {
                        if (notebooks[i].getCodigo() == codigo)
                        {
                            char escolha;
                            encontrado = true;
                            cout << "NOTEBOOK ENCONTRADO:" << endl;
                            cout << "Codigo: " << notebooks[i].getCodigo() << endl;
                            cout << "Nome: " << notebooks[i].getNome() << endl;
                            cout << "Modelo: " << notebooks[i].getModelo() << endl;
                            cout << "Marca: " << notebooks[i].getMarca() << endl;
                            cout << "Preco: " << fixed << setprecision(2) << notebooks[i].getPreco() << endl;
                            cout << "Quantidade: " << notebooks[i].getQuantidade() << endl;
                            cout << "Comprimento: " << notebooks[i].getComprimento() << endl;
                            cout << "Largura: " << notebooks[i].getLargura() << endl;
                            cout << "Processador: " << notebooks[i].getProcessador() << endl;
                            cout << "Memoria: " << notebooks[i].getMemoria() << endl;
                            cout << endl;
                            cout << "COMPRAR NOTEBOOK? (s/n): ";
                            cin >> escolha;
                            cout << endl;
                            if (escolha == 's')
                            {
                                cout << "Digite a quantidade desejada (" << notebooks[i].getQuantidade() << " disp): ";
                                cin >> quantidade;
                                cout << endl;
                                if (quantidade > notebooks[i].getQuantidade())
                                {
                                    cout << "Quantidade nao pode ser acima da disponivel." << endl;
                                    cout << endl;
                                }
                                else if (quantidade < 1)
                                {
                                    cout << "Quantidade deve ser de pelo menos 1 unidade" << endl;
                                    cout << endl;
                                }
                                else
                                {
                                    quantidadeEstoque = notebooks[i].getQuantidade() - quantidade;
                                    notebooks[i].setQuantidade(quantidadeEstoque);
                                }
                            }
                        }
                        break;
                    }
                    if (!encontrado) // Se nao encontrar o notebook
                    {
                        cout << "Notebook nao encontrado." << endl;
                        cout << endl;
                    }
                    else
                    {
 //                       Estoque estoque;
 //                       estoque.~Estoque(); ****** N�o � necess�rio

                        cout << "Notebook comprado com sucesso." << endl;
                        cout << endl;
                    }
                }
            }
            break;
        }
        case 2:
        {
            if (notebooks.empty())
            {
                cout << "Nenhuma TV cadastrada." << endl;
                cout << endl;
            }
            else
            {
                cout << "--- COMPRAR TV ---" << endl;
                cout << "Digite o codigo da TV (digite 0 para cancelar): ";
                cin >> codigo;
                cout << endl;
                if (codigo != 0)
                {
                    // Comparando os dados inseridos com os dados da lista de notebooks
                    for (int i = 0; i < tvs.size(); i++)
                    {
                        if (tvs[i].getCodigo() == codigo)
                        {
                            char escolha;
                            encontrado = true;
                            cout << "TV ENCONTRADA:" << endl;
                            cout << "Codigo: " << tvs[i].getCodigo() << endl;
                            cout << "Nome: " << tvs[i].getNome() << endl;
                            cout << "Modelo: " << tvs[i].getModelo() << endl;
                            cout << "Marca: " << tvs[i].getMarca() << endl;
                            cout << "Preco: " << fixed << setprecision(2) << tvs[i].getPreco() << endl;
                            cout << "Quantidade: " << tvs[i].getQuantidade() << endl;
                            cout << "Comprimento: " << tvs[i].getComprimento() << endl;
                            cout << "Largura: " << tvs[i].getLargura() << endl;
                            cout << "Tela: " << tvs[i].getTela() << endl;
                            cout << "Tecnologia: " << tvs[i].getTecnologia() << endl;
                            cout << endl;
                            cout << "COMPRAR TV? (s/n): ";
                            cin >> escolha;
                            cout << endl;
                            if (escolha == 's')
                            {
                                cout << "Digite a quantidade desejada (" << tvs[i].getQuantidade() << " disp): ";
                                cin >> quantidade;
                                cout << endl;
                                if (quantidade > tvs[i].getQuantidade())
                                {
                                    cout << "Quantidade nao pode ser acima da disponivel." << endl;
                                    cout << endl;
                                }
                                else if (quantidade < 1)
                                {
                                    cout << "Quantidade deve ser de pelo menos 1 unidade" << endl;
                                    cout << endl;
                                }
                                else
                                {
                                    quantidadeEstoque = tvs[i].getQuantidade() - quantidade;
                                    tvs[i].setQuantidade(quantidadeEstoque);
                                }
                            }
                        }
                        break;
                    }
                    if (!encontrado) // Se nao encontrar a TV
                    {
                        cout << "TV nao encontrada." << endl;
                        cout << endl;
                    }
                    else
                    {
 //                       Estoque estoque; ****** N�o � necess�rio
  //                      estoque.~Estoque(); ****** N�o � necess�rio

                        cout << "TV comprada com sucesso." << endl;
                        cout << endl;
                    }
                }
            }
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
}

void Estoque::finalizarCompra(int codigo, int quantidade)
{
    int quantidadeEstoque;
    bool encontrado;

    // Comparando os dados inseridos com os dados da lista de notebooks
    for (int i = 0; i < notebooks.size(); i++)
    {
        if (notebooks[i].getCodigo() == codigo)
        {
            encontrado = true;
            quantidadeEstoque = notebooks[i].getQuantidade() - quantidade;
            notebooks[i].setQuantidade(quantidadeEstoque);
        }
        break;
    }
    if (!encontrado)
    {
        // Comparando os dados inseridos com os dados da lista de TVs
        for (int i = 0; i < tvs.size(); i++)
        {
            if (tvs[i].getCodigo() == codigo)
            {
                quantidadeEstoque = tvs[i].getQuantidade() - quantidade;
                tvs[i].setQuantidade(quantidadeEstoque);
            }
            break;
        }
    }
 //   Estoque estoque; 
 //   estoque.~Estoque(); *********N�o � necess�rio
}

Estoque::~Estoque()
{
    ofstream listaNotebooksGravar;
    listaNotebooksGravar.open("Notebooks.txt", ios::binary);
    //	ofstream arquivo("credito.dat", ios::binary);
    if (!listaNotebooksGravar)
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }
   else{  //****** Faltou 
	for (unsigned i = 0; i < notebooks.size(); i++)
    {
        listaNotebooksGravar.write(reinterpret_cast<const char *>(&notebooks[i]), sizeof(Notebook)); // grava no arquivo
    }

    listaNotebooksGravar.close(); // fecha arquivo
   }

    ofstream listaTVsGravar;
    listaTVsGravar.open("TVs.txt", ios::binary);
    //	ofstream arquivo("credito.dat", ios::binary);
    if (!listaTVsGravar)
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }
   else{  //**** Faltou
    for (unsigned i = 0; i < tvs.size(); i++)
    {
        listaTVsGravar.write(reinterpret_cast<const char *>(&tvs[i]), sizeof(TV)); // grava no arquivo
    }

    listaTVsGravar.close(); // fecha arquivo
   }
}