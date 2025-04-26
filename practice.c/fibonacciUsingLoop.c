#include <stdio.h>
int main(){
    int a = 0,b = 1,c,i,n;
    c=a+b;
    printf("enter number of terms :");
    scanf("%d",&n);
    printf("fibonacci series is\n%d\n%d\n",a,b);
    for(i=3;i<=n;i++){
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
        
    }
        return 0;

    }


