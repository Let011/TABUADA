#include <stdio.h>

int main(void) {
  
  int i=0, n1;
  
  printf("Insira qual tabuada você precisa:\n");
  scanf("%d", &n1);
  
   for(i=0;i<=10;i++){
     printf("%d x %d = %d\n", n1,i,n1*i);
  }

  return 0;
}