#include "Estoque.h"

void Estoque::atualizarNotebook()
{
    notebooks.clear();

    int codigo;
    bool encontrado;

    ifstream listaNotebooksLer;
    listaNotebooksLer.open("Notebooks.txt", ios::in); // abre arquivo para leitura
                                                      //	ifstream arquivo("credito.txt",ios::in);
    if (!listaNotebooksLer)
    {
        cout << "Nenhum notebook cadastrado." << endl;
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
                if (!encontrado) // Se não encontrar o notebook
                {
                    cout << "Notebook nao encontrado." << endl;
                    cout << endl;
                }
                else
                {
                    ofstream listaNotebooksGravar;
                    listaNotebooksGravar.open("Notebooks.txt", ios::binary);
                    //	ofstream arquivo("credito.dat", ios::binary);
                    if (!listaNotebooksGravar)
                    {
                        cout << "Nao foi possivel abrir o arquivo" << endl;
                    }
                    for (unsigned i = 0; i < notebooks.size(); i++)
                    {
                        listaNotebooksGravar.write(reinterpret_cast<const char *>(&notebooks[i]), sizeof(Notebook)); // grava no arquivo
                    }

                    listaNotebooksGravar.close(); // fecha arquivo

                    cout << "Notebook atualizado com sucesso." << endl;
                    cout << endl;
                }
            }
        }
    }
}

void Estoque::atualizarTV()
{
    tvs.clear();

    int codigo;
    bool encontrado;

    ifstream listaTVsLer;
    listaTVsLer.open("TVs.txt", ios::in); // abre arquivo para leitura
                                          //	ifstream arquivo("credito.txt",ios::in);
    if (!listaTVsLer)
    {
        cout << "Nenhuma TV cadastrada." << endl;
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
                if (!encontrado) // Se não encontrar o notebook
                {
                    cout << "TV nao encontrada." << endl;
                    cout << endl;
                }
                else
                {
                    ofstream listaTVsGravar;
                    listaTVsGravar.open("TVs.txt", ios::binary);
                    //	ofstream arquivo("credito.dat", ios::binary);
                    if (!listaTVsGravar)
                    {
                        cout << "Nao foi possivel abrir o arquivo" << endl;
                    }
                    for (unsigned i = 0; i < tvs.size(); i++)
                    {
                        listaTVsGravar.write(reinterpret_cast<const char *>(&tvs[i]), sizeof(TV)); // grava no arquivo
                    }

                    listaTVsGravar.close(); // fecha arquivo

                    cout << "TV atualizada com sucesso." << endl;
                    cout << endl;
                }
            }
        }
    }
}

void Estoque::adicionarNotebook()
{
    ofstream listaNotebooksGravar;
    listaNotebooksGravar.open("Notebooks.txt", ios::binary);
    //	ofstream arquivo("credito.dat", ios::binary);

    Notebook notebook;

    int codigo;
    carregarListaNotebook();
    codigo = notebooks.size() + 1;

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

    if (!listaNotebooksGravar)
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }
    for (unsigned i = 0; i < notebooks.size(); i++)
    {
        listaNotebooksGravar.write(reinterpret_cast<const char *>(&notebooks[i]), sizeof(Notebook)); // grava no arquivo
    }

    listaNotebooksGravar.close(); // fecha arquivo

    cout << "Notebook adicionado com sucesso." << endl;
    cout << endl;
}

void Estoque::adicionarTV()
{
    ofstream listaTVsGravar;
    listaTVsGravar.open("TVs.txt", ios::binary);
    //	ofstream arquivo("credito.dat", ios::binary);

    TV tv;

    int codigo;
    carregarListaTV();
    codigo = tvs.size() + 1;

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

    if (!listaTVsGravar)
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }
    for (unsigned i = 0; i < tvs.size(); i++)
    {
        listaTVsGravar.write(reinterpret_cast<const char *>(&tvs[i]), sizeof(TV)); // grava no arquivo
    }

    listaTVsGravar.close(); // fecha arquivo

    cout << "TV adicionada com sucesso." << endl;
    cout << endl;
}

void Estoque::removerNotebook()
{
    notebooks.clear();

    int codigo;
    bool encontrado;

    ifstream listaNotebooksLer;
    listaNotebooksLer.open("Notebooks.txt", ios::in); // abre arquivo para leitura
                                                      //	ifstream arquivo("credito.txt",ios::in);
    if (!listaNotebooksLer)
    {
        cout << "Nenhum notebook cadastrado." << endl;
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
                if (!encontrado) // Se não encontrar o notebook
                {
                    cout << "Notebook nao encontrado." << endl;
                    cout << endl;
                }
                else
                {
                    ofstream listaNotebooksGravar;
                    listaNotebooksGravar.open("Notebooks.txt", ios::binary);
                    //	ofstream arquivo("credito.dat", ios::binary);
                    if (!listaNotebooksGravar)
                    {
                        cout << "Nao foi possivel abrir o arquivo" << endl;
                    }
                    for (unsigned i = 0; i < notebooks.size(); i++)
                    {
                        listaNotebooksGravar.write(reinterpret_cast<const char *>(&notebooks[i]), sizeof(Notebook)); // grava no arquivo
                    }

                    listaNotebooksGravar.close(); // fecha arquivo

                    cout << "Notebook removido com sucesso." << endl;
                    cout << endl;
                }
            }
        }
    }
}

void Estoque::removerTV()
{
    tvs.clear();

    int codigo;
    bool encontrado;

    ifstream listaTVsLer;
    listaTVsLer.open("TVs.txt", ios::in); // abre arquivo para leitura
                                          //	ifstream arquivo("credito.txt",ios::in);
    if (!listaTVsLer)
    {
        cout << "Nenhuma TV cadastrada." << endl;
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
                if (!encontrado) // Se não encontrar a TV
                {
                    cout << "TV nao encontrada." << endl;
                    cout << endl;
                }
                else
                {
                    ofstream listaTVsGravar;
                    listaTVsGravar.open("TVs.txt", ios::binary);
                    //	ofstream arquivo("credito.dat", ios::binary);
                    if (!listaTVsGravar)
                    {
                        cout << "Nao foi possivel abrir o arquivo" << endl;
                    }
                    for (unsigned i = 0; i < tvs.size(); i++)
                    {
                        listaTVsGravar.write(reinterpret_cast<const char *>(&tvs[i]), sizeof(TV)); // grava no arquivo
                    }

                    listaTVsGravar.close(); // fecha arquivo

                    cout << "TV removida com sucesso." << endl;
                    cout << endl;
                }
            }
        }
    }
}

void Estoque::exibirNotebook()
{
    notebooks.clear();

    int codigo;
    bool encontrado;

    ifstream listaNotebooksLer;
    listaNotebooksLer.open("Notebooks.txt", ios::in); // abre arquivo para leitura
                                                      //	ifstream arquivo("credito.txt",ios::in);
    if (!listaNotebooksLer)
    {
        cout << "Nenhum notebook cadastrado." << endl;
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
                if (!encontrado) // Se não encontrar o notebook
                {
                    cout << "Notebook nao encontrado." << endl;
                    cout << endl;
                }
            }
        }
    }
}

void Estoque::exibirTV()
{
    tvs.clear();

    int codigo;
    bool encontrado;

    ifstream listaTVsLer;
    listaTVsLer.open("TVs.txt", ios::in); // abre arquivo para leitura
                                          //	ifstream arquivo("credito.txt",ios::in);
    if (!listaTVsLer)
    {
        cout << "Nenhuma TV cadastrada." << endl;
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
                if (!encontrado) // Se não encontrar a TV
                {
                    cout << "TV nao encontrada." << endl;
                    cout << endl;
                }
            }
        }
    }
}

void Estoque::exibirListaNotebook()
{
    notebooks.clear();

    cout << "--- LISTA DE NOTEBOOKS ---" << endl;
    cout << endl;

    ifstream listaNotebooksLer;
    listaNotebooksLer.open("Notebooks.txt", ios::in); // abre arquivo para leitura
                                                      //	ifstream arquivo("credito.txt",ios::in);
    if (!listaNotebooksLer)
    {
        cout << "Nenhum notebook cadastrado." << endl;
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
}

void Estoque::exibirListaTV()
{
    tvs.clear();

    cout << "--- LISTA DE TVS ---" << endl;
    cout << endl;

    ifstream listaTVsLer;
    listaTVsLer.open("TVs.txt", ios::in); // abre arquivo para leitura
                                          //	ifstream arquivo("credito.txt",ios::in);
    if (!listaTVsLer)
    {
        cout << "Nenhuma TV cadastrada." << endl;
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
}

void Estoque::carregarListaNotebook()
{

    ifstream listaNotebooksLer;
    listaNotebooksLer.open("Notebooks.txt", ios::in); // abre arquivo para leitura
                                                      //	ifstream arquivo("credito.txt",ios::in);
    if (!listaNotebooksLer)
    {
        cout << "Nenhum notebook cadastrado." << endl;
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

        if (notebooks.empty())
        {
            cout << "Nenhum notebook cadastrado." << endl;
            cout << endl;
        }
    }
}

void Estoque::carregarListaTV()
{

    ifstream listaTVsLer;
    listaTVsLer.open("TVs.txt", ios::in); // abre arquivo para leitura
                                          //	ifstream arquivo("credito.txt",ios::in);
    if (!listaTVsLer)
    {
        cout << "Nenhuma TV cadastrada." << endl;
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

        if (tvs.empty())
        {
            cout << "Nenhuma TV cadastrada." << endl;
            cout << endl;
        }
    }
}
