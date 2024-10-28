#include <iostream>
#include <fstream> // para fun��es de arquivo: ofstream e ifstream
#include <conio.h> // para getch()
#include <cstring>  // para strncpy()
#include <string>
#include <iomanip>  //para o setprecision

using namespace std;

#include "Livro.cpp"

int main(){
	ofstream arquivo;
	arquivo.open("objetosLivros.txt", ios::binary);
//	ofstream arquivo("credito.dat", ios::binary);

	Livro li;
	if (!arquivo){
			cout<<"N�o foi poss�vel abrir o arquivo"<<endl;
			return(-1);
		}
	do{
		li.novonome(); // l� do teclado os dados do livro
		arquivo.write(reinterpret_cast<const char *> (&li), sizeof(Livro)); // grava no arquivo
	
		cout << endl<< "Inserir outro livro (s/n) "<<endl;
	}while(getch( ) == 's');
	
	arquivo.close();  //fecha arquivo
	
	return 0;
}