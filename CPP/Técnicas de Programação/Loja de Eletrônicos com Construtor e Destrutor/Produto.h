#ifndef PRODUTO_H
#define PRODUTO_H

class Produto
{
protected:
    static int codigoGlobal;
    int codigo;
    char nome[30];
    char modelo[30];
    char marca[30];
    double preco;
    int quantidade;

public:
    void setCodigoGlobal(int);
    int getCodigoGlobal();
    void setCodigo(int);
    int getCodigo();
    void setNome(string);
    string getNome();
    void setModelo(string);
    string getModelo();
    void setMarca(string);
    string getMarca();
    void setPreco(double);
    double getPreco();
    void setQuantidade(int);
    int getQuantidade();
};

#endif