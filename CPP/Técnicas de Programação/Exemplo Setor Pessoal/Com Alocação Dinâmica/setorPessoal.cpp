#include "setorPessoal.h"

SetorPessoal::SetorPessoal(int n){
    funcionarios = new Funcionario[n];
    num = 0;
}

void SetorPessoal::addFuncionario(Funcionario f){
        funcionarios[num] = f;
        num++;
}

void SetorPessoal::imprimeFolha(){
    cout << fixed << setprecision(2);
	cout << "Lista de funcionários:" << endl << endl;
	for (unsigned i(0);  i < num; i++){
		cout << i+1 << "º Funcionário: " << endl;
		funcionarios[i].imprimeDados();
		cout << endl;
	}
	system("pause");		
}

//Imprime por ordem de salário
void SetorPessoal::imprimePorSalario(){
    Funcionario f[num];
    Funcionario aux;

    system("cls");
	cout << fixed << setprecision(2);

    for(unsigned i = 0; i < num; i++)
        f[i] = funcionarios[i];
    //Ordena pelo método Bubble Sort
    for(unsigned j = 0; j < num; j++){
        for(unsigned k = 0; k < num - 1; k++) {
            if(f[k].getSalario() > f[k+1].getSalario()){
                aux = f[k];
                f[k] = f[k+1];
                f[k+1] = aux;
            }
        }

    }
	cout<<"Lista de funcionários por ordem decrescente de salários"<<endl<<endl;
	for(unsigned i(0); i < num; i++){
		cout << i+1 << "º Funcionário" << endl;
		f[i].imprimeDados();
		cout << endl;
	}
}

SetorPessoal::~SetorPessoal(){
    delete []funcionarios;
}

