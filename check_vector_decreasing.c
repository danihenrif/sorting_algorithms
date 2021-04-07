#include <stdio.h>

int checaOrdenadoCrescente(int vet[], int tam){
  for(int i = 0 ; i < tam - 1; i++){
    if(vet[i] > vet[i+1]) return 0;
  }
  return 1;
}

int main(){ 
  
  int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
  
  printf("%d", checaOrdenadoCrescente(vetor, 10));
  
  return 0;
}
