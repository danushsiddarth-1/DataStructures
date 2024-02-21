#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *a;
  a=(int*)malloc(5*sizeof(int));
  printf("\nFIRST ARRAY : ");
  for(int i=0;i<5;i++){
    scanf("%d",(a+i));
  }

  int *b;
  b=(int*)malloc(5*sizeof(int));
  printf("\nSECOND ARRAY  : ");
  for(int i=0;i<5;i++){
    scanf("%d",(b+i));
  }
  int *c;
  c = (int*)malloc(5*sizeof(int));
  for(int i=0;i<5;i++){
    *(c+i)=*(b+i)+*(a+i);
  }
  printf("\nTHIRD ARRAY : ");
  for(int i=0;i<5;i++){
    printf(" %d",*(c+i));
  }
  return 0;
}