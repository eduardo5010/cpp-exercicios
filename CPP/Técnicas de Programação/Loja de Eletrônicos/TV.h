#ifndef TV_H
#define TV_H

//#include "Produto.h"

class TV : public Produto
{
private:
    float comprimento;
    float largura;
    char tela[30];
    char tecnologia[30];
public:
    void setComprimento(float);
    float getComprimento();
    void setLargura(float);
    float getLargura();
    void setTela(string);
    string getTela();
    void setTecnologia(string);
    string getTecnologia();
};

#endif