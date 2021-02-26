#include<stdio.h>
#include<stdlib.h>
//cajero autom'atico

int main(){

int choice;
float add, extract;
float savings=1000;

printf("\nGood morning, welcome");
	
printf("\n\t1.Check your current savings");
printf("\n\t2.Add to your savings");
printf("\n\t3.Extract from your savings");
printf("\n\t4. Exit\n\n\t");

while(choice!=4){
scanf("%i",&choice);


switch(choice){
	case 1: printf("\nyour current savings are %.2f\n\t",savings); break;
	case 2: printf("\ntype the amount you'd like to add\t");
			scanf("%f",&add);
							savings= add+savings; break;
	case 3: printf("\ntype the amount you'd like to extract\t");
			scanf("%f",&extract);
							savings= savings-extract; break;
	case 4: break;
	default: printf("error, type another number\n\t"); break;
}
}
system ("cls");
printf("Have a nice day");


return 0;
}
