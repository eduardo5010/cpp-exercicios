#include <iostream>
#include <iomanip>
using namespace std;

#include "Quadrado.cpp"

int main(){
	Quadrado q1(5);
	cout<<"Area= "<<q1.calculaArea()<<endl; //classe Quadrado
	cout<<"Perimetro= "<<q1.perimetro()<<endl; //classe PoligonoRegular
	
	return 0;
}