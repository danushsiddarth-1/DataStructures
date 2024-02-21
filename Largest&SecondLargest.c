#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *a;
  int larg = 0;
  int seclarg =0;
  a=(int*)malloc(5*sizeof(int));
  for(int i=0;i<5;i++){
    scanf("%d",(a+i));
  }
  for(int i=0;i<5;i++){
    if(larg<*(a+i)){
      larg=*(a+i);
      *(a+i)=0;
      
    }
  }
  for(int i=0;i<5;i++){
  if(seclarg<*(a+i)){
    seclarg=*(a+i);
    }
  } 
  
    
  
  printf("\n%d",larg);
  printf("\n%d",seclarg);
  return 0;

}
