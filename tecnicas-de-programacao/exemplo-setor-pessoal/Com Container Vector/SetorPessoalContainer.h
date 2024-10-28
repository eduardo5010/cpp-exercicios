#ifndef SETORPESSOALCONTAINER_H
#define SETORPESSOALCONTAINER_H

class SetorPessoalContainer{
  private:
	vector<Funcionario> funcionarios;
  public:
	SetorPessoalContainer();
	void addFuncionario(Funcionario);
    //imprime o nome e sal�rio de todos os funcion�rios
	void imprimeFolha();
    //Imprime a lista de funcion�rios por ordem crescente de sal�rio
    void imprimePorSalario();
};
#endif // !SETORPESSOAL_H
