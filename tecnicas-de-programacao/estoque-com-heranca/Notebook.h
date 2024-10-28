#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include "Produto.h"

class Notebook : public Produto
{
private:
    float comprimento;
    float largura;
    string processador;
    string memoria;

public:
    Notebook(int codigo, string nome, string modelo, string marca, double preco, int quantidade, float comprimento, float largura, string processador, string memoria);

    float getComprimento();
    void setComprimento(float comprimento);

    float getLargura();
    void setLargura(float largura);

    string getProcessador();
    void setProcessador(string nome);

    string getMemoria();
    void setMemoria(string nome);

    void novonome();
    void imprime() const;
};

#endif