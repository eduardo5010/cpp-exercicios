#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario{
	int matricula;
	string nome;
	int h_trabalhada;
	float valor_h;
	float salario;
	void calculaSalario(); //fun��o private porque s� � usada por m�todos da classe
public:
	Funcionario(int=0, string="", int=0, float=0);

	void setMat(int);
	void setNome(string);
	void setHTrabalhada(int);
	void setValorH(float);
	
	int getMat();
	string getNome();
	float getSalario();
	void imprimeDados();

};

#endif // FUNCIONARIO_H
