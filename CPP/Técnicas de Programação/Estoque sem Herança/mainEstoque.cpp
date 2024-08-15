#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <vector>

using namespace std;

#include "Notebook.cpp"
#include "Estoque.cpp"

int main(){
	Estoque estoque;
	estoque.leDadosLista();
	estoque.imprimeLista();
	
	return 0;
}