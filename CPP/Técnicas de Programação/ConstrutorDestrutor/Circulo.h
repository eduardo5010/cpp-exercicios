#ifndef CIRCULO_H
#define CIRCULO_H
      
class Circulo : public Ponto {
	public:
			Circulo( int = 0, int = 0, double = 0.0 );
			~Circulo();                 
			void alteraRaio( double );   // ajusta o raio
			double retornaRaio()const;
			//double retornaRaio() const;   // retorna o raio
			//double retornaDiametro() const; // retorna o diametro
			//double retornaComp() const; // retorna o comprimento
			//double retornaArea() const;        // retorna a area
			void imprime() const;// mostra um objeto Circulo
	private:
			double raio;
 };
#endif