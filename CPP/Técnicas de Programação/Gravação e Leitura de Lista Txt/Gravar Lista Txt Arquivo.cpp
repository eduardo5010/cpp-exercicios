#include <iostream>
#include <fstream> // para funções de arquivo: ofstream e ifstream
#include <conio.h> // para getch()
//#include <cstring>  // para strncpy()
#include <string>
#include <iomanip>  //para o setprecision
#include <vector>  //para cria o vetor (li)

using namespace std;

#include "Livro3.cpp"

int main(){
	ofstream arquivo;
	arquivo.open("listaLivros.txt", ios::trunc);
//	ofstream arquivo("listaLivros.txt", ios::trunc);
	
	vector <Livro> li;  //*** cria a lista de livros (li)
	Livro liaux;
	do{
		liaux.novonome(); //*** lê do teclado os dados do livro
		li.push_back(liaux); //*** insere os dados na lista de livro
		cout << endl<< "Inserir outro livro (s/n) "<<endl;
	}while(getch( ) == 's');

	if (arquivo.is_open()){
		for (unsigned i=0;i<li.size();i++){
			arquivo<<li[i].getTitulo()<<endl;
			arquivo<<li[i].getAutor()<<endl;
			arquivo<<li[i].getNumReg()<<endl;
			arquivo<<li[i].getPreco()<<endl;	
		}
	}else{
		cout<<"Não foi possível abrir o arquivo"<<endl;
		return(-1);
	}
	
	arquivo.close();  //fecha arquivo

	return 0;
}

