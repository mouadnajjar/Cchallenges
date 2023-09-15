#include <stdio.h>

int main(){
int b, a;
printf("a?");
scanf("%d",&a);
printf("b?");
scanf("%d",&b);
int sum = a+b;
int moins = a-b;
int fois = a*b;
int modelo = a%b;
int non = (int)a/b;
printf("the results of %d + %d is %d",a, b, sum);
printf("the results of %d - %d is %d",a, b, moins);
printf("the results of %d * %d is %d",a, b , fois);
printf("the ruselts of %d %%  %d is %d",a ,b ,modelo);
printf("the ruselts of %d / %d is %d ",a, b , non);
return 0;	
}
