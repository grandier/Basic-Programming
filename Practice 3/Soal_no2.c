//https://bit.ly/3ceFFlj
//Kemas Rafly Omar Thoriq

#include <stdio.h>

int main(){
	int nim1, nim2, nim3;
	int lim1, lim2, lim3;
	int saldo1, saldo2, saldo3;
	
	printf("Masukan 3 NIM nasabah : \n");
	scanf("%d %d %d", &nim1, &nim2, &nim3);
	
	printf("Masukan Limit Kredit Sebelum Resesi per nasabah: \n");
	scanf("%d %d %d", &lim1, &lim2, &lim3);
	
	printf("Masukan Saldo yang tersisa per nasabah : \n");
	scanf("%d %d %d", &saldo1, &saldo2, &saldo3);

printf("==.==.==.==.==.==.==.==.==.==.==.==.==.==.==.==.==.==.==.\n");

	lim1 = lim1 / 2;
	printf("Limit yang baru bagi NIM %d adalah %d\n", nim1, lim1);

	lim2 = lim2 / 2;
	printf("Limit yang baru bagi NIM %d adalah %d\n", nim2, lim2);

	lim3 = lim3 / 2;
	printf("Limit yang baru Bagi NIM %d adalah %d\n", nim3, lim3);
	
printf("==.==.==.==.==.==.==.==.==.==.==.==.==.==.==.==.==.==.==.\n");

	if(lim1 < saldo1 ){
		printf("Utang untuk NIM %d melebihi limit kredit yang baru.\n", nim1);
	}
	if(lim2 < saldo2 ){
		printf("Utang untuk NIM %d melebihi limit kredit yang baru.\n", nim2);
	}
	if(lim3 < saldo3 ){
		printf("Utang untuk NIM %d melebihi limit kredit yang baru.\n", nim3);
	}
	return 0;
}
