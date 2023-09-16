#include <stdio.h>

int main(){
  char chart;
        int ascii;
        printf("type your character : ");
        scanf("%c",&chart);
     	ascii=(int)chart;
	    if(ascii>=65 && ascii<=90){
		printf("your caracter is majuscule");
        } else if (ascii>=97 && ascii<=122){
        	printf("your caracter is miniscule ");
		}else printf("this is not a caracter!");
	
}
