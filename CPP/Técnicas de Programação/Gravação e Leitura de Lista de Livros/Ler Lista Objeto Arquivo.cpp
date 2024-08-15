#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

#include "Livro4.cpp"

int main(){
	ifstream arquivo;
	arquivo.open("objetosLivros.txt",ios::in); // abre arquivo para leitura
//	ifstream arquivo("credito.txt",ios::in);
	if (!arquivo){
		cout<<"N�o foi poss�vel abrir o arquivo"<<endl;
		return(-1);
	}
 
 	vector <Livro> li;
 	Livro liaux;
	arquivo.read(reinterpret_cast<char *> (&liaux),sizeof(Livro)); // l� do arquivo

	while(arquivo && !arquivo.eof()){ // enquanto n�o for fim de arquivo...
		li.push_back(liaux);
		arquivo.read(reinterpret_cast<char *> (&liaux),sizeof(Livro)); // l� do arquivo
	} 
	
	// escreve os elementos da lista de livros
	cout<<endl<<"Dados dos livros"<<endl;
	for (unsigned i=0; i<li.size();i++){
		li[i].imprime();
		cout<<endl;
	}

	arquivo.close();
}