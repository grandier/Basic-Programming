// https://bit.ly/3ceFFlj
// Kemas Rafly Omar Thoriq

#include <stdio.h>
#include <stdlib.h>

int perkalianVektor (int *n1, int *n2, int *hitung){
 	int i;
 	int sum = 0;
 	for(i=0; i<*hitung; i++){
 		sum += n1[i] * n2[i];
 	}
 	return sum;
}

int main(){
 int dimensi, *vektor1, *vektor2, i;
 int jumlah[1] = {0};
 
 printf("=~=~=~=~=~=~ =~=~=~=~=~= Mencari Nilai Not Vektor =~=~=~=~=~=~=~=~=~=~=~=\n");
 
 printf("Masukkan Dimensinya : "); 
 scanf("%d", &dimensi);
 
 vektor1 = (int*) calloc (dimensi, sizeof(int));
 
 if(vektor1!=NULL){
  printf("Masukkan bilangan vektor sesuai dengan %d dimensinya : \n", dimensi); 
  for(i=0; i<dimensi; i++){
   scanf("%d", vektor1+i);
  }
 }
 
 vektor2 = (int*) calloc (dimensi, sizeof(int)); 
 printf("Masukkan bilangan vektor sesuai dengan %d dimensinya : \n", dimensi);
 if(vektor2!=NULL){
  for(i=0; i<dimensi; i++){
   scanf("%d", vektor2+i);
  }
 }
 
 int a = perkalianVektor (vektor1, vektor2, &dimensi);
 
 printf("Hasil dari Dot Vektornya adalah : %d\n", a);
 
 printf("=~=~=~=~=~=~=~=~=~=~=~= Akhir dari Program =~=~=~=~=~=~=~=~=~=~=~=\n");
 
 free(vektor1);
 free(vektor2);
 
 return 0;
}


