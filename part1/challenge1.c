#include <stdio.h>
//challenge 1
int main(){

char name[20];

int age;
char number[12];
//NAME
printf("whats your name?\n");
scanf("%s",&name);
printf("your name is %s\n",name); 
//age
printf("whats your age \n");
scanf("%d",&age);
printf("your age is %d old\n",age);

//number 
printf("what is your number?\n");
scanf("%s",&number);
printf("this is your number: %s\n",number);

return 0;
};

