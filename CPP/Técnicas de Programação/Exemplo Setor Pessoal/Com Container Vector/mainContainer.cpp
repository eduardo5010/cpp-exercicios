#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <locale>
#include <cstdlib>
using namespace std;

#include "Funcionario.cpp"  //reparem que � a mesma classe usada na Aloca��o Din�mica
#include "SetorPessoalContainer.cpp"

int main(){
	setlocale(LC_ALL, "Portuguese");

	cout << "Cria��o da empresa..." << endl;
	
	SetorPessoalContainer EmpJp;
	Funcionario f1(1234, "William", 10, 0.5), f2(4567, "Francinildo", 15, 5), f3(8910, "David", 7, 3.5);
	
	EmpJp.addFuncionario(f1);
	EmpJp.addFuncionario(f2);
	EmpJp.addFuncionario(f3);

	EmpJp.imprimeFolha();
	EmpJp.imprimePorSalario();
}

