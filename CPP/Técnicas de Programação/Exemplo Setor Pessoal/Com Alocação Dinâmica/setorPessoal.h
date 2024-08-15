#ifndef SETORPESSOAL_H
#define SETORPESSOAL_H

class SetorPessoal{
    Funcionario *funcionarios; //nome da lista 
    unsigned num;  //unsigned = inteiro sem sinal
public:
    SetorPessoal(int);
    void addFuncionario(Funcionario);
    //imprime o nome e sal�rio de todos os funcion�rios
    void imprimeFolha();
    //Imprime a lista de funcion�rios por ordem crescente de sal�rio
    void imprimePorSalario();
    
    ~SetorPessoal();
};

#endif // SETORPESSOAL_H

