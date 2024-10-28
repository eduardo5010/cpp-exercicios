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

// Impress�o na ordem em que foram adicionados a lista
void SetorPessoalContainer::imprimeFolha() { 
	
	cout << "Lista de funcion�rios:" << endl << endl;
	for (unsigned i(0);  i < funcionarios.size(); i++){
		cout << i+1 << "� Funcion�rio: " << endl;
		funcionarios[i].imprimeDados();
		cout << endl;
	}		
	system("pause");
}

//Imprime a lista de funcion�rios por ordem crescente de sal�rio
void SetorPessoalContainer::imprimePorSalario(){
	system("cls");
	
	vector<Funcionario>  f(funcionarios.size()); //cria��o do vetor f do mesmo tamanho de funcion�rios
    copy(funcionarios.begin(), funcionarios.end(), f.begin()); //copia em f os valores do vetor funcion�rios 
								// f.begin() indica que os elementos ser�o copiados a partir do in�cio do vetor f
    
	sort(f.begin(), f.end(),ordenaPorSalario); // Ordenando a lista funcionarios em ordem crescente de sal�rio.
	cout<<"Lista de funcion�rios por ordem de sal�rios"<<endl<<endl;
	for(unsigned i(0); i < f.size(); i++){
		cout << i+1 << "� Funcion�rio" << endl;
		f[i].imprimeDados();
		cout << endl;
	}
}

