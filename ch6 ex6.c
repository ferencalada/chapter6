//Write a program that, given the number of hours an employee
//worked and the hourly wage, computes the employee's weekly pay. Count any
//hours over 40 as overtime at time and a half.

#include <stdio.h>
int hours;int extrahours=0; char hoursline[100];
float wage; char wageline[100];
int main(void){
	printf("insert the number of hours worked during the week");
		fgets(hoursline, sizeof(hoursline),stdin);
		sscanf(hoursline,"%d",&hours);
	printf("insert the wage per hour");
		fgets(wageline, sizeof(wageline),stdin);
		sscanf(wageline,"%f",&wage);
		
		if (hours>40){
		extrahours=hours-40;
		hours=hours-extrahours;
		}
		
		printf("you will be paid %f",hours*wage+extrahours*1.5*wage);
		
	return 0;
}
