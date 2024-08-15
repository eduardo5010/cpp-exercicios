#include "Ponto.h" 
Ponto::Ponto ( int vx, int vy ): x( vx ), y( vy ) {
	cout << "construtor Ponto : ";
	imprime();
	cout << endl;
}
Ponto::~Ponto ()  {                                
	cout << "destrutor Ponto : ";
	imprime();                      
	cout << endl; 
} 
void Ponto::alteraX( int vx ){
	x = vx; 
}
int Ponto::retornaX() const{
return x;
} 
void Ponto::alteraY( int vy ){
   y = vy; 
} 
int Ponto::retornaY() const{
   return y;  
}
void Ponto::imprime() const{
   cout << "(" << retornaX() << ", " << retornaY() << ")";
}