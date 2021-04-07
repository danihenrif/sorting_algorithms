#include <stdio.h>

void quickSort(int *V, int N){

  if(N<=1) return;

  int pivot = 0; int pp = 1; int qq = N-1;
  int tmp;

  do{
    while((V[pp]<=V[pivot])&(pp<qq)) pp++;
    while((V[qq]>V[pivot])) qq--;
    if(pp<qq){
      tmp = V[pp]; V[pp] = V[qq]; V[qq] = tmp;
    }
  }while(pp<qq);

  tmp = V[pivot]; V[pivot] = V[qq]; V[qq] = tmp; pivot = qq;

  quickSort(V,pivot);
  quickSort(&V[pivot+1],N-(pivot+1));
}

int main(){
  
  int *vetor;
  
  *(vetor + 0) = 5;
  *(vetor + 1) = 6;
  *(vetor + 2) = 2;
  *(vetor + 3) = 1;
  *(vetor + 4) = 3;
  *(vetor + 5) = 9;
  *(vetor + 6) = 7;
  *(vetor + 7) = 4;

  
  for(int i = 10 , j = 0; i > 0  ; i--, j++){
    *(vetor + j) = i;
  }

  for(int i = 0; i < 10 ; i++){
    printf("%d \t", *(vetor + i));
  }

  quickSort(vetor,10);
  
  printf("\n");

  for(int i = 0; i < 10 ; i++){
      printf("%d \t", *(vetor + i));
    }
  return 0;
}
