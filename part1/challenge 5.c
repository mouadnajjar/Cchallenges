#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float x1,x2;
	float y1,y2;
	float MN;
	
	printf("entre lee coordonnes de N:");
	scanf("%f",&x1);
	scanf("%f",&y1);
	
	printf("entre le distance de M :");
	scanf("%f",&x2);
	scanf("%f",&y2);
	
	MN = sqrt(pow((x2 - x1), 2)+pow((y2 - y1), 2));
	printf("this is your distance: %f",MN);
	return 0;
}
