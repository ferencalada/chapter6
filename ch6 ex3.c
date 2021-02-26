#include <stdio.h>
char linegrade[100];
int grade, s;
char signo;

int main(void){
	printf("enter your grade: ");
	fgets(linegrade,sizeof(linegrade),stdin);
	sscanf(linegrade,"%d",&grade);
	s = (grade % (10));
	
	if(s>=1 && s <=3){
	    signo = '-';
	}
	if(s>=8 || s == 0){
	    signo = '+';
	}
	
	if (grade<=60){
		printf ("F");
	}
	else{
		if(grade<=70){
			printf("D%c", signo);
			
		}
		else{
			if(grade<=80){
				printf("C%c", signo);
				
			}
			else{
				if(grade<=90){
					printf("B%c", signo);
					
				}
				else{
					printf("A%c", signo);
					
				}
			}
		}

}


	return 0;
}
