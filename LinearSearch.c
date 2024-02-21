#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *a;
  int sum = 0;
  a=(int*)malloc(5*sizeof(int));
  for(int i=0;i<5;i++){
    scanf("%d",(a+i));
  }
  printf("ENTER THE ELEMENT TO BE SEARCHED\n");
  scanf(" %d",&sum);
  for(int i=0;i<5;i++){
    if(sum==*(a+i)){
      printf("ELEMENT FOUND AT INDEX %d\n",i);
    }
  }
}