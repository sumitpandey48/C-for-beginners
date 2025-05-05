#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,2,2,5,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    int count =0;

    for(int i=0;i<size;i++){
        if(arr[i]==x){
            count++;
        }
        }
        printf("number %d occurs %d times.\n",x,count);
        return 0;
    }
