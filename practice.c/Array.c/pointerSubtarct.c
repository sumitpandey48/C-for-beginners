#include <stdio.h>
int main(){
    int age =23;
    int _age =23;
    int *ptr = &age;
    int *_ptr = &age;

    printf("%u,%udifference =%u\n",ptr,_ptr,ptr-_ptr);
    _ptr = &age;
    printf("comparison =%u\n",ptr =_ptr);
    return 0;

}
