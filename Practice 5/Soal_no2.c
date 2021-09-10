//https://bit.ly/3ceFFlj
//Kemas Rafly Omar Thoriq

#include <stdio.h>
#include <math.h>

int enterData(int r, int c, int a[10][10], int name ){
	int i, j;
	
	printf("Matriks ke-%i: \n", name);
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("Masukkan elemen [%i] [%i]: ", i+1, j+1);
			scanf("%i", &a[i][j]);
		}
	}
	printf("\n");
}

int addMatrices(int r, int c, int a[10][10], int b[10][10], int sum[10][10]) {
	int i, j;
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			sum[i][j] = 0;
		}
	}
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
}

void display(int r, int c, int sum[10][10]) {
	int i, j;
	
	printf("\nOutput: \n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%i ", sum[i][j]);
		}
		
		printf("\n");
	}
}
int main() {
	int r = 0, c = 0; 
	int a[10][10], b[10][10], sum[10][10];
	
	printf("Masukkan nilai baris matrix: "); 
	scanf("%i", &r);
	printf("Masukkan nilai kolom matrix: "); 
	scanf("%i", &c);
	printf("\n");
	
	if ((r >= 2) && (c >= 2) && (r <= 10) && (c <= 10)) {
	
		if ((r % 2 == 0) && (c % 2 == 0)) {
			
			enterData(r, c, a, 1);
			enterData(r, c, b, 2);
			
			addMatrices(r, c, a, b, sum);
			
			display(r, c, sum);
			
		} else {
			printf("Tolong hanya masukkan bilangan genap.");
			return 1;
		}
		
	} else {
		printf("Input maksimal adalah 10 dan minimal adalah 2");
		return 1;
	}
	
	
	return 0;
}
