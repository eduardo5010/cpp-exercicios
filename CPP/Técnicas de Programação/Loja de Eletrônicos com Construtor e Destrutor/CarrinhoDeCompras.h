#ifndef CARRINHODECOMPRAS_H
#define CARRINHODECOMPRAS_H

#include "Produto.h"

class CarrinhoDeCompras
{
private:
    vector <Produto> produtos;
public:
    void adicionarItemCarrinho(int, string, string, string, double, int);
    void removerItemCarrinho(int);
    void atualizarQuantidadeItemCarrinho(int, int);
    void verDetalhesCarrinho();
    void finalizarPedido();
    void novoCarrinho();
    void carregarCarrinho();
    bool carrinhoVazio();
};

#endif