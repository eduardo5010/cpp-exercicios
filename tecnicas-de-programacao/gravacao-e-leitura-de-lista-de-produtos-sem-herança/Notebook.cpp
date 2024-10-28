#include "Notebook.h"

int Notebook::getCodigo()
{
   return this->codigo;
}
string Notebook::getNome()
{
   return this->nome;
}
string Notebook::getModelo()
{
   return this->modelo;
}
string Notebook::getMarca()
{
   return this->marca;
}
float Notebook::getPreco()
{
   return this->preco;
}
int Notebook::getQuantidade()
{
   return this->quantidade;
}
float Notebook::getComprimento()
{
   return this->comprimento;
}
float Notebook::getLargura()
{
   return this->largura;
}
string Notebook::getProcessador()
{
   return this->processador;
}
string Notebook::getMemoria()
{
   return this->memoria;
}

void Notebook::setCodigo(int valorCodigo)
{
   this->codigo = valorCodigo;
}
void Notebook::setNome(string nomeNotebook)
{
   // copia no m�ximo 30 caracteres da string para Nome
   const char *valorNome = nomeNotebook.data();
   int length = nomeNotebook.size();
   length = (length < 30 ? length : 29);
   strncpy(nome, valorNome, length);
   nome[length] = '\0'; // acrescenta caractere nulo ao Nome
}
void Notebook::setModelo(string modeloNotebook)
{
   // copia no m�ximo 30 caracteres da string para Modelo
   const char *valorModelo = modeloNotebook.data();
   int length = modeloNotebook.size();
   length = (length < 30 ? length : 29);
   strncpy(modelo, valorModelo, length);
   modelo[length] = '\0'; // acrescenta caractere nulo a Modelo
}
void Notebook::setMarca(string marcaNotebook)
{
   // copia no m�ximo 30 caracteres da string para Modelo
   const char *valorMarca = marcaNotebook.data();
   int length = marcaNotebook.size();
   length = (length < 30 ? length : 29);
   strncpy(marca, valorMarca, length);
   marca[length] = '\0'; // acrescenta caractere nulo a Modelo
}
void Notebook::setPreco(float valorPreco)
{
   this->preco = valorPreco;
}
void Notebook::setQuantidade(int valorQuantidade)
{
   this->quantidade = valorQuantidade;
}
void Notebook::setComprimento(float valorComprimento)
{
   this->comprimento = valorComprimento;
}
void Notebook::setLargura(float valorLargura)
{
   this->largura = valorLargura;
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
void Notebook::setMemoria(string memoriaNotebook)
{
   // copia no m�ximo 30 caracteres da string para Modelo
   const char *valorMemoria = memoriaNotebook.data();
   int length = memoriaNotebook.size();
   length = (length < 30 ? length : 29);
   strncpy(memoria, valorMemoria, length);
   memoria[length] = '\0'; // acrescenta caractere nulo a Modelo
}