#include <iostream>
#include <cstdlib> 
#include <locale>
#include <stack> // Declara��o da Biblioteca


using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	
	stack <string> timesOlimp; // Declara��o da pilha(stack), chamada de "timesRJ"
 	
 	

	//adicionando elementros � pilha atrav�s do m�todo "push()"
	timesOlimp.push("Brasil");
	timesOlimp.push("Alemanha");
	timesOlimp.push("Costa do Marfim");
	timesOlimp.push("Ar�bia Saudita");
	
	
	
	//retorno do elemento que est� no topo da pilha, atrav�s do m�todo "top()"
	cout <<"O primeiro elemento da pilha �: "<< timesOlimp.top() <<endl; 
	
	
	
	//Verificanto a quantidade de elementos
	cout <<"O n�mero de elementos presentes na pilha �: "<< timesOlimp.size() << endl;
	
	
	
	//removendo os elementos da pilha
	while(!timesOlimp.empty()){// enquanto o metodo empty() N�O retornar true, o while continua a rodar
		
		cout <<"O novo elemento no topo �: " << timesOlimp.top() <<endl;
		
		timesOlimp.pop(); // Remove o elemento que est� no topo da pilha
			 
	}
	
	
	system("pause");
	system("cls");
	
	
	
	
	
	
	
	
//	stack <string> timesRJ; // Declara��o da pilha(stack), chamada de "timesRJ"
//	stack <string> copiaTime;// Declara��o da pilha(stack), chamada de "copiaTime"
	//M�todo swap s� est� dispon�vel para c++ vers�o 11
		
//	timesRJ.swap(copiaTime); // transfere os elementos
	
	
	
	
	
	
	
/*	
	
	cout <<"Qantidade de elementos presente na nova pilha �: "<< copiaTime.size()<<endl;  
	
	while(!copiaTime.empty()){// enquanto o metodo empty() N�O retornar true, o while continua a rodar
		
		cout << "O novo elemento no topo �: " << copiaTime.top() <<endl;
		
		copiaTime.pop(); // Remove o elemento que est� no topo da pilha
			 
	}
*/
}
