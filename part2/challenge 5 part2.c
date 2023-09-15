#include<stdio.h>

int main(){
	int year;
	int month;
	int day;
	int hour;
	int munite;
	int seconde;
	printf("type how much years do you want  : ");
	scanf("%d",&year);

	month=year*12;
	day=month*30;
	hour=day*24;
	munite=hour*60;
	seconde=munite*60;
	
		printf("this is the monts: %d \n",month);
	    printf("this is your days :%d\n",day);
	    printf("this is your hours : %d\n",hour);
	    printf("this is your minutes : %d\n",munite);
	    printf("this is your secondes : %d\n",seconde);
	
}
