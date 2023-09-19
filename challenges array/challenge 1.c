#include<stdio.h>

int main(){
	int a[10];
	int i;
int	max = 0;
	int min;
	  for( i=0; i<10; i++){
  	printf("type your number %d : ",i+1);
  	scanf("%d",&a[i]);
  	printf("your number %d is %d\n", i+1,a[i]);
  	
  	if(max< a[i]){
  		max = a[i];
	  }
	  if(i==0){
	  	min = a[i];
	  }
	  else if (min > a[i] ){
  		
  		min= a[i];
	  }
  	
  }
  	
  	
 
  printf("max = %d \n",max);
  printf("min = %d",min);
}
