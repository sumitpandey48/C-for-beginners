#include <stdio.h>
int main()
{
    int i,j,isPrime;
    printf("prime numbers upto 50\n");
    for( i =2; i<50; i++){
        isPrime=1;
    for (j=2;j<i;j++){
        if(i % j == 0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf("%d\n",i);

    }
    }
    return 0;
}