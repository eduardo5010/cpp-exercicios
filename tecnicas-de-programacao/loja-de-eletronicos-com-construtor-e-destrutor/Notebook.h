#ifndef NOTEBOOK_H
#define NOTEBOOK_H

//#include "Produto.h"

class Notebook : public Produto
{
private:
    float comprimento;
    float largura;
    char processador[30];
    char memoria[30];
public:
    void setComprimento(float);
    float getComprimento();
    void setLargura(float);
    float getLargura();
    void setProcessador(string);
    string getProcessador();
    void setMemoria(string);
    string getMemoria();
};

#endif