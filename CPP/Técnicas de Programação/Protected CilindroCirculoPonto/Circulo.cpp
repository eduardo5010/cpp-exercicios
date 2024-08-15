#include "Circulo.h"   

Circulo::Circulo(int x, int y, double raio){
	this->x = x;
	this->y = y;
	setRaio(raio);  //this->raio = raio
}

void Circulo::setRaio( double raio ) {
	 this->raio = raio < 0.0 ? 0.0 : raio; 
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
//	cout<< x << y; ou
//	cout<<getX()<<getY(); ou
	Ponto::imprime();
	cout<<"raio = "<<getRaio()<<endl;
}

void Circulo::set_altera(int x, int y, double raio){
	this->x = x;
	this->y = y;
	this->raio = (raio < 0.0 ? 0.0 : raio);
}

