#include <stdio.h>
void sum(int n){
    int c =0,r;
    while(n>0){
        r = n%10;
        c = c+r;
        n = n/10;
    }
    printf("%d\n",c);
}
int main(){
    int d ;
    printf("enter the number :");
    scanf("%d",&d);
    sum(d);
    return 0;
}


    
