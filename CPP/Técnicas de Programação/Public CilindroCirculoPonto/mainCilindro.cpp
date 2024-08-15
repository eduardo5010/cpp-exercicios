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
	cilindro.imprime();  //método da classe Cilindro
	
	//os métodos set fazem a validação dos dados sempre
	//se for digitado um número não valido para x ou y, o valor vai para zero 
	cilindro.setX( 2 ); 	//método da classe Ponto
	cilindro.setY( 2 );	 //método da classe Ponto
	
	cilindro.setRaio( 4.25 ); //método da classe Circulo
	cilindro.setAltura( 10 ); //método da classe Cilindro
	
	cout <<endl<< "Nova localização e raio: "<<endl;
	cilindro.imprime();		 //método da classe Cilindro
	cout << fixed << setprecision( 2 );
	cout<<endl;	
	cout <<"Diâmetro = " << cilindro.calculaDiametro()<<endl; //método da Classe Circulo
	cout <<"Comprimento = " << cilindro.calculaComp()<<endl; //método da classe Circulo
	cout <<"Área = " << cilindro.calculaArea()<<endl;  //método da classe Cilindro
	cout <<"Volume = " << cilindro.calculaVolume()<<endl<<endl; //método da classe Cilindro
	return 0;
}
