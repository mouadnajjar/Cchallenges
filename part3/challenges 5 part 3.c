#include <stdio.h>

int main(){
	int nbrs;
	int i;
	int a;
	printf("type your numbers : ");
	scanf("%d",&nbrs);
	
	while(nbrs!=0){
		i=nbrs%10;
		
		
		printf("%d",i);
		nbrs=nbrs/10;
		
		
	}
	
}
