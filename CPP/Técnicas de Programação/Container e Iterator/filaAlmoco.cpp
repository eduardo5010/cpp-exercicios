#include <iostream>
#include <cstdlib> 
#include <locale>
#include <queue> // Declaração da Biblioteca


using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	
	queue <string> filaAlmoco; // Declaração da fila(queue), chamada de "filaAlmoco"
 	
 	
 	

	//adicionando elementros à fila através do método "push()"
	filaAlmoco.push("Pai");
	filaAlmoco.push("Mae");
	filaAlmoco.push("Filho1");
	filaAlmoco.push("Filho2");
	
	//Verificanto a quantidade de elementos
	cout <<"O número de pessoas presentes na fila é: "<< filaAlmoco.size() << endl;
	
	
	
	
	
	
	//retorno da pessoa que está no inicio da fila, através do método "front()"
	cout <<"A primeira pessoa da fila é: "<< filaAlmoco.front() <<endl; 
	
	//retorno da pessoa que está no final da fila, através do método "back()"
	cout <<"A última pessoa da fila é: "<< filaAlmoco.back() <<endl; 
	
	
	
	
	//removendo as pessoas da fila
	while(!filaAlmoco.empty()){// enquanto o metodo empty() NÃO retornar true, o while continua a rodar
		
		cout <<"A pessoa que está no começo da fila agora é: " << filaAlmoco.front() <<endl;
		
		filaAlmoco.pop(); // Remove o elemento que está no inicio da fila
			 
	}
}





