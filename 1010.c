#include <stdio.h>

int main(void) {
  int codigo1,produto1,codigo2,produto2;
  double valor1,valor2;
  double total;
  scanf("%d %d %lf",&codigo1,&produto1,&valor1);
  scanf("%d %d %lf",&codigo2,&produto2,&valor2);
  total = (produto1*valor1)+(produto2*valor2);
  printf("VALOR A PAGAR: R$ %.2lf\n",total);
  return 0;
}
