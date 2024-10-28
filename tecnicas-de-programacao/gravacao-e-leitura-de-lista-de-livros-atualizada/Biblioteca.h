#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Livro.h"

class Biblioteca
{
private:
    vector<Livro> livros;
public:
    void gravarListaLivros();
    void lerListaLivros();
};

#endif