#include <stdio.h>
int main(){
    int arr[100],n,i;
    int *ptr;
    printf("enter number of elements :");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    printf("array elements in reverse order :");
    for(i=n-1;i>=0;i--){
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    return 0;
    }


