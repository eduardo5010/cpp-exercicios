#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <vector>

using namespace std;

#include "Estoque.cpp"
#include "Notebook.cpp"
#include "Produto.cpp"

int main(){
	Estoque estoque;
	estoque.leDadosLista();
	estoque.imprimeLista();
	
	return 0;
}