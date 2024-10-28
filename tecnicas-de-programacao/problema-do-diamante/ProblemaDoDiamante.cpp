#include <iostream>

using namespace std;

class A 
{
  public:
    A(int x) 
    { 
      cout << "A Classe A foi chamada." << endl; 
    }
};

class B : public A 
{
  public:
    B(int x) : A(x) 
    {
      cout << "A Classe B foi chamada." << endl;
    }
};

class C : public A 
{
  public:
    C(int x) : A(x) 
    {
      cout << "A Classe C foi chamada." << endl;
    }
};

class D : public B, public C 
{
  public:
    D(int x) : C(x), B(x) 
    { 
      cout << "A Classe D foi chamada." << endl; 
    }
};

int main() 
{ 
  D d(1); 
}