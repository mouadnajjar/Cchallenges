#include <stdio.h>

int main (){
int nbr;
printf("type your number :");
scanf("%d",&nbr);
int c=(int)nbr/100;
int h= (int)(nbr%100)/10;
int r= (int) nbr%10;
printf("your reveres number is :%d%d%d",r, h, c);

    
}
