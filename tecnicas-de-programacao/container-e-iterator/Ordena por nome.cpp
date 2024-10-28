#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Pessoa {
    string nome;
    int idade;
    public:
        Pessoa(string no, int id){
            idade = id;
            nome = no;
        }
        string getNome(){
            return nome;
        }
        int getIdade(){
            return idade;
        }
};

bool ordena_por_nome(Pessoa A, Pessoa B){
    if (A.getNome() < B.getNome())
       return true;
    return false;
}

int main(){

      vector <Pessoa> VP;
      vector <Pessoa>::iterator ptr;

      VP.push_back(Pessoa("Joao", 25));
      VP.push_back(Pessoa("Carla", 32));
      VP.push_back(Pessoa("Abel", 4));
      VP.push_back(Pessoa("Maria", 30));


      sort ( VP.begin(), VP.end(), ordena_por_nome);

      // percorrendo a lista com um ITERATOR
      for(ptr = VP.begin(); ptr != VP.end(); ptr++)
      {
            cout << "Nome: " << ptr->getNome();
            cout << " - Idade: " << ptr->getIdade() << endl;
      }
    return 0;
}
