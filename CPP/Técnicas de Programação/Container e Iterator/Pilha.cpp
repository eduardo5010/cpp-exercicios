#include <iostream>
#include <cstdlib> 
#include <locale>
#include <stack> // Declaração da Biblioteca


using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	
	stack <string> timesOlimp; // Declaração da pilha(stack), chamada de "timesRJ"
 	
 	

	//adicionando elementros à pilha através do método "push()"
	timesOlimp.push("Brasil");
	timesOlimp.push("Alemanha");
	timesOlimp.push("Costa do Marfim");
	timesOlimp.push("Arábia Saudita");
	
	
	
	//retorno do elemento que está no topo da pilha, através do método "top()"
	cout <<"O primeiro elemento da pilha é: "<< timesOlimp.top() <<endl; 
	
	
	
	//Verificanto a quantidade de elementos
	cout <<"O número de elementos presentes na pilha é: "<< timesOlimp.size() << endl;
	
	
	
	//removendo os elementos da pilha
	while(!timesOlimp.empty()){// enquanto o metodo empty() NÃO retornar true, o while continua a rodar
		
		cout <<"O novo elemento no topo é: " << timesOlimp.top() <<endl;
		
		timesOlimp.pop(); // Remove o elemento que está no topo da pilha
			 
	}
	
	
	system("pause");
	system("cls");
	
	
	
	
	
	
	
	
//	stack <string> timesRJ; // Declaração da pilha(stack), chamada de "timesRJ"
//	stack <string> copiaTime;// Declaração da pilha(stack), chamada de "copiaTime"
	//Método swap só está disponível para c++ versão 11
		
//	timesRJ.swap(copiaTime); // transfere os elementos
	
	
	
	
	
	
	
/*	
	
	cout <<"Qantidade de elementos presente na nova pilha é: "<< copiaTime.size()<<endl;  
	
	while(!copiaTime.empty()){// enquanto o metodo empty() NÃO retornar true, o while continua a rodar
		
		cout << "O novo elemento no topo é: " << copiaTime.top() <<endl;
		
		copiaTime.pop(); // Remove o elemento que está no topo da pilha
			 
	}
*/
}
