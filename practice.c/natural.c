#include <stdio.h>
int main(){
    int a;
  printf("enter any number");
  scanf("%d",&a);

  if(a>=1){
    printf("%d is a natural no\n",a);
  }else{
    printf("%d is not a natural no\n",a);
  }
  return 0;
}