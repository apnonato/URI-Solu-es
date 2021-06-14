#include <stdio.h>

int main(void) {
  int numero,horas;
  double valor,salario;
  scanf("%d %d %lf",&numero,&horas,&valor);
  printf("NUMBER = %d\n",numero);
  salario =horas*valor;
  printf("SALARY = U$ %.2lf\n",salario);
  return 0;
}
