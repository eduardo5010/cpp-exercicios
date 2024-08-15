#include "Produto.h"

void Produto::setCodigo(int codigo)
{   
    this->codigo = codigo;
}
int Produto::getCodigo()
{   
    return this->codigo;
}
void Produto::setNome(string nomeProduto)
{
   // copia no m�ximo 30 caracteres da string para Nome
   const char *valorNome = nomeProduto.data();
   int length = nomeProduto.size();
   length = (length < 30 ? length : 29);
   strncpy(nome, valorNome, length);
   nome[length] = '\0'; // acrescenta caractere nulo ao Nome
}
string Produto::getNome()
{
    return this->nome;
}
void Produto::setModelo(string modeloProduto)
{
   // copia no m�ximo 30 caracteres da string para Modelo
   const char *valorModelo = modeloProduto.data();
   int length = modeloProduto.size();
   length = (length < 30 ? length : 29);
   strncpy(modelo, valorModelo, length);
   modelo[length] = '\0'; // acrescenta caractere nulo a Modelo
}
string Produto::getModelo()
{
    return this->modelo;
}
void Produto::setMarca(string marcaProduto)
{
   // copia no m�ximo 30 caracteres da string para Modelo
   const char *valorMarca = marcaProduto.data();
   int length = marcaProduto.size();
   length = (length < 30 ? length : 29);
   strncpy(marca, valorMarca, length);
   marca[length] = '\0'; // acrescenta caractere nulo a Modelo
}
string Produto::getMarca()
{
    return this->marca;
}
void Produto::setPreco(double preco)
{
    this->preco = preco;
}
double Produto::getPreco()
{
    return this->preco;
}
void Produto::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}
int Produto::getQuantidade()
{
    return this->quantidade;
}