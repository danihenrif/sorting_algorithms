#include <stdio.h>

void tradeValues(int *v, int max_value_position, int positionmark){
  int aux = v[max_value_position];
  v[max_value_position] = v[positionmark];
  v[positionmark] = aux;
}

void insertionSort(int *vet,  int N){
  for(int i = N-1 ; i >= 0 ; i--){
    for(int j = i ; vet[j] > vet[j+1] && j < N-1 ; j++){
      tradeValues(vet, j, j+1);
    }
  }
}

void printArray(int arr[], int n){
    int i;
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}


int main(){
  
  int *vetor;
  
  // for(int i = 10 , j = 0; i > 0  ; i--, j++){
  //   *(vetor + j) = i;
  // }
  *(vetor + 0) = 3;
  *(vetor + 1) = 2;
  *(vetor + 2) = 4;
  *(vetor + 3) = 5;
  *(vetor + 4) = 8;
  *(vetor + 5) = 1;
  *(vetor + 6) = 0;
  *(vetor + 7) = 9;
  *(vetor + 8) = 7;



  printArray(vetor,9);
  
  printf("\n");
  
  insertionSort(vetor, 9);
  
  printArray(vetor, 9);


  return 0;
}