#include <stdio.h>
int main()
{
    int n,isPrime =1;
    printf("enter number :");
    scanf("%d",&n);
    if(n == 0 || n == 1){
        isPrime = 0;
    }
    else{
    for(int i= 2; i<n;i++){
        if(n % i == 0){
        isPrime = 0;
        break;
    }
    }
    }
    if(isPrime){
        printf("%d is prime number\n",n);
     } else {
        printf("%d is not a prime number.\n", n);
    }
     return 0;
    }

    
