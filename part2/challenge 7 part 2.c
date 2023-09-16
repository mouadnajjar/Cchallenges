#include <stdio.h>

int main(){
	char chart;
	int ascii;
	printf("type your character : ");
	scanf("%c",&chart);
	ascii=(int)chart;
	if(ascii>=65 && ascii<=90){
		printf("Le caractère est majuscule");
	}else{
			printf("Le caractère est miniscule");
	}
}
