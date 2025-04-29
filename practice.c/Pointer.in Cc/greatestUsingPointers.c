#include <stdio.h>
void domax(int *x,int *y, int *max){
if(*x>*y){
    *max=*x;
}
else{
    *max = *y;
}
}
int main(){
    int a,b,max;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    domax(&a,&b,&max);
    printf("max of %d and %d =%d\n",a,b,max);
    return 0;
}
