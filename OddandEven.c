#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *a;
  int odd = 0;
  int even = 0;
  a=(int*)malloc(5*sizeof(int));

  for(int i=0;i<5;i++){
    scanf("%d",(a+i));
  }
  for(int i=0;i<5;i++){
    if(*(a+i)%2==0){
      even+=1;
    }
    else{
      odd+=1;
    }
  }
  printf("\n ODD : %d",odd);
  printf("\n EVEN : %d",even);
  return 0;

}