//https://bit.ly/3ceFFlj
//Kemas Rafly Omar Thoriq

#include <stdio.h>
#include <math.h>


int counter = 1;

int main(){							// main funtion
	while(counter != 0){			// sentinel counter
	int a;
	printf("Masukkan Angka = ");	// user input
	scanf("%d", &a);
	
	if (GenapKuadrat(a)){							// function call 
	printf("Angka Anda Adalah GenapKuadrat\n");		// output
}	
	else if(genap(a)){								// function call 
	printf("Angka Anda Adalah Genap\n");			// output
}
	else if(kuadrat(a)){							// function call 
	printf("Angka Anda adalah Deret Kuadrat\n");	// output
}
	else{
	printf("Angka anda bukan Genap, Deret Kuadrat, ataupun keduanya \n");				// else condition
}
	printf("\n=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=\n");
	printf("\n"); 
	printf("Masukkan Angka 0 jika ingin selesai, jika tidak masukan angka apa saja = ");
    scanf("%d", &counter);
    printf("\n=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=\n");
	printf("\n"); 
	
	}return 0;
}
		
int genap(int a){							// funtion untuk mengecek genap
	return (a%2 == 0);
}
int kuadrat(int a){							// funtion untuk mengecek deret kuadrat
	int akar = sqrt(a);
	int kuadrat = akar * akar;
	return (a == kuadrat);
}
int GenapKuadrat(int a){					// funtion untuk mengecek genap dan deret kuadrat
	int akar = sqrt(a);
	int kuadrat = akar * akar;
	return (a%2 == 0 && a == kuadrat);
}

