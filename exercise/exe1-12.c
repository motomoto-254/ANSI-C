/* program that prints one word per line */
#include <stdio.h>

int main(){
    int c;

    while((c = getchar()) != EOF){
        if(c != '\n'){
            if(c != ' '){
                putchar(c);
            }
            else{
                putchar('\n');
            }
        }
    }
}