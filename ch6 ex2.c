#include <stdio.h>
char linegrade[100];
int grade;
int main(void){
	printf("enter your grade: ");
	fgets(linegrade,sizeof(linegrade),stdin);
	sscanf(linegrade,"%d",&grade);
	
	if (grade<=60){
		printf ("F");
	}
	else{
		if(grade<=70){
			printf("D");
		}
		else{
			if(grade<=80){
				printf("C");
			}
			else{
				if(grade<=90){
					printf("B");
				}
				else{
					printf("A");
				}
			}
		}
	}
	return 0;
}
