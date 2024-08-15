#ifndef SETORPESSOALCONTAINER_H
#define SETORPESSOALCONTAINER_H

class SetorPessoalContainer{
  private:
	vector<Funcionario> funcionarios;
  public:
	SetorPessoalContainer();
	void addFuncionario(Funcionario);
    //imprime o nome e salário de todos os funcionários
	void imprimeFolha();
    //Imprime a lista de funcionários por ordem crescente de salário
    void imprimePorSalario();
};
#endif // !SETORPESSOAL_H
