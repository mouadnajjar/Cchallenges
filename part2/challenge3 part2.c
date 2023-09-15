#include <stdio.h>


int main(){
	int calc1;
	int calc2;
	int f;
	int somme;
printf("enter your calc 1 :");
scanf("%d",&calc1);

printf("enter your calc 2 :");
 scanf("%d",&calc2);
 somme=calc1+calc2;
if (calc1==calc2){
	f= somme*3;
	printf("this is your results :%d",f);
}else{
	printf("your numbers in not the same!%d ",somme);
}
	return 0; 
}
