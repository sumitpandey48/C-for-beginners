#include <stdio.h>
int islargest(int arr[],int size){
int max = arr[0];
for(int i=1;i<size;i++){
    if(arr[i]>max){
        max =arr[i];
    }
    }
    return max;
}
int main(){
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
int largest = islargest(arr,n);
printf("%d is largest number:\n",largest);

return 0;

}


