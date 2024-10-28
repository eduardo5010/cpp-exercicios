#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  char VENDEDOR;
  double SALARIO_FIXO, TOTAL_DE_VENDAS, COMISSAO, TOTAL_DO_MES;
  cin >> VENDEDOR;
  cin >> SALARIO_FIXO;
  cin >> TOTAL_DE_VENDAS;
  COMISSAO = TOTAL_DE_VENDAS * 0.15;
  TOTAL_DO_MES = SALARIO_FIXO + COMISSAO;
  cout << "TOTAL = R$ " << setiosflags (ios::fixed) << setprecision (2) << TOTAL_DO_MES << endl;
  return 0;
}