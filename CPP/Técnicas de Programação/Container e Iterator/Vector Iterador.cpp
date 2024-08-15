#include <iostream>
#include <vector>
#include <clocale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int val, n;
	vector<int> numeros;
	vector<int>::iterator it;
	cout<<"Digite quantos valores você quer digitar: ";
	cin>>n;
	for (unsigned i=0;i<n;i++){
		cout<<endl<<"Digite um valor inteiro: ";
		cin>>val;
		numeros.push_back(val);
	}
	cout<<endl;
	cout<<"Os elementos do vetor são: "<<endl;
	for (it=numeros.begin();it!=numeros.end();it++)
		cout<<*it<<" ";
	
	return 0;
}
 	  	  