#include "Circulo.h"
Circulo::Circulo( int vx, int vy, double vraio )
			       : Ponto( vx, vy ) { // chama o construtor da Classe-Base
	alteraRaio( vraio );
	cout << "construtor Circulo: ";
	imprime();
	cout<< endl;
}
Circulo::~Circulo() {                                 
	cout << "destrutor Circulo : ";
	imprime(); 
	cout<<endl;                      
} 
void Circulo::alteraRaio (double vraio){
	raio=vraio;
}
double Circulo::retornaRaio() const{
	return raio;
}
void Circulo::imprime() const {
	cout << "Centro = ";
	Ponto::imprime();      // Chama a funcao imprimir Ponto
	cout << "; Raio = " << retornaRaio();
}
