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
		cout<<"N�o foi poss�vel abrir o arquivo"<<endl;
		return(-1);
	}
 
 	Livro li;
	arquivo.read(reinterpret_cast<char *> (&li),sizeof(Livro)); // l� do arquivo
	
	while(arquivo && !arquivo.eof()){ // enquanto n�o for fim de arquivo...
		li.imprime(); // escreve livro
		arquivo.read(reinterpret_cast<char *> (&li),sizeof(Livro)); // l� do arquivo
	} 
	arquivo.close();
}

