#ifndef NOTEBOOK_H
#define NOTEBOOK_H

class Notebook{
private :
	int codigo;
	string nome;
	string modelo;
	string marca;
	double preco;
	int quantidade;
	float comprimento;
	float largura;
	string processador;
	string memoria;
public :
	Notebook(int = 0, string = "", string = "", string = "", double = 0.0, int = 0, float = 0.0, float = 0.0, string = "", string = "");
	void setCodigo(int);
	void setNome(string);
	void setModelo(string);
	void setMarca(string);
	void setPreco(double);
	void setQuantidade(int);
	void setComprimento(float);
	void setLargura(float);
	void setProcessador(string);
	void setMemoria(string);
	int getCodigo();
	string getNome();
	string getModelo();
	string getMarca();
	double getPreco();
	int getQuantidade();
	float getComprimento();
	float getLargura();
	string getProcessador();
	string getMemoria();
	void novonome();
	void imprime() const;
};

#endif