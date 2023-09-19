#include <stdio.h>

int main() {
	
    int nombres[10];
    int i, j, lkhawi;

    
    for (i = 0; i < 10; i++) {
        printf("type your number  : ");
        scanf("%d", &nombres[i]);
    }

  
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (nombres[j] < nombres[j + 1]) {  // 0 6 1 8
             
                lkhawi = nombres[j];
                nombres[j] = nombres[j + 1]; //0[j+1,j,j+1,j]
                nombres[j + 1] = lkhawi;
            }
        }
    }

   
    printf("this is the results of the bigger number to the smaller :\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", nombres[i]);
    }

    return 0;
}
