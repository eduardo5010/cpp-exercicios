// Mostra a ordem segundo a qual os construtores da
// Classe-Base e das classes derivadas são chamados

#include <iostream>  
using namespace std;
#include "Ponto.cpp"      
#include "Circulo.cpp"
    
int main(){
	Circulo circulo1( 72, 29, 4.5 );
	Circulo circulo2( 5, 5, 10 );
	return 0; 
}