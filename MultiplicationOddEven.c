#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *a;
  int odd = 1;
  int even = 1;
  a=(int*)malloc(5*sizeof(int));

  for(int i=0;i<5;i++){
    scanf("%d",(a+i));
  }
  for(int i=0;i<5;i++){
    if(*(a+i)%2==0){
      even*=*(a+i);
    }
    else{
      odd*=*(a+i);
    }
  }
  if(odd == 1){
    odd = 0;
  }
  if(even == 1){
    even = 0;
  }
  printf("\n ODD : %d",odd);
  printf("\n EVEN : %d",even);
  return 0;

}