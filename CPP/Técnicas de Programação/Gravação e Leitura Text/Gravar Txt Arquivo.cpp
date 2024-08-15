#include <iostream>
#include <fstream> // para funções de arquivo: ofstream e ifstream
#include <conio.h> // para getch()
#include <cstring>  // para strncpy()
#include <string>
#include <iomanip>  //para o setprecision

using namespace std;

#include "Livro2.cpp"

int main(){
	ofstream arquivo;
	arquivo.open("listaLivros.txt", ios::trunc);
//	ofstream arquivo("listaLivros.txt", ios::trunc);

	Livro li;
	if (arquivo.is_open()){
		do{
			li.novonome(); // lê do teclado os dados do livro
			arquivo<<li.getTitulo()<<endl;
			arquivo<<li.getAutor()<<endl;
			arquivo<<li.getNumReg()<<endl;
			arquivo<<li.getPreco()<<endl;
			
			cout << endl<< "Inserir outro livro (s/n) "<<endl;
		}while(getch( ) == 's');
	}else{
		cout<<"Não foi possível abrir o arquivo"<<endl;
		return(-1);
	}
	
	arquivo.close();  //fecha arquivo
	
	return 0;
}

