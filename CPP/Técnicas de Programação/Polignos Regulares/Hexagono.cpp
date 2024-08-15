#include "Hexagono.h"

Hexagono::Hexagono(int medida_lado){
	nro_de_lados = 6;
	this->medida_lado = medida_lado;
}
	  
float Hexagono::calculaArea() const{
	return (3*medida_lado*sqrt(3))/2;
}
