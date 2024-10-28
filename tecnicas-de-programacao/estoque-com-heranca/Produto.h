#ifndef PRODUTO_H
#define PRODUTO_H

class Produto
{
protected:
    int codigo;
    string nome;
    string modelo;
    string marca;
    double preco;
    int quantidade;

public:
    Produto(int codigo, string nome, string modelo, string marca, double preco, int quantidade);

    string getNome();
    void setNome(string nome);

    string getModelo();
    void setModelo(string modelo);

    string getMarca();
    void setMarca(string marca);

    double getPreco();
    void setPreco(double preco);

    int getCodigo();
    void setCodigo(int codigo);

    int getQuantidade();
    void setQuantidade(int quantidade);
};

#endif // PRODUTO_H