#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){ 
    printf("%d �͋����ł�\n", n);

    
  }
  return 0;
}
