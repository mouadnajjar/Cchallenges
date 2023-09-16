#include<stdio.h>

int main(){
	int note;
	printf("type your note : ");
	scanf("%d",&note);
	if(note<10){
	printf("your are rejected.");
	}	
		else if (note>=10 && note<=12){
		printf("your note is a fair grade");
		
		}else if (note>=12 && note<=14){
		printf("your note is quite well.");
		}else if (note>=14 && note<=16){
		printf("your note is good.");
		}else {
		printf("your note is very good!.");}
		
	
}
