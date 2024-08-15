#ifndef NOTEBOOK_H
#define NOTEBOOK_H

class Notebook
{
private:
    int codigo;
    char nome[30];
    char modelo[30];
    char marca[30];
    double preco;
    int quantidade;
    double comprimento;
    double largura;
    char processador[30];
    char memoria[30];
public:
    int getCodigo();
    string getNome();
    string getModelo();
    string getMarca();
    float getPreco();
    int getQuantidade();
    float getComprimento();
    float getLargura();
    string getProcessador();
    string getMemoria();
    
    void setCodigo(int);
    void setNome(string);
    void setModelo(string);
    void setMarca(string);
    void setPreco(float);
    void setQuantidade(int);
    void setComprimento(float);
    void setLargura(float);
    void setProcessador(string);
    void setMemoria(string);
};

#endif