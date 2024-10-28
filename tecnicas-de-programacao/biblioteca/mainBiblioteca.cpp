#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

#include "Livro.cpp"
#include "Biblioteca.cpp"

int main(){
	Biblioteca bib;
	bib.leDadosLista();
	bib.imprimeLista();
	
	return 0;
}