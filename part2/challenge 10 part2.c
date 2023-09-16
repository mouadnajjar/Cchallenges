#include <stdio.h>

int main (){
	int years;
	int months;
	int days;
	
	printf("type your date here :");
	scanf("%d/%d/%d",&days, &months, &years);
	
	switch(months){
		case 1 :
			printf("%d-January-%d",days, years);
			break;
		case 2 :
			printf("%d-February-%d",days, years);
			break;
		case 3 :
			printf("%d-March-%d",days, years);
			break;
		case 4 :
			printf("%d-April-%d",days, years);
			break;
		case 5 :
			printf("%d-May-%d",days, years);
			break;
		case 6 :
			printf("%d-June-%d",days, years);
			break;
		case 7 :
			printf("%d-July -%d",days, years);
			break;
		case 8 :
			printf("%d-August-%d",days, years);
			break;
		case 9 :
			printf("%d-September-%d",days, years);
			break;
		case 10 :
			printf("%d-October-%d",days, years);
			break;
		case 11 :
			printf("%d-November-%d",days, years);
			break;
		case 12 :
			printf("%d-December-%d",days, years);
			break;
	}
	
}
