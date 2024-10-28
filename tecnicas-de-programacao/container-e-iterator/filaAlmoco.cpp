#include <iostream>
#include <cstdlib> 
#include <locale>
#include <queue> // Declara��o da Biblioteca


using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	
	queue <string> filaAlmoco; // Declara��o da fila(queue), chamada de "filaAlmoco"
 	
 	
 	

	//adicionando elementros � fila atrav�s do m�todo "push()"
	filaAlmoco.push("Pai");
	filaAlmoco.push("Mae");
	filaAlmoco.push("Filho1");
	filaAlmoco.push("Filho2");
	
	//Verificanto a quantidade de elementos
	cout <<"O n�mero de pessoas presentes na fila �: "<< filaAlmoco.size() << endl;
	
	
	
	
	
	
	//retorno da pessoa que est� no inicio da fila, atrav�s do m�todo "front()"
	cout <<"A primeira pessoa da fila �: "<< filaAlmoco.front() <<endl; 
	
	//retorno da pessoa que est� no final da fila, atrav�s do m�todo "back()"
	cout <<"A �ltima pessoa da fila �: "<< filaAlmoco.back() <<endl; 
	
	
	
	
	//removendo as pessoas da fila
	while(!filaAlmoco.empty()){// enquanto o metodo empty() N�O retornar true, o while continua a rodar
		
		cout <<"A pessoa que est� no come�o da fila agora �: " << filaAlmoco.front() <<endl;
		
		filaAlmoco.pop(); // Remove o elemento que est� no inicio da fila
			 
	}
}





