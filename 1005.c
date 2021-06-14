#include <stdio.h>

int main(void) {
  double v1 ; 
  scanf("%lf",&v1);
  double v2;
  scanf("%lf",&v2);
  double media = (v1*3.5 + v2 * 7.5)/11 ; 
  printf("MEDIA = %.5lf\n",media);
  return 0;
}
