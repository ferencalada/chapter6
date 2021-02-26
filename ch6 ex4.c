//programa que devuelve cambio de 100 pesos con el menor número de monedas y billetes SIN CENTAVOS
#include <stdio.h>
char lineprice[100];
float price, change, owing;
int bill50, bill20, mon10, mon5, mon2, mon1=0;
int main(void){
	printf("how much are you paying?");
	fgets(lineprice,sizeof(lineprice),stdin);
	sscanf(lineprice,"%f",&price);
	owing=100-price;
	if(price==100){
	printf("change is %f",change);
	}
	if(owing>=50){
		bill50=bill50+1;
		owing=owing-50;
	}
	while(owing>=20){
		bill20=bill20+1;
		owing=owing-20;
	}
	if(owing>=10){
		mon10=mon10+1;
		owing=owing-10;
	}
	if(owing>=5){
		mon5=mon5+1;
		owing=owing-5;
	}
	while(owing>=2){
		mon2=mon2+1;
		owing=owing-2;
	}
	mon1=owing;
		printf("your change will consist of %d tickets for 50, %d tickets for 20, %d coins for 10, %d coins for 5, %d coins for 2 and %d coins for 1",bill50,bill20,mon10,mon5,mon2,mon1);
	return 0;
}
