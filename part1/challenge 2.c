#include <stdio.h>

int main(){
	float C, F;
	printf("la temp�rature en Fahrenheit");
	scanf("%f",&F);
C = (F-32)/1.8;
printf("la transforme en degr� Celsius:%f",C);

if(C<=7){
	printf("tres froid");
}else if (C<20){
	printf("froid");
}else if(C<34){
	printf("chaud");
	
}else{
	printf("tres chaud");
}
	
	
return 0;	
}
