#include "../include/bubble_sort.hpp"

void bubbleSort(int *vet,  int N){
  int aux;
  bool conflict;
  do{
    conflict = false;
    for(int i = 0 ; i < N - 1 ; i++){
      if(vet[i] > vet[i+1]){
        aux = vet[i];
        vet[i] = vet[i+1];
        vet[i+1] = aux;
        conflict = true;
      }
    }
  }while(conflict == true);
}

void bubbleSort2(int *vet,  int N){
  int aux;
  bool conflict;
  for(int i = 0 ; i < N ; i++){
    conflict = false;
    for(int j = 0 ; j < N-1 ; j++){
      if(vet[j] > vet[j+1]){
        aux = vet[j];
        vet[j] = vet[j+1];
        vet[j+1] = aux;
        conflict = true;
      }
      if(conflict == false) return;
    }  
  } 
}