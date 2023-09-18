#include <stdio.h>

int main(){
	int n;
	int i;
	int test=0;
	
	printf("type your number : ");
	scanf("%d",&n);
	
	for(i=2; i<n ; i++){
	
    if(n%i==0){
    	test++;
	}
	}
	if(test==0){
		printf("your number is a prime");
		
	}else printf("your number is not a prime");
}
