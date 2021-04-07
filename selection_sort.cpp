#include <stdio.h>

void changePosition(int *v, int max_value_position, int positionmark){
  int aux = v[max_value_position];
  v[max_value_position] = v[positionmark];
  v[positionmark] = aux;
}

void selectionSort(int *vet,  int N){
  int argmax;

  for(int i = N - 1 ; i > 0 ; i--){
    argmax = 0;
    
    //looking for the highest value
    for(int j = 1 ; j <= i ; j++){
      if(vet[j] > vet[argmax]){
        argmax = j;
      }
    }
    changePosition(vet,argmax,i);
  }
}

void selectionSortArgMin(int *vet, int N){
  int argmin;

  for(int i = 0; i < N ; i++ ){
    argmin = i;

    for(int j = i + 1 ; j < N ; j++ ){
      if(vet[j] < vet[argmin]){
        argmin = j;
      }
    }
    changePosition(vet,argmin,i);

  }
}

int main(){
  
  int *vetor;
  
  for(int i = 10 , j = 0; i > 0  ; i--, j++){
    *(vetor + j) = i;
  }
  for(int i = 0; i < 10 ; i++){
    printf("%d \t", *(vetor + i));
  }
  
  printf("\n");
  
  selectionSortArgMin(vetor,10);

  for(int i = 0; i < 10 ; i++){
    printf("%d \t", *(vetor + i));
  }

  return 0;
}
