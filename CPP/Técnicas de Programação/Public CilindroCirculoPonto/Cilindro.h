#ifndef CILINDRO_H
#define CILINDRO_H

class Cilindro : public Circulo {
	public:
		Cilindro( int = 0, int = 0, double = 0.0, double = 0.0 ); 
		void setAltura( double );  
		double getAltura( ) const;  
		double calculaArea( ) const;   
		double calculaVolume( ) const;
		void imprime( ) const; 
	private:                               
		double altura; 
}; 
#endif
