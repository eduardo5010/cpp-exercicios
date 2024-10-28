#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <stdlib.h> // para usar o comando system()

using namespace std;

#include "Livro2.cpp"

int main(){
	ifstream arquivo;
	arquivo.open("listaLivros.txt"); // abre arquivo para leitura
//	ifstream arquivo("lista.txt");

 	 string tituloLivro, nomeAutor;
 	 int valorNumreg;
 	 double valorPreco;
     if(arquivo.is_open()){
		while(!arquivo.eof()){ // enquanto n�o for fim de arquivo...
			
			getline(arquivo,tituloLivro);
			
			if (arquivo.eof())  //esta solu��o n�o � muito elegante para c++
				break;
			
			getline(arquivo,nomeAutor);
			arquivo>>valorNumreg;
			arquivo>>valorPreco;
			Livro li(tituloLivro, nomeAutor, valorNumreg, valorPreco);
			li.imprime(); // escreve livro
			system("pause");
			arquivo.ignore();

		} 
	 }else{
		cout<<"N�o foi poss�vel abrir o arquivo"<<endl;
		exit(-1);
	 }
	arquivo.close();
}
