#include <stdio.h>
#include <math.h>
void squareroot(float n){
    float result;
    result = sqrt(n);
    printf("square root of %f is %f\n",n,result);
}
int main(){
    float n;
    printf("enter a number: ");
    scanf("%f",&n);
    
    squareroot(n);
    return 0;

}

