#include<stdio.h>
int main(void)
{
  int n;
  printf("enter number\n");
  scanf("%d", &n);
  for (size_t i = n; i >0; i--) {
    printf("%d\n",i );
  }
}
