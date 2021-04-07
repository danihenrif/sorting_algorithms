#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *V, int N){

  if(N<=1) return;
   
  mergeSort(V,N/2);
  mergeSort(V+(N/2),N-(N/2));

  int *tmp = (int *)malloc(N*sizeof(int));

  int ii=0; int pp = 0; int qq = N/2;
   while((pp<(N/2))&&(qq<N)){
      if(V[pp]<=V[qq]) tmp[ii++] = V[pp++];
      else tmp[ii++] = V[qq++];
   }
   while(pp<(N/2)) tmp[ii++] = V[pp++];
   while(qq<N) tmp[ii++] = V[qq++];
   for(ii=0;ii<N;ii++) V[ii] = tmp[ii];

   free(tmp);
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

  mergeSort(vetor,10);

  for(int i = 0; i < 10 ; i++){
    printf("%d \t", *(vetor + i));
  }

  return 0;
}
