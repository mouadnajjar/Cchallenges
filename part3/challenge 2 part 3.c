#include<stdio.h>
#include<stdlib.h>

int main()
{

    int i , j , u;
    int n ;

    printf("how many lines do you wants? : ");
    scanf("%d",&n);

        for(i = 0 ; i < n ; i++){

            for(j = 0 ; j <= n - i ; j++){

                printf(" ");
            }

                for(u = 1 ; u <= i * 2 - 1 ; u++){

                printf("*");

            }

            printf("\n");
        }




    return 0;
}
