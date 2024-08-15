/*
> Discente: Eduardo Santos Ferreira
> Matrícula: 121210323
> Período: 2022.2
> Curso: Engenharia Elétrica
> Disciplina: Tecnícas de Programação 
> Turma: 01
> Professor: MARCUS SALERNO 
> Unidade 5: LVP-06
Descrição do LVP:
*/

// Este arquivo utiliza a seguinte codificação: UTF-8

/*LEIA ATENTAMENTE TODO O ENUNCIADO

Neste LVP você irá implementar um sistema de controle de uma sala de espera dos clientes de uma agência bancária. EX: Banco do Brasil

Esse sistema deve guardar duas informações: a fila de clientes em espera (ordenada por ordem de chegada) e a lista de todos os clientes que foram atendidos, ordenada do mais recente para o mais antigo.

Todo cliente tem os seguintes dados: nome, ficha de espera (número que identifica o cliente) e o motivo do atendimento. Essas informações deverão estar na classe Cliente.

Na classe Banco, devem ser utilizados como atributos uma fila (<queue>) e uma lista (<vector>) do tipo <Cliente> para armazenar os respectivos dados.

·         Funcionalidades obrigatórias do sistema:

-          Deve ser possível adicionar um cliente na fila de espera, sua posição deve ser definida de acordo com a ordem de chegada (ver exemplo da filaAlmoco.ccp na Unidade 5 do AVA).

-          Deve ser possível atender um cliente. Sempre que isso é feito o cliente sai da fila e seus dados são registrados na lista de clientes atendidos (usar vector).

-          Deve ser possível exibir os dados de um cliente específico na lista de atendidos de acordo com o seu registro.

-          Deve ser possível exibir um relatório com os dados de todos os clientes que já foram atendidos, ordenados do mais recente para o mais antigo (é necessário fazer ordenar o vetor antes de exibir).

Para que o usuário interaja com o sistema, deve ser exibido um menu com todas as funcionalidades disponíveis e uma opção para fechar o sistema.

O sistema deve ser encerrado apenas quando o usuário escolher a opção de fechar o sistema.

·         Exemplo de menu:

--- SISTEMA DE CONTROLE DE SALA DE ESPERA – BANCO DO BRASIL ---

1)      ADICIONAR UM NOVO CLIENTE NA FILA

2)      ATENDER CLIENTE

3)      EXIBIR/BUSCAR CLIENTE NA LISTA DE ATENDIDOS

4)      EXIBIR TODOS OS CLIENTES JÁ ATENDIDOS

9)      FECHAR O SISTEMA



Mensagens

Os textos de interação do usuário nos casos de sucesso e erro devem seguir a lista abaixo:

Dica: estas mensagens devem estar na main, utilize retorno booleano.

1)      Adicionar um novo cliente na fila
- sucesso: “Cliente cadastrado na fila com sucesso!”

2)      Atender cliente
- sucesso: “Cliente atendido com sucesso!”
- fila vazia: “Nenhum cliente na fila de espera!”

3)      Exibir um cliente da lista de atendidos
- sucesso: informações do usuário
- não existe: “Cliente não encontrado!”

4)      Exibir todos os clientes já atendidos
- sucesso: informações dos clientes
- relatório vazio: “Não há clientes no relatório”*/

// Importando bibliotecas
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include "LVP06.cpp"

using namespace std;

// Função principal
int main()
{

    setlocale(LC_ALL, "Portuguese");

    // Instanciando objeto do tipo Banco
    Banco banco;

    // Declarando variável
    int escolha;
    do
    {
        // Menu principal
        cout << "--- SISTEMA DE CONTROLE DE SALA DE ESPERA – BANCO DO BRASIL ---" << endl;
        cout << "1) ADICIONAR UM NOVO CLIENTE NA FILA" << endl;
        cout << "2) ATENDER CLIENTE" << endl;
        cout << "3) EXIBIR/BUSCAR CLIENTE NA LISTA DE ATENDIDOS" << endl;
        cout << "4) EXIBIR TODOS OS CLIENTES JÁ ATENDIDOS" << endl;
        cout << "9) FECHAR O SISTEMA" << endl;
        cout << endl;
        cout << "Escolha uma opção: ";
        cin >> escolha;

        // Chamando métodos do objeto do tipo Banco
        switch (escolha)
        {
        case 1:
        {
            // Adiciona um novo cliente na fila
            Cliente cliente;
            string nome;
            int ficha;
            long long int cpf;
            string motivoAtendimento;
            cout << "Digite o nome do cliente: ";
            cin.ignore();
            getline(cin, nome);
            cliente.setNome(nome);
            cout << "Digite o número da ficha do cliente: ";
            cin >> ficha;
            cliente.setFicha(ficha);
            cout << "Digite o número do CPF do cliente: ";
            cin.ignore();
            cin >> cpf;
            cliente.setCPF(cpf);
            cout << "Digite o motivo do atendimento: ";
            cin.ignore();
            getline(cin, motivoAtendimento);
            cliente.setMotivoAtendimento(motivoAtendimento);
            bool resultado = banco.adicionarClienteFila(cliente);
            if (resultado)
            {
                cout << "Cliente cadastrado na fila com sucesso!" << endl;
            }
            break;
        }
        case 2:
        {
            // Atende um cliente
            bool resultado = banco.atenderCliente();
            if (resultado)
            {
                cout << "Cliente atendido com sucesso!" << endl;
            }
            else
            {
                cout << "Nenhum cliente na fila de espera!" << endl;
            }
            break;
        }
        case 3:
        {
            // Exibe/busca um cliente na lista de atendidos
            int ficha;
            cout << "Digite o número da ficha do cliente: ";
            cin >> ficha;
            bool resultado = banco.exibirClienteAtendido(ficha);
            if (!resultado)
            {
                cout << "Cliente não encontrado!" << endl;
            }
            break;
        }
        case 4:
        {
            // Exibe todos os clientes já atendidos
            bool resultado = banco.exibirRelatorio();
            if (!resultado)
            {
                cout << "Não há clientes no relatório" << endl;
            }
            break;
        }
        case 9:
        {
            // Fecha o sistema
            cout << "Fechando o sistema..." << endl;
            break;
        }
        default:
        {
            // Opção inválida
            cout << "Opção inválida. Tente novamente." << endl;
            break;
        }
        }

        cout << endl;

    } while (escolha != 9);

    return 0;
}