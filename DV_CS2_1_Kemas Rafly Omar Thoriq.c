//Kemas Rafly Omar Thoriq - https://bit.ly/3ceFFlj

#include <stdio.h>
int main() {   

	int hujan1;
	int hujan2;
	
	printf("Masukan Curah Hujan Tertinggi di Depok = ");
	
	scanf("%d", &hujan1);
	
	printf("Masukan Curah Hujan saat ini di Depok = ");
	
	scanf("%d", &hujan2);
	
	if ( hujan1 > hujan2) {
		printf("Curah hujan terinnggi adalah = %d \n", hujan1);
	}
	if ( hujan1 < hujan2) {
		printf("Curah hujan terinnggi adalah = %d \n", hujan2);
	}
	if ( hujan1 == hujan2) {
		printf("Curah hujan terinnggi sama dengan curah hujan saat ini = %d \n", hujan2);
	}
	return;
}
