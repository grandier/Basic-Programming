// https://bit.ly/3ceFFlj
// Kemas Rafly Omar Thoriq

#include <stdio.h>
#include <stdlib.h>

struct homosapiens{
	int age;
	int weight;
	float height; 
	char name[30];
}homosapien[20];

int main(){
	struct homosapiens *ptr;
	int i, n;
	printf("Number of Homosapiens: ");
	scanf("%d", &n);
	ptr = (struct homosapiens*)malloc(n * sizeof(struct homosapiens));
	for(i=0; i < n; i++){
		printf("Masukkan nama dan umurnya : \n");
		scanf("%s %d", &(ptr+i)->name, &(ptr+i)->age);
		printf("Masukkan berat dan tinggi : \n");
		scanf("%d %f", &(ptr+i)->weight, &(ptr+i)->height);
	}
	for(i = 0; i < n; i++){
		printf("name: %s\tage: %d\n", (ptr+i)->name, (ptr+i)->age);
		printf("berat: %d\tinggi: %.1f\n", (ptr+i)->weight, (ptr+i)->height);
	}
	return 0;
}
