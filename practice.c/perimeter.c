#include <stdio.h>
int main()
{
    //perimeter of a rectangle
    float a,b,perimeter;
    printf("enter the value of a :");
    scanf("%f",&a);
    printf("enter the value of b :");
    scanf("%f",&b);
    perimeter = 2*a + 2*b;
    printf("perimeter is %f",perimeter);
    return 0;


}