#include <stdio.h>
void checkTemp(int temp){
    if(temp>=30){
        printf("hot\n");
    }else {
        printf("cold\n");
    }
    }
    int main() {
    int temp;
    printf("Enter the temperature: ");
    scanf("%d", &temp);
    
    checkTemp(temp);
    
    return 0;
}