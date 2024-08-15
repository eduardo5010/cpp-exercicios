#ifndef TV_H
#define TV_H

class TV
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
    char tela[30];
    char tecnologia[30];
public:
    int getCodigo();
    string getNome();
    string getModelo();
    string getMarca();
    float getPreco();
    int getQuantidade();
    float getComprimento();
    float getLargura();
    string getTela();
    string getTecnologia();
    
    void setCodigo(int);
    void setNome(string);
    void setModelo(string);
    void setMarca(string);
    void setPreco(float);
    void setQuantidade(int);
    void setComprimento(float);
    void setLargura(float);
    void setTela(string);
    void setTecnologia(string);
};

#endif