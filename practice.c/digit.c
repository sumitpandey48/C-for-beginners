#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    printf("%d",ch>='0' && ch<='9');
    return 0;

}