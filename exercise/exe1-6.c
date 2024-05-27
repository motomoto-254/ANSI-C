/* verify the expression getchar() != EOF is 1 or 0 */
#include <stdio.h>

int main(){
    int c;

    if(getchar() != EOF)
        printf("1");
    else
        printf("0");
}
