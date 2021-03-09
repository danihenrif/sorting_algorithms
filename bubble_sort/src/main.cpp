#include <iostream>

#include "bubble_sort.h"

int main(){
  
  int *vetor;
  
  for(int i = 10 , j = 0; i > 0  ; i--, j++){
    *(vetor + j) = i;
  }
  
  for(int i = 0; i < 10 ; i++){
    printf("%d \t", *(vetor + i));
  }
  
  printf("\n");
  
  bubbleSortGrowing2(vetor,10);

  for(int i = 0; i < 10 ; i++){
    printf("%d \t", *(vetor + i));
  }

  return 0;
}