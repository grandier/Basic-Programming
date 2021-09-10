//Kemas Rafly Omar Thoriq - https://bit.ly/3ceFFlj

#include <stdio.h>
int main() {    

    int number1;
	int number2;
	int number3;
	int sum;
	int mean;
	int product;
    
    printf("Masukkan tiga bilangan bulat yang berbeda: ");
    scanf("%d %d %d", &number1, &number2, &number3);


    sum = number1 + number2 + number3;      
    
    printf("Jumlah adalah = %d\n", sum);
	 
	mean = (number1 + number2 + number3)/ 3;
	
	printf("Rata-rata adalah  = %d\n", mean);
	 
	product = number1 * number2 * number3;
	
	printf("Hasil kali adalah = %d \n", product);
    
    
    
    if ( number1 < number2 && number1 < number3) {
		printf("Nomor paling kecil/minumun adalah = %d \n", number1);
	}
	if ( number2 < number3 && number2 < number1) {	
		printf("Nomor paling kecil/minumun adalah = %d \n", number2);
	}
	if ( number3 < number1 && number3 < number2) {
		printf("Nomor paling kecil/minumun adalah = %d \n", number3);
	}
	
	if ( number2 > number1 && number2 > number3) {
		printf("Nomor paling besar/maksimum adalah = %d \n", number2);
	}
	if ( number1 > number2 && number1 > number3) {
		printf("Nomor paling besar/maksimum adalah = %d \n", number1);
	}
	if ( number3 > number1 && number3 > number2) {
		printf("Nomor paling besar/maksimum adalah = %d \n", number3);
	}
	 return 0;
    
}
