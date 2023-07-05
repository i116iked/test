#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){ // n & 1 の計算を最初に行うように括弧を追加
    printf("%d は偶数です\n", n);
  }
  return 0;
}
