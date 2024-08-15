#include "funcionario.h"

Funcionario::Funcionario(int matricula, string nome, int h_trabalhada, float valor_h){
	this->matricula = matricula;
	this->nome = nome;
	this->h_trabalhada = h_trabalhada;
	this->valor_h = valor_h;
	this->salario = 0;
}

void Funcionario::setMat(int matricula){
	this->matricula = matricula;
}
void Funcionario::setNome(string nome){
	this->nome = nome;
}
void Funcionario::setHTrabalhada(int h_trabalhada){
	this->h_trabalhada = h_trabalhada;
}
void Funcionario::setValorH(float valor_h){
	this->valor_h = valor_h;
}

void Funcionario::calculaSalario()  { 
	salario = valor_h * h_trabalhada; 
}

int Funcionario::getMat(){
	return matricula;
}
string Funcionario::getNome(){
	return nome;
}
float Funcionario::getSalario(){
	return salario;
}
void Funcionario::imprimeDados(){
	calculaSalario();
	cout << "Nome: " << nome
		<< fixed << setprecision(2) << "\nSalário: R$ " << salario << endl;
}

