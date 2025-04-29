#include <stdio.h>
void printAddress(int n);
int main(){
int n =4;
printf("Address is %u\n",&n);
printAddress(n);
return 0;
}
void printAddress(int n){
    printf("Address is %u\n",&n);
}

