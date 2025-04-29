#include<stdio.h>
void _square(int * n);
int main(){
    int number = 4;
    _square (&number);
    printf("number is %d\n",number);
    return 0;
}
//call by reference
void _square(int * n){
    *n = (*n) * (*n);
    printf("square =%d\n",*n);
}



