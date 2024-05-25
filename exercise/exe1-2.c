/*printf's argument string contains \c*/
/*\c is an unkown escape sequence error message at runtime*/
#include<stdio.h>

int main(){
    printf("hello, moto");
    printf("\t");
}