#include "Notebook.h"

void Notebook::setComprimento(float comprimento)
{
    this->comprimento = comprimento;
}
float Notebook::getComprimento()
{
    return this->comprimento;
}
void Notebook::setLargura(float largura)
{
    this->largura = largura;
}
float Notebook::getLargura()
{
    return this->largura;
}
void Notebook::setProcessador(string processadorNotebook)
{
   // copia no m�ximo 30 caracteres da string para Modelo
   const char *valorProcessador = processadorNotebook.data();
   int length = processadorNotebook.size();
   length = (length < 30 ? length : 29);
   strncpy(processador, valorProcessador, length);
   processador[length] = '\0'; // acrescenta caractere nulo a Modelo
}
string Notebook::getProcessador()
{
    return this->processador;
}
void Notebook::setMemoria(string memoriaNotebook)
{
   // copia no m�ximo 30 caracteres da string para Modelo
   const char *valorMemoria = memoriaNotebook.data();
   int length = memoriaNotebook.size();
   length = (length < 30 ? length : 29);
   strncpy(memoria, valorMemoria, length);
   memoria[length] = '\0'; // acrescenta caractere nulo a Modelo
}
string Notebook::getMemoria()
{
    return this->memoria;
}