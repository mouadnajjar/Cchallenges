#include <stdio.h>

int main (){
	int i;
	int a;
	int mult;
	printf("type your number :");
	scanf("%d",&a);
	for(i=1; i<=10; i++){
	mult=a*i;	
		
		printf("%d*%d=%d\t\n",a,i,mult);
	}
	
}
