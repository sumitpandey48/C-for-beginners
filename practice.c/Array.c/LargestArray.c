#include <stdio.h>
int main(){
    int n,i,largest;
    printf("enter the number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    largest =arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        }
        printf("the largest number is %d\n",largest);
        return 0;

    }



