#include <iostream>
#include <fstream> // para fun��es de arquivo: ofstream e ifstream
#include <conio.h> // para getch()
#include <cstring>  // para strncpy()
#include <string>
#include <iomanip>  //para o setprecision
#include <vector>

using namespace std;

#include "Livro4.cpp"

int main(){
	ofstream arquivo;
	arquivo.open("objetosLivros.txt", ios::binary);
//	ofstream arquivo("credito.dat", ios::binary);

	vector <Livro> li;
	Livro liaux;
	do{
		liaux.novonome(); // l� do teclado os dados do livro
		li.push_back(liaux);  //insere livro na lista
		cout << endl<< "Inserir outro livro (s/n) "<<endl;		
	}while(getch( ) == 's');
	
	if (!arquivo){
			cout<<"N�o foi poss�vel abrir o arquivo"<<endl;
			return(-1);
	} 
	for (unsigned i=0;i<li.size();i++){
		arquivo.write(reinterpret_cast<const char *> (&li[i]), sizeof(Livro)); // grava no arquivo
	}
	
	arquivo.close();  //fecha arquivo
	
	return 0;
}