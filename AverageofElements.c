#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *a;
  int sum = 0;
  a=(int*)malloc(5*sizeof(int));
  for(int i=0;i<5;i++){
    scanf("%d",(a+i));
  }
  for(int i=0;i<5;i++){
    sum=sum+*(a+i);
  }
  printf("\n%d",sum/5);
  return 0;

}