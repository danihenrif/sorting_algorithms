#include <stdio.h>

int checaOrdenadoCrescente(int vet[], int tam){
  for(int i = 0 ; i < tam - 1; i++){
    if(vet[i] < vet[i+1]) return 0;
  }
  return 1;
}

int main(){ 
  
  int vetor[10] = {10,9,8,7,6,5,4,3,2,1};
  
  printf("%d", checaOrdenadoCrescente(vetor, 10));
  
  return 0;
}
