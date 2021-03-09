#include "../include/bubble_sort.hpp"

//the conflict takes place when there is no exchange of values

void bubbleSort(int *vet,  int N){
  int aux;
  bool conflict;
  do{
    conflict = false;
    for(int i = 0 ; i < N - 1 ; i++){
      //exchange of values
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
      //exchange of values
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