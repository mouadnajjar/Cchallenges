#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int day=(rand() % 7) + 1;
 
 switch(day){
 	case 1 :
 		printf("Monday");
 		break;
 			case 2 :
 		printf("Tuesday");
 		break;
 			case 3 :
 		printf("Wednesday");
 		break;
 			case 4 :
 		printf("Thursday");
 		break;
 			case 5 :
 		printf("Friday");
 		break;
 			case 6:
 		printf("Saturday");
 		break;
 			case 7 :
 		printf("Sunday");
 		break;
 }
	
}
