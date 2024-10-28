#include "Cilindro.h"

Cilindro::Cilindro( int x, int y, double raio, 
   double altura) : Circulo( x, y, raio ){
		setAltura( altura );
}
void Cilindro::setAltura( double altura ) {
	this->altura = altura < 0.0 ? 0.0 : altura;
} 
double Cilindro::getAltura() const {
	return altura;
} 
double Cilindro::calculaArea() const {
	return 2 * Circulo::calculaArea() + Circulo::calculaComp() * getAltura();
}
double Cilindro::calculaVolume() const {
		return Circulo::calculaArea() * getAltura();
}
void Cilindro::imprime() const{
		Circulo::imprime();
		cout << "Altura = " << getAltura()<<endl;
  
}
