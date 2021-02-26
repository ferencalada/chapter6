//A leap year is any year divisible by 4, unless the year is divisible by
//100, but not 400. Write a program to tell if a year is a leap year.
#include <stdio.h>
char yearline [100];
int year;
int main (void){
	printf("type a year ");
	fgets(yearline, sizeof(yearline), stdin);
	sscanf(yearline,"%d",&year);
if ((year%4)==0){
	if ((year%100)==0 && (year%400)!=0){
		printf("the year is not leap");
	}
	else{
		printf("the year is leap");
	}
}
else {
	printf("the year is not leap");
}
return 0;	
}
