#include <stdio.h>
#include <math.h>
int main()
{
    int num,digit1,digit2,digit3;
    float result;
    printf("enter a 3 digit numnber");
    scanf("%d",&num);

    digit1 = num/100;
    digit2 = (num/10)%10;
    digit3 = num%10;
     result = pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3);
    if (result == num){
        printf("%d is an armstrong no\n",num) ; 
    } 
    else{
        printf("%d is not an armstrong no\n",num);
    }
    return 0;
    }
