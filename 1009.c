#include <stdio.h>

int main(void) {
  char nomevendedor;
  double salario,vendas;
  double total;
  scanf ("%s",&nomevendedor);
  scanf("%lf",&salario);
  scanf("%lf",&vendas);  
  total =salario+(vendas*0.15);
  printf("TOTAL = R$ %.2lf\n",total);
  return 0;
}
