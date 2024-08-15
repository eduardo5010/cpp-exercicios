#ifndef SETORPESSOAL_H
#define SETORPESSOAL_H

class SetorPessoal{
    Funcionario *funcionarios; //nome da lista 
    unsigned num;  //unsigned = inteiro sem sinal
public:
    SetorPessoal(int);
    void addFuncionario(Funcionario);
    //imprime o nome e salário de todos os funcionários
    void imprimeFolha();
    //Imprime a lista de funcionários por ordem crescente de salário
    void imprimePorSalario();
    
    ~SetorPessoal();
};

#endif // SETORPESSOAL_H

