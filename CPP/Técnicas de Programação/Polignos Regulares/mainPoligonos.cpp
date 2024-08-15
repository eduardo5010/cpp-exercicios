#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#include "PoligonoRegular.cpp"
#include "Quadrado.cpp"
#include "Hexagono.cpp"

int main(){
	Quadrado q1(5);
	Hexagono h1(3), h2;

	cout<<fixed<<setprecision(2);
	cout<<"Area do quadrado = "<<q1.calculaArea()<<endl;
	cout<<"Perimetro do quadrado = "<<q1.perimetro()<<endl<<endl;
	
	cout<<"Area do hexagono = "<<h1.calculaArea()<<endl;
	cout<<"Perimetro do hexagono = "<<h1.perimetro()<<endl<<endl;
	
	cout<<"Area do hexagono = "<<h2.calculaArea()<<endl;
	cout<<"Perimetro do hexagono = "<<h2.perimetro()<<endl;

	return 0;
}