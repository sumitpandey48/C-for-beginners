#include <stdio.h>
int main()
{
    int a,b,c,sum,avg;
    printf("enter the values of a :");
    scanf("%d",&a);
    printf("enter the values of b :");
    scanf("%d",&b);
    printf("enter the values of c :");
    scanf("%d",&c);
    sum=a+b+c;
    avg=sum/3;
    printf("%d",avg);
    return 0;

}