#include <stdio.h>
int main(){
    char small[26],capital[26];
    char *ptrsmall,*ptrcapital;
    int i;
    for(i=0;i<26;i++){
        small[i]='a'+ i;
    }
    for(i=0;i<26;i++){
        capital[i]='A'+ i;
    }
    ptrsmall=small;
    ptrcapital=capital;

    printf("capital letters(A-Z) :\n");
    for(i=0;i<26;i++){
        printf("%c ",*(ptrcapital +i));
    }
    printf("\n");
    printf("small letters(a-z) :\n");
    for(i=0;i<26;i++){
        printf("%c ",*(ptrsmall +i));
    }
    printf("\n");
    return 0;
    }
