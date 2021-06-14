#include <stdio.h>

int main(void) {
  float v1 ; 
  scanf("%f",&v1);
  float v2;
  scanf("%f",&v2);
  float v3;
  scanf("%f",&v3);
  float media = (v1*2 + v2 *3 + v3*5)/10 ; 
  printf("MEDIA = %.1f\n",media);
  return 0;
}
