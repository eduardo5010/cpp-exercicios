#include "Produto.h"

Produto::Produto(int codigo, string nome, string modelo, string marca, double preco, int quantidade) : nome(nome), modelo(modelo), marca(marca), preco(preco), codigo(codigo), quantidade(quantidade) 
{
    setCodigo(codigo);
    setNome(nome);
    setModelo(modelo);
    setMarca(marca);
    setPreco(preco);
    setQuantidade(quantidade);
}

string Produto::getNome()
{
    return nome;
}

void Produto::setNome(string nome)
{
    this->nome = nome;
}

string Produto::getModelo()
{
    return modelo;
}

void Produto::setModelo(string modelo)
{
    this->modelo = modelo;
}

string Produto::getMarca()
{
    return marca;
}

void Produto::setMarca(string marca)
{
    this->marca = marca;
}

double Produto::getPreco()
{
    return preco;
}

void Produto::setPreco(double preco)
{
    this->preco = preco;
}

int Produto::getCodigo()
{
    return codigo;
}

void Produto::setCodigo(int codigo)
{
    this->codigo = codigo;
}

int Produto::getQuantidade()
{
    return quantidade;
}

void Produto::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}