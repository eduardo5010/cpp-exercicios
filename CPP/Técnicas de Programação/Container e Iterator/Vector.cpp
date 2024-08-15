#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> vetor;
	vetor.assign(10,0);
	for (unsigned i=0; i<vetor.size();i++)
		vetor[i]=i;
	for (int i=0; i<vetor.size();i++)
		cout<<vetor.at(i)<<" ";
	cout<<endl;
	cout<<"TAM = "<<vetor.size()<<endl;
	vetor[0]=vetor[9]*2;
	cout<<vetor[0]<<endl;
	vetor.push_back(10);
	for (unsigned i=0; i<vetor.size();i++)
		cout<<vetor.at(i)<<" ";
	cout<<endl;
	return 0;
}