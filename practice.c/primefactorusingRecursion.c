#include <stdio.h>
void primefactors(int n,int i){
    if(n<=1)
        return;
    if(n%i ==0){
        printf("%d ",i);
        primefactors(n / i,i);
    }
    else{
        primefactors(n,i+1);
    }
    }
    int main(){
        int n;
    printf("enter a positive integer: ");
    scanf("%d",&n);
    if(n <= 1){
    printf("no prime factors for less than 2\n");
    }
    else{
        printf("prime factors of %d are: ",n);
    primefactors(n,2); 
    printf("\n");
    }
    return 0;
    

    }

