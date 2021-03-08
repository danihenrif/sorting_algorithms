#include "../include/selection_sort.h"

void tradeValues(int *v, int max_value_position, int positionmark){
  int aux = v[max_value_position];
  v[max_value_position] = v[positionmark];
  v[positionmark] = aux;
}

void selectionSort(int *vet,  int N){
  int argmax;

  for(int i = N - 1 ; i > 0 ; i--){
    argmax = 0;
    for(int j = 1 ; j <= i ; j++){
      if(vet[j] > vet[argmax]){
        argmax = j;
      }
    }
    tradeValues(vet,argmax,i);
  }
}