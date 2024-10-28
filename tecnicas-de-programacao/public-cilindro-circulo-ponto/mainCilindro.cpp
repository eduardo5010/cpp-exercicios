#include <iostream>  
#include <iomanip>
#include <locale>
using  namespace std;

#include "Ponto.cpp"
#include "Circulo.cpp"
#include "Cilindro.cpp" 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Cilindro cilindro( 12, 23, 2.4, 5.7 );
	cilindro.imprime();  //m�todo da classe Cilindro
	
	//os m�todos set fazem a valida��o dos dados sempre
	//se for digitado um n�mero n�o valido para x ou y, o valor vai para zero 
	cilindro.setX( 2 ); 	//m�todo da classe Ponto
	cilindro.setY( 2 );	 //m�todo da classe Ponto
	
	cilindro.setRaio( 4.25 ); //m�todo da classe Circulo
	cilindro.setAltura( 10 ); //m�todo da classe Cilindro
	
	cout <<endl<< "Nova localiza��o e raio: "<<endl;
	cilindro.imprime();		 //m�todo da classe Cilindro
	cout << fixed << setprecision( 2 );
	cout<<endl;	
	cout <<"Di�metro = " << cilindro.calculaDiametro()<<endl; //m�todo da Classe Circulo
	cout <<"Comprimento = " << cilindro.calculaComp()<<endl; //m�todo da classe Circulo
	cout <<"�rea = " << cilindro.calculaArea()<<endl;  //m�todo da classe Cilindro
	cout <<"Volume = " << cilindro.calculaVolume()<<endl<<endl; //m�todo da classe Cilindro
	return 0;
}
