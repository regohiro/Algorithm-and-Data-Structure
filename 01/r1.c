#include <stdio.h>

int main(void){
  int i,j;
  for(i=1;i<=9;i++){
    for(j=1;j<=9;j++){
      if(i<=j){
        printf("%2d ", i*j);
      }else{
        printf("   ");
      }
    }
    printf("\n");
  }
}