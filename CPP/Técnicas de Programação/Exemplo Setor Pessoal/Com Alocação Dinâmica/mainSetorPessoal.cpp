#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <clocale>

using namespace std;

#include "funcionario.cpp"
#include "setorPessoal.cpp"


int main()
{
	setlocale(LC_ALL, "Portuguese");

    cout << "Criação da empresa..." << endl;

    int qntmax;
    cout << "Digite a quantidade de funcionários: ";
    cin >> qntmax;

    SetorPessoal EmpJp(qntmax);
	Funcionario f1(1234, "William", 10, 0.5), f2(4567, "Francinildo", 15, 5), f3(8910, "David", 7, 3.5);
	
	EmpJp.addFuncionario(f1);
	EmpJp.addFuncionario(f2);
	EmpJp.addFuncionario(f3);

	EmpJp.imprimeFolha();
	EmpJp.imprimePorSalario();	
	
    return 0;
}
