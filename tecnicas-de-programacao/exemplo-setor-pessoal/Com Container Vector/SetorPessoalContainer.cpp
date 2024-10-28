#include "SetorPessoalContainer.h"

bool ordenaPorSalario(Funcionario A, Funcionario B){
    if (A.getSalario() < B.getSalario())
       return true;
    return false;
}

SetorPessoalContainer::SetorPessoalContainer(){
}

void SetorPessoalContainer::addFuncionario(Funcionario func){
	funcionarios.push_back(func);
}

// Impressão na ordem em que foram adicionados a lista
void SetorPessoalContainer::imprimeFolha() { 
	
	cout << "Lista de funcionários:" << endl << endl;
	for (unsigned i(0);  i < funcionarios.size(); i++){
		cout << i+1 << "º Funcionário: " << endl;
		funcionarios[i].imprimeDados();
		cout << endl;
	}		
	system("pause");
}

//Imprime a lista de funcionários por ordem crescente de salário
void SetorPessoalContainer::imprimePorSalario(){
	system("cls");
	
	vector<Funcionario>  f(funcionarios.size()); //criação do vetor f do mesmo tamanho de funcionários
    copy(funcionarios.begin(), funcionarios.end(), f.begin()); //copia em f os valores do vetor funcionários 
								// f.begin() indica que os elementos serão copiados a partir do início do vetor f
    
	sort(f.begin(), f.end(),ordenaPorSalario); // Ordenando a lista funcionarios em ordem crescente de salário.
	cout<<"Lista de funcionários por ordem de salários"<<endl<<endl;
	for(unsigned i(0); i < f.size(); i++){
		cout << i+1 << "º Funcionário" << endl;
		f[i].imprimeDados();
		cout << endl;
	}
}

