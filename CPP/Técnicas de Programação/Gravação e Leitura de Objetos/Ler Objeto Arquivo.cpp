#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;

#include "Livro.cpp"

int main(){
	ifstream arquivo;
	arquivo.open("objetosLivros.txt",ios::in); // abre arquivo para leitura
//	ifstream arquivo("credito.txt",ios::in);
	if (!arquivo){
		cout<<"Não foi possível abrir o arquivo"<<endl;
		return(-1);
	}
 
 	Livro li;
	arquivo.read(reinterpret_cast<char *> (&li),sizeof(Livro)); // lê do arquivo
	
	while(arquivo && !arquivo.eof()){ // enquanto não for fim de arquivo...
		li.imprime(); // escreve livro
		arquivo.read(reinterpret_cast<char *> (&li),sizeof(Livro)); // lê do arquivo
	} 
	arquivo.close();
}

