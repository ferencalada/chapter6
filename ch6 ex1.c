//Write a program to find the distance between two points. 
#include <stdio.h>
#include <math.h>
float point1x, point1y, point2x, point2y;

float measure(float point1x, float point1y, float point2x, float point2y){
	float distance=(sqrt((point2x-point1x)*(point2x-point1x)+(point2y-point1y)*(point2y-point1y)));
	printf("the distance between the points is %f",distance);
	return distance;
}

int main (void){
	printf("type the coordinates of the first point");
		scanf("%f %f",&point1x, &point1y);
	printf("type the coordinates of the second point");
		scanf("%f %f",&point2x,&point2y);
	measure(point1x,point1y,point2x,point2y);

		
	return 0;
}


