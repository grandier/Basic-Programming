//https://bit.ly/3ceFFlj

#include <stdio.h>

int main(){
	int i=0;
	int n;
	int j;
	
	printf("Masukan Berapa Banyak Angka yang Diinginkan di Deret = ");
	scanf("%d", &n);
	
	while (i < n){
		int j= (i*(i+1))/2;
			printf("%d ",j);
		i++;
	}
	return 0;
}
