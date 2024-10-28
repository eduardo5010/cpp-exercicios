#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Notebook.h"
#include "TV.h"
#include "Produto.h"

class Estoque
{
private:
    vector<Notebook> notebooks;
    vector<TV> tvs;
public:
    Estoque();
    void atualizarNotebook();
    void atualizarTV();
    void adicionarNotebook();
    void adicionarTV();
    void removerNotebook();
    void removerTV();
    void exibirNotebook();
    void exibirTV();
    void exibirListaNotebook();
    void exibirListaTV();
    void adicionarNotebookCarrinho();
    void adicionarTVCarrinho();
    void retirarNotebookCarrinho();
    void retirarTVCarrinho();
    void atualizarQuantidadeNotebookCarrinho();
    void atualizarQuantidadeTVCarrinho();
    void comprarProduto();
    void finalizarCompra(int, int);
    ~Estoque();
};

#endif