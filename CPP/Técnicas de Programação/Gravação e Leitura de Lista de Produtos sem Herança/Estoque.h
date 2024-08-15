#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Notebook.h"
#include "TV.h"

class Estoque
{
private:
    vector<Notebook> notebooks;
    vector<TV> tvs;
public:
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
    void carregarListaNotebook();
    void carregarListaTV();
};

#endif