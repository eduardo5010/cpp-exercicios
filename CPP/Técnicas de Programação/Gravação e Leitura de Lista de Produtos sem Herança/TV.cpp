#include "TV.h"

int TV::getCodigo()
{
    return this->codigo;
}
string TV::getNome()
{
    return this->nome;
}
string TV::getModelo()
{
    return this->modelo;
}
string TV::getMarca()
{
    return this->marca;
}
float TV::getPreco()
{
    return this->preco;
}
int TV::getQuantidade()
{
    return this->quantidade;
}
float TV::getComprimento()
{
    return this->comprimento;
}
float TV::getLargura()
{
    return this->largura;
}
string TV::getTela()
{
    return this->tela;
}
string TV::getTecnologia()
{
    return this->tecnologia;
}

void TV::setCodigo(int valorCodigo)
{
    this->codigo = valorCodigo;
}
void TV::setNome(string nomeTV)
{
    // copia no m�ximo 30 caracteres da string para Nome
    const char *valorNome = nomeTV.data();
    int length = nomeTV.size();
    length = (length < 30 ? length : 29);
    strncpy(nome, valorNome, length);
    nome[length] = '\0'; // acrescenta caractere nulo ao Nome
}
void TV::setModelo(string modeloTV)
{
    // copia no m�ximo 30 caracteres da string para Modelo
    const char *valorModelo = modeloTV.data();
    int length = modeloTV.size();
    length = (length < 30 ? length : 29);
    strncpy(modelo, valorModelo, length);
    modelo[length] = '\0'; // acrescenta caractere nulo a Modelo
}
void TV::setMarca(string marcaTV)
{
    // copia no m�ximo 30 caracteres da string para Modelo
    const char *valorMarca = marcaTV.data();
    int length = marcaTV.size();
    length = (length < 30 ? length : 29);
    strncpy(marca, valorMarca, length);
    marca[length] = '\0'; // acrescenta caractere nulo a Modelo
}
void TV::setPreco(float valorPreco)
{
    this->preco = valorPreco;
}
void TV::setQuantidade(int valorQuantidade)
{
    this->quantidade = valorQuantidade;
}
void TV::setComprimento(float valorComprimento)
{
    this->comprimento = valorComprimento;
}
void TV::setLargura(float valorLargura)
{
    this->largura = valorLargura;
}
void TV::setTela(string telaTV)
{
    // copia no m�ximo 30 caracteres da string para Modelo
    const char *valorTela = telaTV.data();
    int length = telaTV.size();
    length = (length < 30 ? length : 29);
    strncpy(tela, valorTela, length);
    tela[length] = '\0'; // acrescenta caractere nulo a Modelo
}
void TV::setTecnologia(string tecnologiaTV)
{
    // copia no m�ximo 30 caracteres da string para Modelo
    const char *valorTecnologia = tecnologiaTV.data();
    int length = tecnologiaTV.size();
    length = (length < 30 ? length : 29);
    strncpy(tecnologia, valorTecnologia, length);
    tecnologia[length] = '\0'; // acrescenta caractere nulo a Modelo
}