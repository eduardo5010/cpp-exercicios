#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

#include "Ponto.cpp"
#include "Circulo.cpp"


int main(){
	setlocale(LC_ALL, "Portuguese");
	Circulo circulo( -2, -8, 2.4 );
//	Circulo circulo2, circulo3(2,3);
	cout<<"Posi��o inicial do C�rculo"<<endl;
	cout << "x = " << circulo.getX()<<endl<< "y = " << circulo.getY()<<endl
           << "raio = " << circulo.getRaio()<<endl;
	circulo.imprime();   
	 	       
	circulo.setX( 2 );          
	circulo.setY( 2 );          
	circulo.setRaio( 4.25 ); 
//	circulo.set_altera(-5, -8, 4.25);
	
	cout << endl<<endl;
	cout <<"Nova posic�o e raio do c�rculo:"<<endl;
	cout << "Centro = (" << circulo.getX() << ", " << circulo.getY() << ")"<<endl;
	cout << "Raio = " << circulo.getRaio()<<endl;
	
	cout <<"C�lculos com os novos valores"<<endl;
	cout << fixed << setprecision( 2 ); 
	cout <<"Di�metro = "<<circulo.calculaDiametro()<<endl;
	cout <<"Comprimento = "<<circulo.calculaComp()<<endl;
	cout << "�rea = " << circulo.calculaArea()<<endl;
	
	return 0;
}
