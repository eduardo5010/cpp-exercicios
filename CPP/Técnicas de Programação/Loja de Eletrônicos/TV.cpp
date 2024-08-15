#include "TV.h"

void TV::setComprimento(float comprimento)
{
    this->comprimento = comprimento;
}
float TV::getComprimento()
{
    return this->comprimento;
}
void TV::setLargura(float largura)
{
    this->largura = largura;
}
float TV::getLargura()
{
    return this->largura;
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
string TV::getTela()
{
    return this->tela;
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
string TV::getTecnologia()
{
    return this->tecnologia;
}