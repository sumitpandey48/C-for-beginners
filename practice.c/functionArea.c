#include <stdio.h>
#include <math.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);

int main(){
    float a = 5.0;
    float b = 10.0;
    printf("area is %f\n",rectangleArea(a,b));
    float side = 10;
    printf("area is %f\n",squareArea(side));
    float rad= 10;
    printf("area is %f\n",circleArea(rad));
    return 0;
}
float squareArea(float side){
    return side * side ;
}
float circleArea(float rad){
    return 3.14* rad* rad;
}
float rectangleArea(float a,float b){
    return a*b;
}




