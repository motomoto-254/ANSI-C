/* program to count blanks, tabs and newlines */
#include <stdio.h>

int main(){
    int c, nl, b, t;

    nl = b = t = 0;
    while((c = getchar()) != EOF){
        if(c == '\n')
            ++nl;
        if(c == '\t')
            ++t;
        if(c == ' ')
            ++b;
    }
    printf("blank:%d tabs:%d newlines:%d", b, t, nl);
}