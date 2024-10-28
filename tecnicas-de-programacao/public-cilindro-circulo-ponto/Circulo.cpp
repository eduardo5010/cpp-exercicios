#include "Circulo.h"   

Circulo::Circulo(int x, int y, double raio):Ponto(x,y) {
 
	setRaio(raio);
}

void Circulo::setRaio( double raio ) {
	 this->raio = ( raio < 0.0 ? 0.0 : raio ); 
}
double Circulo::getRaio() const {
	return raio;
}
double Circulo::calculaDiametro() const { 
	return 2 * raio;
} 
double Circulo::calculaComp() const {
	return 3.14159 * calculaDiametro(); 
} 
double Circulo::calculaArea() const {
	return 3.14159 * raio * raio;
}
void Circulo::imprime() const{
	Ponto::imprime();
	cout<<"raio = "<<getRaio()<<endl;
}
