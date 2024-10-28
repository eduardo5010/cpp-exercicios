#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <vector>

using namespace std;

#include "Livro3.cpp"

int main(){
	ifstream arquivo;
	arquivo.open("listaLivros.txt"); // abre arquivo para leitura
//	ifstream arquivo("lista.txt");

 	 string tituloLivro, nomeAutor;
 	 int valorNumreg;
 	 double valorPreco;
 	 vector <Livro> li; //cria uma lista de livros (li)
     if(arquivo.is_open()){
		while(!arquivo.eof()){ // enquanto n�o for fim de arquivo...
			
			getline(arquivo,tituloLivro);
			
			if (arquivo.eof())  //esta solu��o n�o � muito elegante para c++
				break;
			
			getline(arquivo,nomeAutor);
			arquivo>>valorNumreg;
			arquivo>>valorPreco;
			Livro liaux(tituloLivro, nomeAutor, valorNumreg, valorPreco); //cria um objeto livro com os dados lidos no arquivo
			li.push_back(liaux);  //insere o objeto livro na lista
			arquivo.ignore();

		} 
	 }else{
		cout<<"N�o foi poss�vel abrir o arquivo"<<endl;
		return(-1);
	 }
	arquivo.close();
	// escreve os elementos da lista de livros
	cout<<"Dados dos livros"<<endl<<endl;
	for (unsigned i=0; i<li.size();i++){
		li[i].imprime();
		cout<<endl;
	}

}
