#ifndef CIRCULO_H
#define CIRCULO_H
	
class Circulo : public Ponto {  //vejam a indicação de herança
	double raio;
  public:
	Circulo( int = 0, int = 0, double = 0.0 ); 
	void setRaio( double );    
	double getRaio() const; 
	double calculaDiametro() const; 
	double calculaComp() const; 
	double calculaArea() const; 
	void imprime() const;
};

#endif